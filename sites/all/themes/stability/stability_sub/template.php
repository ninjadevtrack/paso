<?php

function stability_sub_preprocess_page(&$variables) {

  $node = menu_get_object();

  if ($node && $node->nid == 242) {
    drupal_set_title('');
    
    drupal_add_css(drupal_get_path('theme', 'stability_sub') . '/css/leaflet.css');
    // drupal_add_js('//cdnjs.cloudflare.com/ajax/libs/d3/3.5.3/d3.min.js', 'external');
    
    drupal_add_js('//d3js.org/d3.v5.js', 'external');
    // drupal_add_js('//d3js.org/topojson.v3.min.js', 'external');
    // drupal_add_js('//cdnjs.cloudflare.com/ajax/libs/d3-geo/1.9.1/d3-geo.min.js', 'external');
    drupal_add_js('//cdnjs.cloudflare.com/ajax/libs/d3-geo-projection/2.4.0/d3-geo-projection.min.js', 'external');
    // drupal_add_js('//cdnjs.cloudflare.com/ajax/libs/topojson/1.6.9/topojson.js', 'external');
    // drupal_add_js('https://d3js.org/topojson.v0.min.js', 'external');
    drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/leaflet.js');
    // drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/topojson.js');
    drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/d3-tile.js');
    // drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/datamaps.col.min.js');
    drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/pasomap.js');
  }

}