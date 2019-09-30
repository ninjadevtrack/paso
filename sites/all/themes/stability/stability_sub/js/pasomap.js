

var themeURL = '/sites/all/themes/stability/stability_sub/';
var __spots = [];

function Zoom(args) {
  jQuery.extend(this, {
    $buttons:   jQuery(".zoom-button"),
    $info:      jQuery("#zoom-info"),
    scale:      { max: 50, currentShift: 0 },
    $container: args.$container,
    datamap:    args.datamap
  });

  this.init();
}

Zoom.prototype.init = function() {
  var paths = this.datamap.svg.selectAll("path"),
      subunits = this.datamap.svg.selectAll(".datamaps-subunit");

  // preserve stroke thickness
  paths.style("vector-effect", "non-scaling-stroke");

  // disable click on drag end
  subunits.call(
    d3.behavior.drag().on("dragend", function() {
      d3.event.sourceEvent.stopPropagation();
    })
  );

  this.scale.set = this._getScalesArray();
  this.d3Zoom = d3.behavior.zoom().scaleExtent([ 1, this.scale.max ]);

  this._displayPercentage(1);
  this.listen();
};

Zoom.prototype.listen = function() {
  this.$buttons.off("click").on("click", this._handleClick.bind(this));

  this.datamap.svg
    .call(this.d3Zoom.on("zoom", this._handleScroll.bind(this)))
    .on("dblclick.zoom", null); // disable zoom on double-click
};

Zoom.prototype.reset = function() {
  this._shift("reset");
};

Zoom.prototype._handleScroll = function() {
  var translate = d3.event.translate,
      scale = d3.event.scale,
      limited = this._bound(translate, scale);

  this.scrolled = true;

  this._update(limited.translate, limited.scale);
};

Zoom.prototype._handleClick = function(event) {
  var direction = $(event.target).data("zoom");

  this._shift(direction);
};

Zoom.prototype._shift = function(direction) {
  var center = [ this.$container.width() / 2, this.$container.height() / 2 ],
      translate = this.d3Zoom.translate(), translate0 = [], l = [],
      view = {
        x: translate[0],
        y: translate[1],
        k: this.d3Zoom.scale()
      }, bounded;

  translate0 = [
    (center[0] - view.x) / view.k,
    (center[1] - view.y) / view.k
  ];

	if (direction == "reset") {
  	view.k = 1;
    this.scrolled = true;
  } else {
  	view.k = this._getNextScale(direction);
  }

  l = [ translate0[0] * view.k + view.x, translate0[1] * view.k + view.y ];

  view.x += center[0] - l[0];
  view.y += center[1] - l[1];

  bounded = this._bound([ view.x, view.y ], view.k);

  this._animate(bounded.translate, bounded.scale);
};

Zoom.prototype._bound = function(translate, scale) {
  var width = this.$container.width(),
      height = this.$container.height();

  translate[0] = Math.min(
    (width / height)  * (scale - 1),
    Math.max( width * (1 - scale), translate[0] )
  );

  translate[1] = Math.min(0, Math.max(height * (1 - scale), translate[1]));

  return { translate: translate, scale: scale };
};

Zoom.prototype._update = function(translate, scale) {
  this.d3Zoom
    .translate(translate)
    .scale(scale);

  this.datamap.svg.selectAll("g")
    .attr("transform", "translate(" + translate + ")scale(" + scale + ")");

  this._displayPercentage(scale);
};

Zoom.prototype._animate = function(translate, scale) {
  var _this = this,
      d3Zoom = this.d3Zoom;

  d3.transition().duration(350).tween("zoom", function() {
    var iTranslate = d3.interpolate(d3Zoom.translate(), translate),
        iScale = d3.interpolate(d3Zoom.scale(), scale);

		return function(t) {
      _this._update(iTranslate(t), iScale(t));
    };
  });
};

Zoom.prototype._displayPercentage = function(scale) {
  var value;

  value = Math.round(Math.log(scale) / Math.log(this.scale.max) * 100);
  this.$info.text(value + "%");
};

Zoom.prototype._getScalesArray = function() {
  var array = [],
      scaleMaxLog = Math.log(this.scale.max);

  for (var i = 0; i <= 10; i++) {
    array.push(Math.pow(Math.E, 0.1 * i * scaleMaxLog));
  }

  return array;
};

Zoom.prototype._getNextScale = function(direction) {
  var scaleSet = this.scale.set,
      currentScale = this.d3Zoom.scale(),
      lastShift = scaleSet.length - 1,
      shift, temp = [];

  if (this.scrolled) {

    for (shift = 0; shift <= lastShift; shift++) {
      temp.push(Math.abs(scaleSet[shift] - currentScale));
    }

    shift = temp.indexOf(Math.min.apply(null, temp));

    if (currentScale >= scaleSet[shift] && shift < lastShift) {
      shift++;
    }

    if (direction == "out" && shift > 0) {
      shift--;
    }

    this.scrolled = false;

  } else {

    shift = this.scale.currentShift;

    if (direction == "out") {
      shift > 0 && shift--;
    } else {
      shift < lastShift && shift++;
    }
  }

  this.scale.currentShift = shift;

  return scaleSet[shift];
};

var pasoContainer = `
  <
`;

function rescaleWorld(datamap) {
  datamap.svg
    .selectAll('g')
    .attr('transform', 'translate(' + d3.event.translate + ') scale(' + d3.event.scale + ')');
}

function rescaleBubbles(datamap) {
  var bubbleRadius = 11;
  var bubbleBorder = 1;
  datamap.svg
    .selectAll('.datamaps-bubble')
    .attr('r', bubbleRadius / d3.event.scale)
    .style('stroke-width', (bubbleBorder / d3.event.scale) + 'px');
}

// d3 code

const $container = jQuery("#pasomap");
let width = $container.width(), height = $container.height();
const showlayers = false;

const projection = d3.geoMercator()
      .scale(1 / (2 * Math.PI))
      .translate([0, 0]);
  
const initialCenter = [-74.297333, 4.570868]; // Colombia Center
const initialScale = 10000;

const transform = d3.zoomIdentity
  .translate(width / 2, height / 2)
  .scale(-initialScale)
  .translate(...projection(initialCenter))
  .scale(-1);

const deltas = [-100, -4, -1, 0];
const url = (x, y, z) => `https://api.mapbox.com/styles/v1/mapbox/streets-v11/tiles/${z}/${x}/${y}${devicePixelRatio > 1 ? "@2x" : ""}?access_token=pk.eyJ1IjoidG1jdyIsImEiOiJjamN0Z3ZiOXEwanZkMnh2dGFuemkzemE3In0.gibebYiJ5TEdXvwjpCY0jg`;

var pi = Math.PI,
    tau = 2 * pi;

const raster_map = function() {
  const svg = d3.create("svg")
      .attr("viewBox", [0, 0, width, height]);

  const tile = d3.tile()
      .extent([[0, 0], [width, height]])
      .tileSize(512)
      .clampX(false);

  const zoom = d3.zoom()
      .scaleExtent([1 << 8, 1 << 22])
      .extent([[0, 0], [width, height]])
      .on("zoom", () => zoomed(d3.event.transform));

  const levels = svg.append("g")
      .attr("pointer-events", "none")
      .selectAll("g")
      .data(deltas)
      .join("g")
      .style("opacity", showlayers ? 0.3 : null);

  svg
      .call(zoom)
      .call(zoom.transform, transform);

  function zoomed(transform) {
    levels.each(function(delta) {
      const tiles = tile.zoomDelta(delta)(transform);

      d3.select(this)
        .selectAll("image")
        .data(tiles, d => d)
        .join("image")
          .attr("xlink:href", d => url(...d3.tileWrap(d)))
          .attr("x", ([x]) => (x + tiles.translate[0]) * tiles.scale)
          .attr("y", ([, y]) => (y + tiles.translate[1]) * tiles.scale)
          .attr("width", tiles.scale)
          .attr("height", tiles.scale);
    });
  }
  
  return svg.node();
}

let map = raster_map();
$container.append(map);




// function Pasomap() {
  
//   this.$container = jQuery("#pasomap");
//   this.pasoData = [];
//   this.instance = new Datamap({
//     scope: 'world',
//     element: this.$container.get(0),
//     done: this._handleMapReady.bind(this),
//     done: function(datamap) {
//       datamap.svg.call(d3.behavior.zoom().on('zoom', redraw));
  
//       function redraw() {
//         datamap.svg.select('g')
//           .selectAll('path')
//           .style('vector-effect', 'non-scaling-stroke');
  
//         rescaleWorld(datamap);
//         rescaleBubbles(datamap);
//       }
//     },
//     geographyConfig: {
//       dataUrl: "colombia-departments.json",
//       popupOnHover: true,
//       highlightOnHover: false,
//       borderColor: '#444',
//       borderWidth: 0.5,
//       highlightBorderWidth: 2,
//       dataUrl: themeURL + 'js/world-countries.json',
//       // dataUrl: themeURL + 'js/colombia-departments.json',
//     },
//     bubblesConfig: {
//       borderWidth: 1,
//       borderOpacity: 1,
//       borderColor: 'rgb(183, 115, 0)',
//       popupOnHover: true, // True to show the popup while hovering
//       radius: 11,
//       fillOpacity: 1,
//       animate: true,
//       highlightOnHover: true,
//       highlightFillColor: '#FC8D59',
//       highlightBorderColor: 'rgba(250, 15, 160, 0.2)',
//       highlightBorderWidth: 1,
//       highlightBorderOpacity: 1,
//       highlightFillOpacity: 0.85,
//       exitDelay: 100, // Milliseconds
//       key: JSON.stringify
//     },
//     fills: {
//       'COL': '#efeeea',
//       'MAJOR': '#306596',
//       'MEDIUM': '#0fa0fa',
//       'MINOR': 'rgba(246, 178, 26, 0.6)',
//       defaultFill: '#f8f8f8'
//     },
//     data: {
//       'JH': { fillKey: 'MINOR' },
//       'MH': { fillKey: 'MINOR' },
//       'COL': { fillKey: 'COL' },
//     },
//     setProjection: function (element) {
//       console.log(element)
//       var projection = d3.geo.mercator()
//         .center([-74.297333, 4.570868]) // LNG, LAT
//         .scale(1300)
//         .translate([element.offsetWidth / 2, element.offsetHeight / 2]);
  
//       var path = d3.geo.path().projection(projection);
//       return { path: path, projection: projection };
//     },
//   });
// }

// Pasomap.prototype._handleMapReady = function(datamap) {
//   this.zoom = new Zoom({
//   	$container: this.$container,
//   	datamap: datamap
//   });
// }

// var pasoMap = new Pasomap();

// d3.csv(themeURL + 'data/demography.csv', function(data) {
//   pasoMap.pasoData["demography"] = data;

//   pasoMap.pasoData["demography"].forEach((value, index) => {
//     __spots.push({
//       name: '',
//       radius: 11,
//       fillKey: 'MINOR',
//       latitude: parseFloat(value.LT),
//       longitude: parseFloat(value.LN)
//     });
//   });

//   pasoMap.instance.bubbles(__spots, {
//     popupTemplate: function (geo, data) {
//       return ['<div class="hoverinfo">' +  data.name,
//       '<br/>Country: ' +  data.radius + '',
//       '<br/>Date: ' +  data.latitude + '',
//       '<br/>Date: ' +  data.longitude + '',
//       '</div>'].join('');
//     }
//   });
// });

