<?php
/**
 * @file
 * stability_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function stability_features_filter_default_formats() {
  $formats = array();

  // Exported format: Dynamic Shortcodes.
  $formats['embed_html'] = array(
    'format' => 'embed_html',
    'name' => 'Dynamic Shortcodes',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'shortcode_dynamic' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'quote' => 1,
          'progress' => 1,
          'accordions' => 1,
          'accordion' => 1,
          'delimiter' => 1,
          'spacer' => 1,
          'container' => 1,
          'row' => 1,
          'col' => 1,
          'message' => 1,
          'tabs' => 1,
          'tab' => 1,
          'button' => 1,
          'call_to_action' => 1,
          'icon_box' => 1,
          'pricing_table' => 1,
          'pricing_table_col' => 1,
          'pricing_table_row' => 1,
          'dropcap' => 1,
          'view' => 1,
          'block' => 1,
          'node' => 1,
          'featured_boxes' => 1,
          'featured_box' => 1,
          'video' => 1,
          'shape_box' => 1,
          'html' => 1,
          'title' => 1,
          'list_container' => 1,
          'list_item' => 1,
          'div' => 1,
          'image' => 1,
          'bg' => 1,
          'circle_counter' => 1,
          'icon' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
