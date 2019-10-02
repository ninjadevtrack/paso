

const $ = jQuery;
const themeURL = '/sites/all/themes/stability/stability_sub/';
const mapID = 'pasomap';
let __data = {}, __markers = [], __areas = [], __organizations = [], __projects = [], __partners = [];


const $container = jQuery("#pasomap");
const width = $container.width(), height = $container.height();
const initialCenter = [4.570868, -74.297333]; // Colombia Center
const mapStyles = [
  'https://{s}.basemaps.cartocdn.com/rastertiles/voyager/{z}/{x}/{y}{r}.png',
  'https://{s}.basemaps.cartocdn.com/light_all/{z}/{x}/{y}{r}.png',
  'https://api.mapbox.com/styles/v1/mapbox/streets-v11/tiles/{z}/{x}/{y}?access_token=pk.eyJ1IjoidG1jdyIsImEiOiJjamN0Z3ZiOXEwanZkMnh2dGFuemkzemE3In0.gibebYiJ5TEdXvwjpCY0jg',
  'https://tiles.wmflabs.org/hikebike/{z}/{x}/{y}.png',
  'https://stamen-tiles-{s}.a.ssl.fastly.net/terrain/{z}/{x}/{y}{r}.png',
  'https://{s}.tile.openstreetmap.fr/hot/{z}/{x}/{y}.png',
  'https://{s}.tile.openstreetmap.de/tiles/osmde/{z}/{x}/{y}.png',
  'https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png'
];
let currentAreaCode = '';
let sumParticipants = 0;

const raster_map = function() {
  let map = L.map(mapID).setView(initialCenter, 5);
  
  L.tileLayer(mapStyles[0], {
    attribution: '&copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors &copy; <a href="https://carto.com/attributions">CARTO</a>',
    maxZoom: 20
  }).addTo(map);

  L.svg().addTo(map);

  d3.csv(themeURL + 'data/areas.csv').then(function(data) {
    data.forEach((value, index) => {
      if (currentAreaCode == '') {
        sumParticipants += parseInt(value.Beneficiarios);
      } else if (currentAreaCode == value.COD_ERA) {
        sumParticipants = parseInt(value.Beneficiarios);
      }

      let obj = {
        lat: parseFloat(value.LT),
        long: parseFloat(value.LN),
        participants: parseInt(value.Beneficiarios),
        area_code: value.COD_ERA,
      };
      __areas[value.COD_ERA] = obj;
      __markers.push(obj);

    });

    $(".map-meta .participants .meta-item-list").html(`<h1>${sumParticipants}</h1>`);
  
    // Add circles:
    d3.select(`#${mapID}`)
      .select("svg")
        .attr("class", "circles-container")
      .selectAll("circles")
      .data(__markers)
      .enter()
      .append("circle")
        .attr("cx", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).x })
        .attr("cy", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).y })
        .attr("r", 11)
        .style("fill", "69b3a2")
        .attr("stroke", "#69b3a2")
        .attr("stroke-width", 1)
        .attr("fill-opacity", .4)
        .on("click", function(d) {
          console.log('click', d);
        });
  }).catch(function(error) {
    console.log(error);
  });

  function read_data(name, field_name) {
    __data[name] = [];

    d3.csv(themeURL + `data/${name}.csv`).then(function(d) {
      let list = [];
      d.forEach(value => {
        // console.log(value);
        
        if (!__data[name][value.COD_ERA]) {
          __data[name][value.COD_ERA] = [];
        }
        __data[name][value.COD_ERA].push({
          name: value[field_name],
          area_code: value['COD_ERA'],
        });
      });
  
      if (currentAreaCode == '') {
        for (var key in __data[name]) {
          __data[name][key].forEach(v => {
            list.push(`<li>${v.name}</li>`);
          });
        }
      } else {
        __data[name][currentAreaCode].forEach(value => {
          list.push(`<li>${value.name}</li>`);
        });
      }
      
      $(`.map-meta .${name} .meta-item-list`).html(`<ul>${list.join('')}</ul>`);
      console.log(name, __data[name], list);
    }).catch(function(error) {
      console.log(error);
    });
  }

  read_data("organizations", "Organización (2)");
  read_data("projects", "Proyecto Productivo (2)");
  read_data("partners", "OUR PARTNERS");
  



  // Function that update circle position if something change
  function update() {
    d3.selectAll("circle")
      .attr("cx", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).x })
      .attr("cy", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).y })
  }
  
  // If the user change the map (zoom or drag), I update circle position:
  map.on("moveend", update)
}

raster_map();


