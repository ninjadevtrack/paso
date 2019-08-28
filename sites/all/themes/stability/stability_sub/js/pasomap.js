var themeURL = '/sites/all/themes/stability/stability_sub/';
var data_country = [];
var top5mData = [];
var top5yData = [];
var t5mData = [];
var t5yData = [];


var months    = ['Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep','Oct','Nov','Dec'];
var d = new Date();
var y = d.getFullYear();
var m = d.getMonth();
var thisMonth = months[m];

// set the dimensions and margins of the graph
var margin = {top: 20, right: 20, bottom: 30, left: 40},
    width = 330 - margin.left - margin.right,
    height = 200 - margin.top - margin.bottom;
// append the svg object to the body of the page
// append a 'group' element to 'svg'
// moves the 'group' element to the top left margin
var svg1 = d3.select(".chart-top-5m").append("svg")
    .attr("width", width + margin.left + margin.right)
    .attr("height", height + margin.top + margin.bottom)
    .append("g")
    .attr("transform",
          "translate(" + margin.left + "," + margin.top + ")");

var svg2 = d3.select(".chart-top-5y").append("svg")
    .attr("width", width + margin.left + margin.right)
    .attr("height", height + margin.top + margin.bottom)
    .append("g")
    .attr("transform",
          "translate(" + margin.left + "," + margin.top + ")");
// append the svg obgect to the body of the page
// appends a 'group' element to 'svg'
// moves the 'group' element to the top left margin
var svg3 = d3.select('.chart-risk-ot').append("svg")
    .attr("width", width + margin.left + margin.right)
    .attr("height", height + margin.top + margin.bottom)
    .append("g")
    .attr("transform",
          "translate(" + margin.left + "," + margin.top + ")");


d3.csv(themeURL + 'data/dashboard_coupcast_data_2018_2019.csv', function(data) {
  data_country.push(data);
  console.log("data: ", data);
  top5mData = getTop5Months(parseInt(m), y, data);
  top5yData = getTop5Years(parseInt(y) - 1, data);
  console.log(top5yData);
  function compare( a, b ) {
    if ( a.month_risk < b.month_risk ){
      return -1;
    }
    if ( a.month_risk > b.month_risk ){
      return 1;
    }
    return 0;
  }
  function compare2( a, b ) {
    if ( a.annual_risk < b.annual_risk ){
      return -1;
    }
    if ( a.annual_risk > b.annual_risk ){
      return 1;
    }
    return 0;
  }

  top5mData.sort( compare );
  top5mData = top5mData.slice(Math.max(top5mData.length - 5, 1))
  console.log("top5m: ", top5mData);

  top5yData.sort( compare2 );
  top5yData = top5yData.slice(Math.max(top5mData.length - 5, 1))
  console.log("top5yData: ", top5yData)
  var ti = 1;
  var top5yCountries = [top5yData[top5yData.length - 1].country_name];
  var t5yData = [{"name":top5yData[top5yData.length - 1].country_name,"value":top5yData[top5yData.length - 1].annual_risk}];
  while (ti < 5) {
    for (var iii = top5yData.length - 2; iii >= 0; iii--) {
      if (!top5yCountries.includes(top5yData[iii].country_name)) {
        top5yCountries.push(top5yData[iii].country_name);
        t5yData.push({"name":top5yData[iii].country_name,"value":top5yData[iii].annual_risk})
        ti++;
        break;
      }
    }
  }
  console.log("top5y: ", t5yData);

  // change top 3 countries
  var top3countries = '';
  for (var i3 = 0; i3 < 3; i3++) {
    top3countries += t5yData[i3].name + ' ' + parseFloat(parseFloat(t5yData[i3].value) * 100).toFixed(2) + '%, ';
  }
  top3countries += '...';
  jQuery('.data-latest').html(top3countries);

  var t5mData = [];
  for (var ii = top5mData.length - 1; ii >= 0; ii--) {
    t5mData.push({"name":top5mData[ii].country_name,"value":top5mData[ii].month_risk});
  }
  console.log("t5m: ", t5mData);

  //console.log(data_country);

  var agg10years = [{date: '2009', close: 0.016104571874999994},
                    {date: '2010', close: 0.012226371874999998},
                    {date: '2011', close: 0.012977773056994817},
                    {date: '2012', close: 0.014542852577319585},
                    {date: '2013', close: 0.013428764948453607},
                    {date: '2014', close: 0.014668596391752572},
                    {date: '2015', close: 0.01497165257731959},
                    {date: '2016', close: 0.012793457731958764},
                    {date: '2017', close: 0.012115702577319587},
                    {date: '2018', close: 0.01320047692307693}]

  buildBarChart(t5mData, svg1, width, height);
  buildBarChart(t5yData, svg2, width, height);
  buildLineChart(agg10years, svg3, width, height);
});



function getCountryInfo(country_name, month, year, data) {
  var thisYear = [];
  for(var i=0; i<data.length; i++) {
      if(data[i]["country_name"] == country_name && data[i]["year"] == year && data[i]["month"] == month) {
        thisYear.push(data[i]);
    }
  }
  return thisYear;

}

function getTop5Months(month, year, data) {
  var list = [];
  for(var i=0; i<data.length; i++) {
      if(data[i]["year"] == year && data[i]["month"] == month) {
        list.push(data[i]);
    }
  }
  return list;
}

function getTop5Years(year, data) {
  var list = [];
  for(var i=0; i<data.length; i++) {
      if(data[i]["year"] == year) {
        list.push(data[i]);
    }
  }
  return list;
}

var map = new Datamap({
  element: document.getElementById('oefmap'),
  projection: 'mercator',
  fills: {
    defaultFill: '#e5e5e4'
  },
  geographyConfig: {
    popupOnHover: true,
    popupTemplate: function(d) {
      var name = d.properties.name;
      console.log(name)
      if(name == 'United States') {
        name = d.properties.iso;
      } else if(name == 'United Kingdom') {
        name = 'UKG';
      } else if(name == 'Russian Federation') {
        name = 'Russia';
      } else if(name == 'Viet Nam') {
        name = 'Vietnam';
      } else if(name == 'Lao People\'s Democratic Republic') {
        name = 'Laos';
      } else if(name == 'Dominican Republic') {
        name = 'Dominican Rep';
      } else if(name == 'Venezuela, Bolivarian Republic of') {
        name = 'Venezuela';
      } else if(name == 'Bolivia, Plurinational State of') {
        name = 'Bolivia';
      } else if(name == 'Congo') {
        name = 'Congo-Brz';
      } else if(name == 'Congo, the Democratic Republic of the') {
        name = 'Congo/Zaire';
      } else if(name == 'Central African Republic') {
        name = 'Cen African Rep';
      }


      var thisYear = getCountryInfo(name, parseInt(m), y, data_country[0]);
      var tooltipHTML = '<div class="tooltip-info-new">';
      tooltipHTML = tooltipHTML + '<div class="tt-country">'+thisYear[0].country_name+'</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-space"></div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info">Risk of Coup Attempt</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-row tt-info-1">';
          tooltipHTML = tooltipHTML + '<div class="tt-info-index">'+thisYear[0].year+': &nbsp</div> <div class="tt-info-value">' + parseFloat(parseFloat(thisYear[0].annual_risk) * 100).toFixed(2) +'%</div>';
      tooltipHTML = tooltipHTML + '</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-space"></div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-row tt-info-2">';
          tooltipHTML = tooltipHTML + '<div class="tt-info-index">'+thisMonth+' of '+y+': &nbsp</div> <div class="tt-info-value">'+parseFloat(parseFloat(thisYear[0].month_risk) * 100).toFixed(2)+'%</div>';
      tooltipHTML = tooltipHTML + '</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-space"></div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-row tt-info-3">';
          tooltipHTML = tooltipHTML + '<div class="tt-info-index">Regime type: &nbsp</div> <div class="tt-info-value">'+thisYear[0].regime_type+'</div>';
      tooltipHTML = tooltipHTML + '</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-space"></div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-row tt-info-4">';
          tooltipHTML = tooltipHTML + '<div class="tt-info-index">Current leader: &nbsp</div> <div class="tt-info-value">'+thisYear[0].leader_name+'</div>';
      tooltipHTML = tooltipHTML + '</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-space"></div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-row tt-info-5">';
          tooltipHTML = tooltipHTML + '<div class="tt-info-index">Leader tenure: &nbsp</div> <div class="tt-info-value">'+thisYear[0].leader_years+' years</div>';
      tooltipHTML = tooltipHTML + '</div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-space"></div>';
      tooltipHTML = tooltipHTML + '<div class="tt-info-row tt-info-6">';
          tooltipHTML = tooltipHTML + '<div class="tt-info-index">Regime length: &nbsp</div> <div class="tt-info-value">'+thisYear[0].regime_years+' years</div>';
      tooltipHTML = tooltipHTML + '</div>';
      tooltipHTML = tooltipHTML + '</div>';
      return tooltipHTML;
    },
    borderColor: 'white',
    borderWidth: 0.5,
    highlightFillColor: '#aa2d2f',
    highlightBorderColor: '#1a1e24',
    highlightBorderWidth: 2,
  }
});


function buildLineChart(data, svg, width, height) {
  // parse the date / time
  var parseDate = d3.time.format("%Y");

  // Set the ranges
  var x = d3.time.scale().range([0, width]);
  var y = d3.scale.linear().range([height, 0]);

  // Define the axes
var xAxis = d3.svg.axis().scale(x)
  .orient("bottom").ticks(10);

var yAxis = d3.svg.axis().scale(y)
  .orient("left").ticks(5);

// Define the line
var valueline = d3.svg.line()
  .x(function(d) { return x(d.date); })
  .y(function(d) { return y(d.close); });

  data.forEach(function(d) {
    d.date = parseDate.parse(d.date);
    d.close = +d.close;
  });

  // Scale the range of the data
  x.domain(d3.extent(data, function(d) { return d.date; }));
  y.domain([0, d3.max(data, function(d) { return d.close * 2; })]);

  // Add the valueline path.
  svg.append("path")
    .attr("class", "line")
    .attr("d", valueline(data));

  // Add the X Axis
  svg.append("g")
    .attr("class", "x axis")
    .attr("style", "font-size: 9px;")
    .attr("transform", "translate(0," + height + ")")
    .call(xAxis);

  // Add the Y Axis
  //svg.append("g")
  //  .attr("class", "y axis")
  //  .call(yAxis);
}

function buildBarChart(data, svg, width, height) {
  var x = d3.scale.linear()
      .range([0, width])
      .domain([0, d3.max(data, function (d) {
          return d.value;
      })]);

  var y = d3.scale.ordinal()
      .rangeRoundBands([height, 0], .1)
      .domain(data.map(function (d) {
          return d.name;
      }));

  //make y axis to show bar names
  var yAxis = d3.svg.axis()
      .scale(y)
      //no tick marks
      .tickSize(0)
      .orient("left");

  //var gy = svg.append("g")
  //    .attr("class", "y axis")
  //    .call(yAxis)

  var bars = svg.selectAll(".bar")
      .data(data)
      .enter()
      .append("g")

  var colors = ['#805f85', '#9abc51', '#0cc0aa', '#f9963c', '#45acc7'];
  //append rects
  bars.append("rect")
      .attr("class", "bar")
      .attr("y", function (d) {
          return y(d.name);
      })
      .attr("height", y.rangeBand())
      .attr("x", 0)
      .attr("width", function (d) {
          return x(d.value);
      })
      .attr('fill', function(d){
        c = colors[0];
        colors.shift();
        return c;
      });

  //add a value label to the right of each bar
  bars.append("text")
      .attr("class", "label")
      //y position of the label is halfway down the bar
      .attr("y", function (d) {
          return y(d.name) + y.rangeBand() / 2 + 4;
      })
      //x position is 3 pixels to the right of the bar
      .attr("x", function (d) {
          return (x(d.value) - this.getBoundingClientRect().width - 20) / 2;
      })
      .text(function (d) {
          return d.name;
      })
      .attr('fill', 'black');

}


