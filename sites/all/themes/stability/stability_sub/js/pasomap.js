// var map = new Datamap({
//   element: document.getElementById('oefmap'),
//   projection: 'mercator',
//   fills: {
//     defaultFill: '#e5e5e4'
//   },
//   geographyConfig: {
//     popupOnHover: true,
//     popupTemplate: function(d) {
      
//     },
//     borderColor: 'white',
//     borderWidth: 0.5,
//     highlightFillColor: '#aa2d2f',
//     highlightBorderColor: '#1a1e24',
//     highlightBorderWidth: 2,
//   }
// });

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

function Pasomap() {
  this.$container = jQuery("#pasomap");
  this.pasoData = [];
  this.instance = new Datamap({
    scope: 'world',
    element: this.$container.get(0),
    done: this._handleMapReady.bind(this),
    geographyConfig: {
      // dataUrl: "https://github.com/deldersveld/topojson/blob/master/countries/colombia/colombia-departments.json",
      popupOnHover: true,
      highlightOnHover: true,
      borderColor: '#444',
      borderWidth: 0.5,
    },
    fills: {
      'COL': '#9467bd',
      'MAJOR': '#306596',
      'MEDIUM': '#0fa0fa',
      'MINOR': '#bada55',
      defaultFill: '#dddddd'
    },
    data: {
      'JH': { fillKey: 'MINOR' },
      'MH': { fillKey: 'MINOR' },
      'COL': { fillKey: 'COL' },
    },
    setProjection: function (element) {
      console.log(element)
      var projection = d3.geo.mercator()
        .center([-74.297333, 4.570868]) // LNG, LAT
        .scale(1200)
        .translate([element.offsetWidth / 2, element.offsetHeight / 2]);
  
      var path = d3.geo.path().projection(projection);
      return { path: path, projection: projection };
    },
  });
}

Pasomap.prototype._handleMapReady = function(datamap) {
  this.zoom = new Zoom({
  	$container: this.$container,
  	datamap: datamap
  });
}

var pasoMap = new Pasomap();

d3.csv(themeURL + 'data/demography.csv', function(data) {
  pasoMap.pasoData["demography"] = data;

  pasoMap.pasoData["demography"].forEach((value, index) => {
    __spots.push({
      name: '',
      radius: 10,
      fillKey: 'MINOR',
      latitude: parseFloat(value.LT),
      longitude: parseFloat(value.LN)
    });
  });

  console.log(__spots);
  pasoMap.instance.bubbles(__spots, {
    popupTemplate: function (geo, data) {
      return ['<div class="hoverinfo">' +  data.name,
      '<br/>Country: ' +  data.radius + '',
      '<br/>Date: ' +  data.latitude + '',
      '<br/>Date: ' +  data.longitude + '',
      '</div>'].join('');
    }
  });
});

// var themeURL = '/sites/all/themes/stability/stability_sub/';
// var pasoData = [];
// var __spots = [];


// var pasoMap = new Datamap({
//   element: document.getElementById('oefmap'),
//   scope: 'world',
//   geographyConfig: {
//       // dataUrl: "https://github.com/deldersveld/topojson/blob/master/countries/colombia/colombia-departments.json",
//       popupOnHover: true,
//       highlightOnHover: true,
//       borderColor: '#444',
//       borderWidth: 0.5,
//   },
//   fills: {
//     'MAJOR': '#306596',
//     'MEDIUM': '#0fa0fa',
//     'MINOR': '#bada55',
//     defaultFill: '#dddddd'
//   },
//   data: {
//     'JH': { fillKey: 'MINOR' },
//     'MH': { fillKey: 'MINOR' }
//   },
//   setProjection: function (element) {
//     console.log(element)
//     var projection = d3.geo.mercator()
//       .center([-72.95439, 10.32572]) // LNG, LAT
//       .scale(1200)
//       // .translate([element.offsetWidth / 2, element.offsetHeight / 2]);

//     var path = d3.geo.path().projection(projection);
//     return { path: path, projection: projection };
//   },
// });

// d3.csv(themeURL + 'data/demography.csv', function(data) {
//   pasoData["demography"] = data;

//   pasoData["demography"].forEach((value, index) => {
//     __spots.push({
//       name: '',
//       radius: 10,
//       fillKey: 'MINOR',
//       latitude: parseFloat(value.LT),
//       longitude: parseFloat(value.LN)
//     });
//   });

//   console.log(__spots);
//   pasoMap.bubbles(__spots, {
//     popupTemplate: function (geo, data) {
//       return ['<div class="hoverinfo">' +  data.name,
//       '<br/>Payload: ' +  data.yield + ' kilotons',
//       '<br/>Country: ' +  data.country + '',
//       '<br/>Date: ' +  data.date + '',
//       '</div>'].join('');
//     }
//   });
// });
