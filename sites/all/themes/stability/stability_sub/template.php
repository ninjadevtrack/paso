<?php

function parseEraName($node) {
  $field_item = field_get_items('node', $node, 'field_area_code');
  if (isset($field_item) && is_array($field_item)) {
    return $field_item[0]["value"];
  } else {
    return "all";
  }
}

function stability_sub_preprocess_page(&$variables) {
  $node = menu_get_object();
  if ($node && ($node->type == "era") || drupal_get_path_alias() == "escuela-rural-alternativa") {
    drupal_set_title('');
    
    drupal_add_css(drupal_get_path('theme', 'stability_sub') . '/css/leaflet.css');    
    drupal_add_js('//d3js.org/d3.v5.js', 'external');
    drupal_add_js(drupal_get_path('theme', 'stability_sub') . '/js/leaflet.js');

    $eraName = parseEraName($node);
    drupal_add_js("var currentAreaCode='{$eraName}';", 'inline');
    drupal_add_js(
      url(
        drupal_get_path('theme', 'stability_sub') . "/js/pasomap.js", 
        array(
          'query' => array(
            'era' => $eraName
          )
        )
      )
    );
  }
}
