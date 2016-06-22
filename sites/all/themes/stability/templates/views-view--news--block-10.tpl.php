<?php
  $owl_class = 'owl-theme owl-slider magazine-slider-holder';
?>
<div class="row <?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div id="owl-carousel-home-1" class="owl-carousel <?php print isset($owl_class) ? $owl_class : ''?>">

    <?php print $rows; ?>

    <?php if ($feed_icon): ?>
      <div class="feed-icon">
        <?php print $feed_icon; ?>
      </div>
    <?php endif; ?>
  </div>
</div>