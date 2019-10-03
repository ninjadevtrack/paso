

const $ = jQuery;
const themeURL = '/sites/all/themes/stability/stability_sub/';
const mapID = 'pasomap';
let __data = {},
    __areas = [],
    __markers = [];


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
let currentAreaCode = 'PASO-E03TUL';
let sumParticipants = 0;
let bubbleRadius = 11;

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
    
    // Add tooltip
    let tooltip = d3.select(`#${mapID}`)
      .append("div")
        .style("opacity", 0)
        .attr("class", "tooltip")
        .style("background-color", "black")
        .style("border-radius", "5px")
        .style("padding", "10px")
        .style("color", "white");
    let showTooltip = function(d) {
      tooltip
        .transition()
        .duration(200)
      tooltip
        .style("opacity", 0.8)
        .html("Country: " + d.area_code)
        .style("left", (d3.mouse(this)[0]+20) + "px")
        .style("top", (d3.mouse(this)[1]-20) + "px")
    }
    let moveTooltip = function(d) {
      tooltip
        .style("left", (d3.mouse(this)[0]+20) + "px")
        .style("top", (d3.mouse(this)[1]-20) + "px")
    }
    let hideTooltip = function(d) {
      tooltip
        .transition()
        .duration(200)
        .style("opacity", 0)
    }

    // Add circles:
    d3.select(`#${mapID}`)
      .select("svg")
      .selectAll("circles")
      .data(__markers)
      .enter()
      .append("circle")
        .attr("id", function(d){ return d.area_code })
        .attr("cx", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).x })
        .attr("cy", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).y })
        .attr("class", function(d){ return currentAreaCode == d.area_code ? 'active' : '' })
        .attr("r", bubbleRadius)
        .style("fill", "#f0c86b")
        .attr("stroke", "#c18215")
        .attr("stroke-width", 1)
        .attr("fill-opacity", .8)
        .on("click", function(d) {
          console.log('click', d);
          $(`#${mapID} circle`).removeClass("inactive active");
          $(`#${mapID} circle`).addClass("inactive");
          $(`#${mapID} #${d.area_code}`).removeClass("inactive").addClass("active");
        })
        .on("mouseover", showTooltip )
        .on("mousemove", moveTooltip )
        .on("mouseleave", hideTooltip )
    

  }).catch(function(error) {
    console.log(error);
  });

  function read_data(name, field_name) {
    __data[name] = [];

    d3.csv(themeURL + `data/${name}.csv`).then(function(d) {
      let list = [];
      d.forEach(value => {        
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
    let zoomLevel = map.getZoom();
    d3.selectAll("circle")
      .attr("cx", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).x })
      .attr("cy", function(d){ return map.latLngToLayerPoint([d.lat, d.long]).y })
      .attr("r", bubbleRadius * zoomLevel / 5)
  }
  
  // If the user change the map (zoom or drag), I update circle position:
  map.on("moveend", update)
}

raster_map();


