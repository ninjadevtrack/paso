<!DOCTYPE html>
<!--[if IE 7]>                  <html class="ie7 no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>     <![endif]-->
<!--[if lte IE 8]>              <html class="ie8 no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>     <![endif]-->
<!--[if (gte IE 9)|!(IE)]><!--> <html class="not-ie no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>  <!--<![endif]-->
<?php if($_GET['q'] == 'node/80' && strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE) { include('maintenance-page.tpl.php'); exit(); } ?>
<head>
  <?php print $head; ?>

  <title><?php print $head_title; ?></title>
	<meta http-equiv="X-UA-Compatible" content="IE=edge">

	<!-- Mobile Specific Metas
	================================================== -->
  <meta name="viewport" content="width=device-width, initial-scale=1">

  <?php print $styles; ?>

	<!-- Head Libs -->
	<script src="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/vendor/modernizr.js"></script>

	<!--[if lt IE 9]>
		<script src="//html5shim.googlecode.com/svn/trunk/html5.js"></script>
		<script src="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/vendor/respond.min.js"></script>
	<![endif]-->

	<!--[if IE]>
		<link rel="stylesheet" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/css/ie.css">
	<![endif]-->

	<!-- Favicons
	================================================== -->
	<link rel="apple-touch-icon" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/images/apple-touch-icon.png">
	<link rel="apple-touch-icon" sizes="72x72" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/images/apple-touch-icon-72x72.png">
	<link rel="apple-touch-icon" sizes="114x114" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/images/apple-touch-icon-114x114.png">
	<link rel="apple-touch-icon" sizes="144x144" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/images/apple-touch-icon-144x144.png">

</head>
<body class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <script type="text/javascript" src="//maps.google.com/maps/api/js?sensor=true&amp;1446191759"></script>
  <?php print $scripts; ?>
  <?php print $page_bottom; ?>


  <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE): ?>
    <link rel="stylesheet" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/css/skins/red.css">
    <div class="style-switcher visible-md visible-lg" id="style-switcher">
      <h3 class="show">Style Switcher <a href="#"><i class="fa fa-cog"></i></a></h3>
      <div class="style-switcher-body">
        <h4>Colors</h4>
        <ul class="styles-switcher-colors">
          <li><a href="#" class="color-red"></a></li>
          <li><a href="#" class="color-blue"></a></li>
          <li><a href="#" class="color-green"></a></li>
          <li><a href="#" class="color-orange"></a></li>
          <li><a href="#" class="color-yellow"></a></li>
          <li><a href="#" class="color-violet"></a></li>
          <li><a href="#" class="color-silver"></a></li>
          <li><a href="#" class="color-asbestos"></a></li>
        </ul>
        <h4>Layout</h4>
        <ul class="style-switcher-layout">
          <li><a href="index-boxed.html" class="layout-boxed">Boxed</a></li>
          <li><a href="#" class="layout-wide active">Wide</a></li>
        </ul>
        <h4>Patterns</h4>
        <ul class="style-switcher-patterns">
          <li><a href="#" class="brickwall"></a></li>
          <li><a href="#" class="cream_pixels"></a></li>
          <li><a href="#" class="grey_wash_wall"></a></li>
          <li><a href="#" class="greyzz"></a></li>
          <li><a href="#" class="mooning"></a></li>
          <li><a href="#" class="p5"></a></li>
          <li><a href="#" class="retina_wood"></a></li>
          <li><a href="#" class="shattered"></a></li>
          <li><a href="#" class="sos"></a></li>
          <li><a href="#" class="squared_metal"></a></li>
          <li><a href="#" class="subtle_grunge"></a></li>
          <li><a href="#" class="binding_dark"></a></li>
        </ul>
      </div>
    </div>
    <link rel="stylesheet" href="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/css/style-switcher.css">
    <script src="<?php print base_path() . drupal_get_path('theme', 'stability'); ?>/js/style-switcher.js"></script>
  <?php endif; ?>
</body>
</html>
