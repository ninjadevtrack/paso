<?php

function stability_sub_preprocess_page(&$variables) {

  $node = menu_get_object();

  if ($node && ($node->nid == 242 || $node->nid == 243)) {
    drupal_set_title('');
    
    drupal_add_css(drupal_get_path('theme', 'stability_sub') . '/css/leaflet.css');    
    drupal_add_js('//d3js.org/d3.v5.js', 'external');
    drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/leaflet.js');
    drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/pasomap.js');
  }

}