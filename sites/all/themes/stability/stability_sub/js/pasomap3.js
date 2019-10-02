

const themeURL = '/sites/all/themes/stability/stability_sub/';
let __markers = [];

var markers = [
  {long: 9.083, lat: 42.149, group: "A", size: 34}, // corsica
  {long: 7.26, lat: 43.71, group: "A", size: 14}, // nice
  {long: 2.349, lat: 48.864, group: "B", size: 87}, // Paris
  {long: -1.397, lat: 43.664, group: "B", size: 41}, // Hossegor
  {long: 3.075, lat: 50.640, group: "C", size: 78}, // Lille
  {long: -3.83, lat: 58, group: "C", size: 12} // Morlaix
];

// d3 code

const $container = jQuery("#pasomap");
let width = $container.width(), height = $container.height();
const showlayers = false;

const projection = d3.geoMercator()
      .scale(1 / (2 * Math.PI))
      .translate([0, 0]);
      
const initialCenter = [-74.297333, 4.570868]; // Colombia Center
const initialScale = 10000;
      
const projection2 = d3.geoMercator()
      .center(initialCenter)
      .scale(initialScale / (2 * Math.PI))
      .translate([width / 2, height / 2]);

const transform = d3.zoomIdentity
  .translate(width / 2, height / 2)
  .scale(-initialScale)
  .translate(...projection(initialCenter))
  .scale(-1);

const deltas = [-100, -4, -1, 0];
const url = (x, y, z) => `https://api.mapbox.com/styles/v1/mapbox/streets-v11/tiles/${z}/${x}/${y}${devicePixelRatio > 1 ? "@2x" : ""}?access_token=pk.eyJ1IjoidG1jdyIsImEiOiJjamN0Z3ZiOXEwanZkMnh2dGFuemkzemE3In0.gibebYiJ5TEdXvwjpCY0jg`;

let svg;
L.tileLayer('https://{s}.tile.thunderforest.com/outdoors/{z}/{x}/{y}.png?apikey={apikey}', {
	attribution: '&copy; <a href="http://www.thunderforest.com/">Thunderforest</a>, &copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors',
	apikey: '<your apikey>',
	maxZoom: 22
})

L.tileLayer('https://{s}.basemaps.cartocdn.com/light_all/{z}/{x}/{y}{r}.png', {
	attribution: '&copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors &copy; <a href="https://carto.com/attributions">CARTO</a>',
	subdomains: 'abcd',
	maxZoom: 19
})

L.tileLayer('https://geodata.nationaalgeoregister.nl/tiles/service/wmts/brtachtergrondkaartgrijs/EPSG:3857/{z}/{x}/{y}.png', {
	minZoom: 6,
	maxZoom: 19,
	bounds: [[50.5, 3.25], [54, 7.6]],
	attribution: 'Kaartgegevens &copy; <a href="kadaster.nl">Kadaster</a>'
});

L.tileLayer('https://geodata.nationaalgeoregister.nl/tiles/service/wmts/brtachtergrondkaart/EPSG:3857/{z}/{x}/{y}.png', {
	minZoom: 6,
	maxZoom: 19,
	attribution: 'Kaartgegevens &copy; <a href="kadaster.nl">Kadaster</a>'
});

L.tileLayer('https://{s}.basemaps.cartocdn.com/rastertiles/voyager/{z}/{x}/{y}{r}.png', {
	attribution: '&copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors &copy; <a href="https://carto.com/attributions">CARTO</a>',
	maxZoom: 19
})
const raster_map = function() {
  svg = d3.create("svg")
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
    console.log("transform=", transform);
    levels.each(function(delta) {
      const tiles = tile.zoomDelta(delta)(transform);
      console.log("tiles=", tiles);
      d3.select(this)
        .selectAll("image")
        .data(tiles, d => d)
        .join("image")
          .attr("xlink:href", d => url(...d3.tileWrap(d)))
          .attr("x", ([x]) => {
            return (x + tiles.translate[0]) * tiles.scale;
          })
          .attr("y", ([, y]) => (y + tiles.translate[1]) * tiles.scale)
          .attr("width", tiles.scale)
          .attr("height", tiles.scale);
    });

    svg
        .selectAll("circle")
        // .attr("transform", d => {
        //   console.log(d);
        //   var p = [projection2([d.long, d.lat])[0], projection2([d.long, d.lat])[1]];
        //   console.log(d3.event.transform.apply(p));
        //   return `translate(${d3.event.transform.apply(p)})`
        // });
        .attr("cx", function(d) {
          // console.log(d);
          return projection2([d.long, d.lat])[0];
          // console.log(xx, transform.applyX(xx) / 10000);
          console.log("delta=", prevDelta);
          return xx - prevDelta;
          return transform.applyX(xx) / 10000;
          return xx;
        })
        .attr("cy", function(d) {
          var xx = projection2([d.long, d.lat])[1];
          return (d3.event.transform.applyY(xx) / 10000);
          return projection2([d.long, d.lat])[1];
        });
        
  }
  
  return svg.node();
}



let map = raster_map();
$container.append(map);

d3.csv(themeURL + 'data/demography.csv')
  .then(function(data) {
    data.forEach((value, index) => {
      __markers.push({
        lat: parseFloat(value.LT),
        long: parseFloat(value.LN)
      });
    });
  
    // Add circles:
    svg.select("g")
      .selectAll("circles")
      .data(__markers)
      .enter()
      .append("circle")
        .attr("cx", function(d){
          // console.log(d);
          // console.log(projection2([d.long, d.lat]));
          return projection2([d.long, d.lat])[0]
        })
        .attr("cy", function(d){ return projection2([d.long, d.lat])[1] })
        .attr("r", 14)
        .style("fill", "69b3a2")
        .attr("stroke", "#69b3a2")
        .attr("stroke-width", 2)
        .attr("fill-opacity", .4);
    
  })
  .catch(function(error){
    console.log(error);
  });



