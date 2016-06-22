<?php
/**
 * @file
 * stability_import_blocks.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function stability_import_blocks_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 1,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'menu',
  'delta' => 'menu-header-top-menu',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'views',
  'delta' => 'circle_icon_box-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'views',
  'delta' => 'projects-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'views',
  'delta' => 'circle_icon_text-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'views',
  'delta' => 'tabs-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'views',
  'delta' => 'capabilities-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'views',
  'delta' => 'testimonials-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'views',
  'delta' => 'blog-block',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'views',
  'delta' => 'categories-block',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -40,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'stability_cms',
  'delta' => 'flickr_block',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 68,
  'module' => 'stability_cms',
  'delta' => 'contact_us',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'home/footer/2
home/footer/3
home/footer/4',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 69,
  'module' => 'md_slider',
  'delta' => 1,
  'theme' => 'stability',
  'status' => 1,
  'weight' => -40,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/v*
home/header*
home/footer*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 70,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Philosophy',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Mission',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'views',
  'delta' => 'capabilities-block_1',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Skills',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'views',
  'delta' => 'people-block',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -25,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'views',
  'delta' => 'clients-block_1',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/105',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/95',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'views',
  'delta' => 'tags-block',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -39,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'views',
  'delta' => 'blog-block_1',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'views',
  'delta' => 'comments-block',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'views',
  'delta' => 'tabs-block_1',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'views',
  'delta' => 'blog-block_2',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'views',
  'delta' => 'custom_links-block_1',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/2
home/footer/3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'stability_cms',
  'delta' => 'contact_us_short',
  'theme' => 'stability',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/3
home/footer/4',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'views',
  'delta' => 'tags-block_1',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'views',
  'delta' => 'custom_links-block_2',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'views',
  'delta' => 'projects-block_1',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'views',
  'delta' => 'test-block',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -25,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'stability_cms',
  'delta' => 'contact_us_map',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'stability_cms',
  'delta' => 'gmap',
  'theme' => 'stability',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'contact',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Why Choose Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Capabilities',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Skills',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'stability',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'stability',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => 'Tabbed Content',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'stability',
  'status' => 1,
  'weight' => -38,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => 'Text Widget',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'About Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'About Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'About Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Custom Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Features',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'What Clients Say',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'What We Do',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'views',
  'delta' => 'projects-block_2',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'We Provide Web Solutions',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'We Are Stability',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Service Packages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Skills',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'views',
  'delta' => 'projects-block_3',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Mission',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Services',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'block',
  'delta' => 32,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Featured Services',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'block',
  'delta' => 33,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'views',
  'delta' => 'projects-block_4',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'block',
  'delta' => 34,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'block',
  'delta' => 35,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'block',
  'delta' => 36,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'nikadevs_cms',
  'delta' => 'contact_form',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'md_slider',
  'delta' => 2,
  'theme' => 'stability',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/one-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'block',
  'delta' => 37,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'What We Do',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'block',
  'delta' => 38,
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Service Packages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'md_slider',
  'delta' => 3,
  'theme' => 'stability',
  'status' => 1,
  'weight' => -39,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/one-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'block',
  'delta' => 39,
  'theme' => 'stability',
  'status' => 1,
  'weight' => -41,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Philosophy',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => 'Tabbed Content',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => 'Text Widget',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 148,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'About Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 149,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'About Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 150,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'About Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Custom Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 152,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 153,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 154,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Features',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 155,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'What Clients Say',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Mission',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 157,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 158,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'What We Do',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 159,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 160,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'We Provide Web Solutions',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 161,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'We Are Stability',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 162,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Service Packages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 163,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Skills',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 164,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 165,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Mission',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 166,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Services',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 167,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/95',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 168,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 169,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 170,
  'module' => 'block',
  'delta' => 32,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Featured Services',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 171,
  'module' => 'block',
  'delta' => 33,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 172,
  'module' => 'block',
  'delta' => 34,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 173,
  'module' => 'block',
  'delta' => 35,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 174,
  'module' => 'block',
  'delta' => 36,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 175,
  'module' => 'block',
  'delta' => 37,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'What We Do',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 176,
  'module' => 'block',
  'delta' => 38,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Service Packages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 177,
  'module' => 'block',
  'delta' => 39,
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -41,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 178,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 179,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 180,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Why Choose Us',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 181,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Capabilities',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 182,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Skills',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 183,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 184,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 185,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 186,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 187,
  'module' => 'md_slider',
  'delta' => 1,
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/v*
home/header*
home/footer*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 188,
  'module' => 'md_slider',
  'delta' => 2,
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/one-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 189,
  'module' => 'md_slider',
  'delta' => 3,
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/one-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 190,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 191,
  'module' => 'menu',
  'delta' => 'menu-header-top-menu',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 192,
  'module' => 'nikadevs_cms',
  'delta' => 'contact_form',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 193,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 194,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 195,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 196,
  'module' => 'stability_cms',
  'delta' => 'contact_us',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'home/footer/2
home/footer/3
home/footer/4',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 197,
  'module' => 'stability_cms',
  'delta' => 'contact_us_map',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 198,
  'module' => 'stability_cms',
  'delta' => 'contact_us_short',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/3
home/footer/4',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 199,
  'module' => 'stability_cms',
  'delta' => 'flickr_block',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 200,
  'module' => 'stability_cms',
  'delta' => 'gmap',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'contact',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 201,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 202,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 203,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 204,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 205,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 206,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 207,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 208,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 209,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 210,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 211,
  'module' => 'views',
  'delta' => 'blog-block',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 212,
  'module' => 'views',
  'delta' => 'blog-block_1',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 213,
  'module' => 'views',
  'delta' => 'blog-block_2',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 214,
  'module' => 'views',
  'delta' => 'capabilities-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 215,
  'module' => 'views',
  'delta' => 'capabilities-block_1',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Our Skills',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 216,
  'module' => 'views',
  'delta' => 'categories-block',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 217,
  'module' => 'views',
  'delta' => 'circle_icon_box-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 218,
  'module' => 'views',
  'delta' => 'circle_icon_text-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 219,
  'module' => 'views',
  'delta' => 'clients-block_1',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/105',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 220,
  'module' => 'views',
  'delta' => 'comments-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 221,
  'module' => 'views',
  'delta' => 'custom_links-block_1',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/footer/2
home/footer/3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 222,
  'module' => 'views',
  'delta' => 'custom_links-block_2',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 223,
  'module' => 'views',
  'delta' => 'people-block',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 224,
  'module' => 'views',
  'delta' => 'projects-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 225,
  'module' => 'views',
  'delta' => 'projects-block_1',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 226,
  'module' => 'views',
  'delta' => 'projects-block_2',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 227,
  'module' => 'views',
  'delta' => 'projects-block_3',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 228,
  'module' => 'views',
  'delta' => 'projects-block_4',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 229,
  'module' => 'views',
  'delta' => 'tabs-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 230,
  'module' => 'views',
  'delta' => 'tabs-block_1',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 231,
  'module' => 'views',
  'delta' => 'tags-block',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/79
node/75
blog
blog/*
blog-medium-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 232,
  'module' => 'views',
  'delta' => 'tags-block_1',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 233,
  'module' => 'views',
  'delta' => 'test-block',
  'theme' => 'stability_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 234,
  'module' => 'views',
  'delta' => 'testimonials-block',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>
home/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 235,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'stability',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 236,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'stability_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '<h6 class="text-muted">Fusce fringilla porttitor iaculis. Sed quam libero, adipiscing sed erat id, euismod nunc.</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi malesuada vestibulum. Phasellus tempor nunc eleifend cursus molestie. Mauris lectus arcu, pellentesque at sodales sit amet,</p> 

Donec ornare mattis suscipit. Praesent fermentum accumsan vulputate. Sed velit nulla, sagittis non erat id, dictum vestibulum ligula. Maecenas sed enim sem. Etiam scelerisque gravida purus nec interdum. Phasellus venenatis ligula in faucibus consequat. Aliquam dictum nulla eu varius porta. Maecenas congue.

[delimiter class = "visible-sm visible-xs"][/delimiter]',
  'info' => 'Our Philosophy',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '[dropcap class = "dropcap__rounded"]1[/dropcap]
<h6>Lorem Ipsum Dolor Sit Amet</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi</p>

[spacer class = "sm"][/spacer]

[dropcap class = "dropcap__rounded"]2[/dropcap]
<h6>Donec fermentum eros</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi</p>

[spacer class = "sm"][/spacer]

[dropcap class = "dropcap__rounded"]3[/dropcap]
<h6>Praesent ante</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi</p>

[delimiter class = "visible-sm visible-xs"][/delimiter]',
  'info' => 'Our Mission',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '<hr class="visible-sm visible-xs lg">
[call_to_action class="centered" link = "/contact" link_text = "Contact Us"]<h2>Faced a Problem?</h2><p>We will gladly help you!</p>[/call_to_action]
',
  'info' => 'Faced a Problem?',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '[row]
  [col desktop = 4]
    [icon_box icon = "fa fa-html5" class = "centered circled boxed icon-box-animated" animation = "fadeInUp" delay = "200"]
      <h3>40+ HTML FILES</h3>
      <p>Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor, nisi elit consequipsum.</p>
      [button class = "btn-default" link = "contact"]Read More[/button]
    [/icon_box]
  [/col]
  [col desktop = 4]
    [icon_box icon = "fa fa-briefcase" class = "centered circled boxed icon-box-animated" animation = "fadeInUp" delay = "400"]
      <h3>BUILT ON BOOTSTRAP</h3>
      <p>Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor, nisi elit consequipsum.</p>
      [button class = "btn-default" link = "contact"]Read More[/button]
    [/icon_box]
  [/col]
  [col desktop = 4]
    [icon_box icon = "fa fa-tablet" class = "centered circled boxed icon-box-animated" animation = "fadeInUp" delay = "600"]
      <h3>RESPONSIVE DESIGN</h3>
      <p>Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor, nisi elit consequipsum.</p>
      [button class = "btn-default" link = "contact"]Read More[/button]
    [/icon_box]
  [/col]
[/row]',
  'info' => 'Circle Icons Boxed 3cols',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '[row]

  [col class="visible-md visible-lg" desktop = 3]
    <img src="/sites/all/themes/stability/images/samples/270x300.gif" alt="" class="img-responsive" data-animation="fadeInLeft">  
  [/col]

    
  [col desktop = 3]
    [spacer class="visible-sm visible-xs"][/spacer]

    [icon_box icon = "fa fa-eye" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "200"]
      <h4>RETINA READY</h4>
      Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
    [/icon_box]

    [spacer][/spacer]

    [icon_box icon = "fa fa-rocket" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "200"]
      <h4>READY TO USE</h4>
      Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor. 
    [/icon_box]
  [/col]

  [col desktop = 3]
    [spacer class="visible-sm visible-xs"][/spacer]

    [icon_box icon = "fa fa-html5" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "400"]
      <h4>HTML5</h4>
      Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
    [/icon_box]

    [spacer][/spacer]

    [icon_box icon = "fa fa-user" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "400"]
      <h4>INDIVIDUAL APPROACH</h4>
      Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
    [/icon_box]
  [/col]

  [col desktop = 3]
    [spacer class="visible-sm visible-xs"][/spacer]

    [icon_box icon = "fa fa-css3" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "600"]
      <h4>CSS3</h4>
      Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
    [/icon_box]

    [spacer][/spacer]

    [icon_box icon = "fa fa-heart" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "600"]
      <h4>MADE WITH LOVE</h4>
      Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
    [/icon_box]
  [/col]

[/row]

[delimiter class = "no-top-margin"][/delimiter]',
  'info' => 'Circle Icons Boxed Small 3 Cols and Image',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '[tabs]
  [tab title = "Info" icon = "fa fa-info-circle"]
    <div class="alignleft">
      <img src="/sites/all/themes/stability/images/samples/158x148.gif" alt="">
    </div>
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius.
  [/tab]
  [tab title = "Community" icon = "fa fa-users"]
    <div class="alignleft">
      <img src="/sites/all/themes/stability/images/samples/158x148.gif" alt="">
    </div>
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius.
    [/tab]
  [tab title = "Mission"]
    <div class="alignleft">
      <img src="/sites/all/themes/stability/images/samples/158x148.gif" alt="">
    </div>
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius.
  [/tab]
[/tabs]
[delimiter class = "visible-sm visible-xs"][/delimiter]',
  'info' => 'Why Choose Us',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '[progress title = "UI Design" percent = "80" animation = "fadeInRight"][/progress]
[progress title = "Branding & Identity" percent = "70" animation = "fadeInRight" delay = 200][/progress]
[progress title = "JavaScript" percent = "60" animation = "fadeInRight" delay = 300][/progress]
[progress title = "HTML5&CSS3" percent = "90" animation = "fadeInRight" delay = 400][/progress]
[progress title = "Wordpress" percent = "70" animation = "fadeInRight" delay = 500][/progress]
',
  'info' => 'Our Capabilities',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '[progress title = "UI Design" percent = "80"][/progress]
[progress title = "Branding & Identity" percent = "70"][/progress]
[progress title = "JavaScript" percent = "60"][/progress]
[progress title = "HTML5&CSS3" percent = "90"][/progress]
[progress title = "Wordpress" percent = "70"][/progress]',
  'info' => 'Our Skills',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '[delimiter][/delimiter]',
  'info' => 'Spacer Large',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '[tabs data-animation="fadeInDown"]
  [tab title = "Popular"][view admin_url = "admin/structure/views/view/comments/edit/block"][/view][/tab]
  [tab title = "Recent"][view admin_url = "admin/structure/views/view/blog/edit/block"][/view][/tab]
  [tab icon = "fa fa-comments fa-lg"][view admin_url = "admin/structure/views/view/comments/edit/block"][/view][/tab]
[/tabs]',
  'info' => 'Tabbed Content',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi malesuada vestibulum. Phasellus tempor nunc eleifend cursus molestie. Mauris lectus arcu, pellentesque at sodales sit amet ornare mattis suscipit.',
  'info' => 'Text Widget',
  'format' => 'plain_text',
);
  $export['block_custom'][] = array(
  'bid' => 12,
  'body' => '<p>Mauris et vulputate est. Integer viverra nunc vitae facilisis cursus. Quisque ac ultricies quam, a molestie leo. Nulla convallis turpis id vulputate aliquam. Nulla facilisi. Nam tincidunt odio dignissim dui lobortis adipiscing.</p>
<p>Nullam volutpat quis sem id iaculis. Fusce interdum, quam ac aliquam vulputate, orci nisl imperdiet turpis, non posuere massa ipsum et lorem. Pellentesque facilisis, orci nec gravida accumsan, massa elit hendrerit lacus, tortor.</p>
[button class="btn-primary" link = "contact"]Learn More[/button]',
  'info' => 'About Us 3 Col',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '<p>Mauris et vulputate est. Integer viverra nunc vitae facilisis cursus. Quisque ac ultricies quam, a molestie leo. Nulla convallis turpis id vulputate aliquam. Nulla facilisi. Nam tincidunt odio dignissim dui lobortis adipiscing.</p>
<p>Nullam volutpat quis sem id iaculis. Fusce interdum, quam ac aliquam vulputate, orci nisl imperdiet turpis, non posuere massa ipsum et lorem. Pellentesque facilisis, orci nec gravida accumsan, massa elit hendrerit lacus, tortor.</p>',
  'info' => 'About Us 2 Col',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => 'Mauris et vulputate est. Integer viverra nunc vitae facilisis cursus. Quisque ac ultricies quam, a molestie leo. Nulla convallis turpis id vulputate aliquam. Nulla facilisi. Nam tincidunt odio dignissim dui lobortis adipiscing.
									',
  'info' => 'About Us 1 Col',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '[view admin_url="admin/structure/views/view/custom_links/edit/block_2"][/view]
<h3 class="widget-title">Tags</h3>
[view admin_url="admin/structure/views/view/tags/edit/block_1"][/view]',
  'info' => 'Custom Links & Tags',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '[call_to_action  link = "contact" link_text = "Purchase Now!"]
  <h2>Welcome to Stability Responsive HTML Template!</h2>
  <p>Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius. Nunc vel ligula sit amet nibh hendrerit gravida id et</p>
[/call_to_action]',
  'info' => 'Welcome Call to Action',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => '[row]
  [col desktop = 4]
    [icon_box icon = "fa fa-arrows" bg_icon class = "circled" animation = "fadeInLeft"]
      <h3>RESPONSIVE WEB DESIGN</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 4]
    [icon_box icon = "fa fa-briefcase" bg_icon class = "circled" animation = "fadeInUp"]
      <h3>BUILT ON BOOTSTRAP</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 4]
    [icon_box icon = "fa fa-file-text-o" bg_icon class = "circled" animation = "fadeInRight"]
      <h3>LAYERED PSD</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
[/row]

[row]
  [col desktop = 4]
    [icon_box icon = "fa fa-rocket" bg_icon class = "circled" animation = "fadeInLeft"]
      <h3>READY TO USE</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 4]
    [icon_box icon = "fa fa-user" bg_icon class = "circled" animation = "fadeInUp"]
      <h3>INDIVIDUAL APPROACH</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 4]
    [icon_box icon = "fa fa-heart" bg_icon class = "circled" animation = "fadeInRight"]
      <h3>MADE WITH PASSION</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
[/row]',
  'info' => 'Services Big 3 Col 2 Row',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '[accordions animation = "fadeInRight"]
  [accordion title = "Accordion Panel #1" active]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit.[/accordion]
  [accordion title = "Accordion Panel #2"]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit.[/accordion]
  [accordion title = "Accordion Panel #3"]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit.[/accordion]
  [accordion title = "Accordion Panel #4"]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit.[/accordion]
  [accordion title = "Accordion Panel #5"]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit.[/accordion]
[/accordions]',
  'info' => 'Our Features Accordion',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 19,
  'body' => '[quote author = "Dan Fisher" position = "Freelance Web Developer" animation = "fadeInLeft"]<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt. Iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Ut gravida justo purus, ac sodales orci tincidunt non.</p>[/quote]

[spacer][/spacer]

[quote author = "Nika Devs" position = "Web Company" animation = "fadeInLeft"]<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt. Iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Ut gravida justo purus, ac sodales orci tincidunt non.</p>[/quote]

[delimiter class = "visible-xs visible-sm"][/delimiter]',
  'info' => 'What Clients Say',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 20,
  'body' => '[row]

  [col desktop = 3]
    [icon_box icon = "fa fa-rocket" class = "centered circled icon-box-animated" animation = "flipInX"]
      <h3>READY TO USE</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

  [col desktop = 3]
    [icon_box icon = "fa fa-user" class = "centered circled icon-box-animated" animation = "flipInX" delay = "200"]
      <h3>INDIVIDUAL APPROACH</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

  [col desktop = 3]
    [icon_box icon = "fa fa-heart" class = "centered circled icon-box-animated" animation = "flipInX" delay = "400"]
      <h3>MADE WITH PASSION</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

  [col desktop = 3]
    [icon_box icon = "fa fa-briefcase" class = "centered circled icon-box-animated" animation = "flipInX"  delay = "600"]
      <h3>BUILT ON BOOTSTRAP</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

[/row]',
  'info' => 'Circle Icons 4 Item Flip',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '[row]
  [col desktop = 6]

    [row]

     [col desktop = 6]
        [spacer class="visible-sm visible-xs"][/spacer]

        [icon_box icon = "fa fa-eye" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "200"]
          <h4>RETINA READY</h4>
          Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
        [/icon_box]

        [spacer][/spacer]

        [icon_box icon = "fa fa-rocket" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "200"]
          <h4>READY TO USE</h4>
          Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor. 
        [/icon_box]
      [/col]

      [col desktop = 6]
        [spacer class="visible-sm visible-xs"][/spacer]

        [icon_box icon = "fa fa-html5" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "400"]
          <h4>HTML5</h4>
          Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
        [/icon_box]

        [spacer][/spacer]

        [icon_box icon = "fa fa-user" class = "circled sm bordered icon-box-animated" animation = "fadeInUp" delay = "400"]
          <h4>INDIVIDUAL APPROACH</h4>
          Proin gravida nibh vel velit auctor enean sollicitud lorem quis bibendum auctor.
        [/icon_box]
      [/col]

    [/row]

  [/col]

  [col desktop = 6]
    [tabs animation = "fadeInRight"]
      [tab title = "Info" icon = "fa fa-info-circle"]
        <div class="alignleft">
          <img src="/sites/all/themes/stability/images/samples/158x148.gif" alt="">
        </div>
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius.
      [/tab]
      [tab title = "Community" icon = "fa fa-users"]
        <div class="alignleft">
          <img src="/sites/all/themes/stability/images/samples/158x148.gif" alt="">
        </div>
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius.
        [/tab]
      [tab title = "Mission"]
        <div class="alignleft">
          <img src="/sites/all/themes/stability/images/samples/158x148.gif" alt="">
        </div>
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue. Phasellus blandit augue vel sollicitudin blandit. Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius.
      [/tab]
    [/tabs]
  [/col]
[/row]',
  'info' => 'What We Do',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 22,
  'body' => '[row]

  [col desktop = 4]
    [icon_box icon = "fa fa-rocket" animation = "flipInY"]
      <h3>READY TO USE</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

  [col desktop = 4]
    [icon_box icon = "fa fa-user" animation = "flipInY" delay = "200"]
      <h3>INDIVIDUAL APPROACH</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]


  [col desktop = 4]
    [icon_box icon = "fa fa-briefcase" animation = "flipInY"  delay = "400"]
      <h3>BUILT ON BOOTSTRAP</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

[/row]',
  'info' => 'Squared Icons 3 Item',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 23,
  'body' => '[row]

  [col desktop = 5 class = "col-md-offset-1"]
    [video animation="fadeInLeft" width = "612" height = "343"]player.vimeo.com/video/7449107?title=0&byline=0&portrait=0&color=dc2a0b[/video]
  [/col]

  [col desktop = 6]
    [spacer class="lg"][/spacer]
    <div class="list list__lg list__check">
      <ul>
        <li data-animation="fadeInRight" data-animation-delay="0">Aenean sollicitudin, lorem quis bibendum auctor nisi elit </li>
        <li data-animation="fadeInRight" data-animation-delay="100">Consequat ipsum, nec sagittis sem nibh id elit</li>
        <li data-animation="fadeInRight" data-animation-delay="200">Morbi accumsan ipsum velit</li>
        <li data-animation="fadeInRight" data-animation-delay="300">Lorem quis bibendum auctor nisi elit</li>
      </ul>
    </div>
    [button link = "contact" class = "btn-primary" animation = "fadeInRight" delay = "400"]Read More[/button]
  [/col]

[/row]',
  'info' => 'We Provide Web Solutions',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 24,
  'body' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed placerat luctus leo, eget luctus nisi porttitor in. Morbi ac adipiscing nisi, nec lacinia felis. Morbi ornare lacus varius dolor commodo tempor non fermentum est sodales eget.</p>

<p>Mauris varius metus at porttitor laoreet. Nulla venenatis condimentum tortor, in cursus arcu fringilla eu. Morbi luctus, lacus rutrum porta adipiscing, lectus enim congue justo, in suscipit justo nunc congue mauris Mauris est libero, sagittis sed adipiscing et, convallis dapibus ante. Morbi ac adipiscing nisi, nec.</p>

<ul class="social-links social-links__light">
  <li><a href="#"><i class="fa fa-facebook"></i></a></li>
  <li><a href="#"><i class="fa fa-twitter"></i></a></li>
  <li><a href="#"><i class="fa fa-linkedin"></i></a></li>
  <li><a href="#"><i class="fa fa-instagram"></i></a></li>
  <li><a href="#"><i class="fa fa-rss"></i></a></li>
</ul>

[spacer][/spacer]',
  'info' => 'We Are Stability',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 25,
  'body' => '[pricing_table]
  [pricing_table_col title = "Free" price = "00" price_text = "per month" button = "Buy Now" link = "contact" animation = "flipInY"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
  [pricing_table_col title = "Popular" class = "popular" price = "19" price_text = "per month" button = "Buy Now" link = "contact" animation = "flipInY" delay = "300"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
  [pricing_table_col title = "Basic" price = "29" price_text = "per month" button = "Buy Now" link = "contact" animation = "flipInY" delay = "600"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
  [pricing_table_col title = "Premium" price = "39" price_text = "per month" button = "Buy Now" link = "contact" animation = "flipInY" delay = "900"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
[/pricing_table]',
  'info' => 'Service Packages',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 26,
  'body' => '[progress title = "UI Design" percent = "80" animation = "fadeInRight"][/progress]
[progress title = "Branding & Identity" percent = "70" animation = "fadeInRight"][/progress]
[progress title = "JavaScript" percent = "60" animation = "fadeInRight"][/progress]
[progress title = "HTML5&CSS3" percent = "90" animation = "fadeInRight"][/progress]',
  'info' => 'Our Skills 4 Item',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 27,
  'body' => '[row]

  [col desktop = 4]
    [icon_box icon = "fa fa-rocket" class = "squared icon-box-animated" animation = "flipInY"]
      <h3>READY TO USE</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

  [col desktop = 4]
    [icon_box icon = "fa fa-user"  class = "squared icon-box-animated" animation = "flipInY" delay = "200"]
      <h3>INDIVIDUAL APPROACH</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]


  [col desktop = 4]
    [icon_box icon = "fa fa-briefcase" class = "squared icon-box-animated" animation = "flipInY"  delay = "400"]
      <h3>BUILT ON BOOTSTRAP</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

[/row]',
  'info' => 'Squared Red Animated Icons 3 Item',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 28,
  'body' => '<p>Nunc nunc dui, cursus eu risus et, venenatis semper orci. Integer congue auctor est at lacinia. Maecenas posuere nibh turpis, quis ornare purus mattis a. Integer felis nulla, auctor quis adipiscing a, consequat suscipit velit. Maecenas turpis Sed pharetra scelerisque dui.</p>
<div class="list">
  <ul>
    <li>Nullam porttitor, justo ut dignissim condimentum quis</li>
    <li>Magna nulla aliquam mi, lobortis sagittis puru sapien</li>
    <li>Suspendisse elementum, felis a tempus egestas turpi</li>
    <li>Magna nulla aliquam mi, lobortis sagittis puru sapien</li>
  </ul>
</div>
[button link = "contact" class = "btn-primary"]Read More[/button]',
  'info' => 'Our Mission Text List Link',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 29,
  'body' => '<div class="list">
  <ul>
    <li>Aenean sollicitudin, lorem auctor nisi elit </li>
    <li>Consequat ipsum, nec sagittis sem nibh id elit</li>
    <li>Morbi accumsan ipsum velit</li>
    <li>Lorem quis bibendum auctor nisi elit</li>
    <li>Aenean sollicitudin, lorem auctor nisi elit </li>
    <li>Consequat ipsum, nec sagittis sem nibh id elit</li>
    <li>Morbi accumsan ipsum velit</li>
    <li>Lorem quis bibendum auctor nisi elit</li>
  </ul>
</div>
[button link = "contact" class = "btn-primary"]Read More[/button]',
  'info' => 'Our Services List Link',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 30,
  'body' => '[call_to_action  link = "contact" link_text = "Read More" class = "centered"]
  <h2>Welcome to Stability Responsive HTML Template!</h2>
  <p>Curabitur eget rhoncus quam, vel elementum arcu. In accumsan tincidunt varius. Nunc vel ligula sit amet nibh hendrerit gravida id et</p>
[/call_to_action]',
  'info' => 'Welcome Call to Action Centered',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 31,
  'body' => '[row]

  [col desktop = 4]
    [icon_box icon = "fa fa-rocket" animation = "flipInY" class = "centered"]
      <h3>READY TO USE</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

  [col desktop = 4]
    [icon_box icon = "fa fa-user" animation = "flipInY" delay = "200" class = "centered"]
      <h3>INDIVIDUAL APPROACH</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]


  [col desktop = 4]
    [icon_box icon = "fa fa-briefcase" animation = "flipInY"  delay = "400" class = "centered"]
      <h3>BUILT ON BOOTSTRAP</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.
    [/icon_box]
  [/col]

[/row]',
  'info' => 'Squared Icons Centered 3 Item',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 32,
  'body' => '<div class="list">
  <ul>
    <li>Nullam porttitor, justo ut dignissim condimentum quis adipiscing</li>
    <li>Magna nulla aliquam mi, lobortis sagittis purus eros mattis sapien</li>
    <li>Suspendisse elementum, felis a tempus egestas turpis dapibus</li>
    <li>Phasellus id nisi blandit, commodo justo</li>
    <li>Cras vel hendrerit nunc. Pellentesque habitant morbi</li>
    <li>Nullam porttitor, justo ut dignissim condimentum quis adipiscing</li>
    <li>Magna nulla aliquam mi, lobortis sagittis purus eros mattis sapien</li>
    <li>Magna nulla aliquam mi purus eros mattis sapien</li>
  </ul>
</div>',
  'info' => 'Featured Services List',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 33,
  'body' => '[video width = "612" height = "343"]player.vimeo.com/video/7449107?title=0&byline=0&portrait=0&color=dc2a0b[/video]',
  'info' => 'Video',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 34,
  'body' => '[row]

  [col desktop = 4 mobile = 4]
    <figure class="aligncenter">
      <img src="/sites/all/themes/stability/images/samples/346x240.gif" alt="">
    </figure>
    <h3>About Us</h3>
    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.</p>
    [button class = "btn-sm btn-default" link = "contact"]Read More[/button]
  [/col]

  [col desktop = 4 mobile = 4]
    <figure class="aligncenter">
      <img src="/sites/all/themes/stability/images/samples/346x240.gif" alt="">
    </figure>
    <h3>CUSTOMER SUPPORT</h3>
    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.</p>
    [button class = "btn-sm btn-default" link = "contact"]Read More[/button]
  [/col]

  [col desktop = 4 mobile = 4]
    <figure class="aligncenter">
      <img src="/sites/all/themes/stability/images/samples/346x240.gif" alt="">
    </figure>
    <h3>MOBILE READY</h3>
    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam laoreet sodales lacinia. Curabitur ut purus tincidunt, iaculis elit a, eleifend augue.</p>
    [button class = "btn-sm btn-default" link = "contact"]Read More[/button]
  [/col]

[/row]',
  'info' => 'Image Text Link 3 Col',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 35,
  'body' => '[row]

  [col desktop = 3 mobile = 3]
    <h3><i class="fa fa-user text-muted"></i> Seo Optimized</h3>
    <p>Etiam diam nunc, sollicitudin gravida vehicula eget, vehicula sit amet nisi. Nulla facilisi. Vivamus vel metus sit amet neque tristique fringilla quis vel orci.</p>
  [/col]

  [col desktop = 3 mobile = 3]
    [spacer class="visible-xs"][/spacer]
    <h3><i class="fa fa-tablet text-muted"></i> Mobile Ready</h3>
    <p>Etiam diam nunc, sollicitudin gravida vehicula eget, vehicula sit amet nisi. Nulla facilisi. Vivamus vel metus sit amet neque tristique fringilla quis vel orci.</p>
  [/col]

  [col desktop = 3 mobile = 3]
    [spacer class="visible-xs"][/spacer]
    <h3><i class="fa fa-check text-muted"></i> Free Support</h3>
    <p>Etiam diam nunc, sollicitudin gravida vehicula eget, vehicula sit amet nisi. Nulla facilisi. Vivamus vel metus sit amet neque tristique fringilla quis vel orci.</p>
  [/col]

  [col desktop = 3 mobile = 3]
    [spacer class="visible-xs"][/spacer]
    <h3><i class="fa fa-refresh text-muted"></i> Free Updates</h3>
    <p>Etiam diam nunc, sollicitudin gravida vehicula eget, vehicula sit amet nisi. Nulla facilisi. Vivamus vel metus sit amet neque tristique fringilla quis vel orci.</p>
  [/col]  

[/row]',
  'info' => 'Icon Title Text 4 Cols',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 36,
  'body' => '[featured_boxes class = "parallax-bg"]
  [featured_box title = "Layered PSD" subtitle = "Donec id tincidunt diam Integer laoreet dolor" icon = "fa fa-file-text-o"]Integer auctor accumsan curs llam commodo velit[/featured_box]
  [featured_box title = "Built on Bootstrap" subtitle = "Donec id tincidunt diam Integer laoreet dolor" icon = "fa fa-briefcase"]Integer auctor accumsan curs llam commodo velit[/featured_box]
  [featured_box title = "Responsive Design" subtitle = "Donec id tincidunt diam Integer laoreet dolor" icon = "fa fa-expand"]Integer auctor accumsan curs llam commodo velit[/featured_box]
  [featured_box title = "Filterable Portfolio" subtitle = "Donec id tincidunt diam Integer laoreet dolor" icon = "fa fa-th-large"]Integer auctor accumsan curs llam commodo velit[/featured_box]
[/featured_boxes]',
  'info' => 'Featured Boxes Parallax',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 37,
  'body' => '[row]
  [col desktop = 3]
    [icon_box icon = "fa fa-arrows" class = "circled centered" animation = "fadeInLeft"]
      <h3>RESPONSIVE WEB DESIGN</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 3]
    [icon_box icon = "fa fa-briefcase" class = "circled centered" animation = "fadeInLeft" delay = "200"]
      <h3>BUILT ON BOOTSTRAP</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 3]
    [icon_box icon = "fa fa-file-text-o" class = "circled centered" animation = "fadeInLeft" delay = "400"]
      <h3>LAYERED PSD</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]

  [col desktop = 3]
    [icon_box icon = "fa fa-css3" class = "circled centered" animation = "fadeInLeft" delay = "600"]
      <h3>CSS3</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]

[/row]

[row]
  [col desktop = 3]
    [icon_box icon = "fa fa-rocket" class = "circled centered" animation = "fadeInLeft"]
      <h3>READY TO USE</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 3]
    [icon_box icon = "fa fa-user" class = "circled centered" animation = "fadeInLeft" delay = "200"]
      <h3>INDIVIDUAL APPROACH</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 3]
    [icon_box icon = "fa fa-heart" class = "circled centered" animation = "fadeInLeft" delay = "400"]
      <h3>MADE WITH PASSION</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
  [col desktop = 3]
    [icon_box icon = "fa fa-refresh" class = "circled centered" animation = "fadeInLeft" delay = "600"]
      <h3>FREE UPDATES</h3>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent eu nisi ac mi Ut egestas libero sit amet risus elementum rhoncus, elit id varius.
    [/icon_box]
  [/col]
[/row]',
  'info' => 'What We Do Icons 3 Col 2 Row',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 38,
  'body' => '[pricing_table]
  [pricing_table_col title = "Free" price = "00" price_text = "per month" button = "Buy Now" link = "contact" animation = "fadeInLeft"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
  [pricing_table_col title = "Popular" class = "popular" price = "19" price_text = "per month" button = "Buy Now" link = "contact" animation = "fadeInLeft" delay = "300"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
  [pricing_table_col title = "Basic" price = "29" price_text = "per month" button = "Buy Now" link = "contact" animation = "fadeInLeft" delay = "600"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
  [pricing_table_col title = "Premium" price = "39" price_text = "per month" button = "Buy Now" link = "contact" animation = "fadeInLeft" delay = "900"]
    [pricing_table_row]Proin gravida nibhconseq[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
    [pricing_table_row]Enean sollicitud[/pricing_table_row]
    [pricing_table_row]Lorem quis bibendum[/pricing_table_row]
    [pricing_table_row]Aliquam laoreet sodales[/pricing_table_row]
  [/pricing_table_col]
[/pricing_table]',
  'info' => 'Pricing Service Packages',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_custom'][] = array(
  'bid' => 39,
  'body' => '[delimiter class = "visible-sm visible-xs"][/delimiter]',
  'info' => 'Delimiter mobile',
  'format' => 'fullnhtml
media_wysiwyg_include_browser_js()',
);
  $export['block_node_type'][] = array(
  'module' => 'views',
  'delta' => 'people-block',
  'type' => 'people',
);
  $export['block_node_type'][] = array(
  'module' => 'views',
  'delta' => 'projects-block_1',
  'type' => 'project',
);
return $export;
}
