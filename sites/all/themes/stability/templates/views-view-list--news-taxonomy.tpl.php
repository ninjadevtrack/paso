<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
global $news_taxonomy;
$taxonomy = key($news_taxonomy);
$fields = current($news_taxonomy);
$news_taxonomy = array();
?>
<h2><?php print strip_tags($taxonomy); ?></h2>
<div class="row">
  <div class="col-md-6">
    <article class="entry entry__standard entry__small entry__single">
      <figure class="alignnone entry-thumb">
        <a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>">
          <?php print theme('image_style', array('style_name' => 'news_350_220', 'path' => $view->result[0]->field_field_images[0]['raw']['uri'])); ?>
        </a>
      </figure>
      <header class="entry-header entry-header__small">
        <h2><?php print $fields['title']->content; ?></h2>
        <div class="entry-meta">
          <?php if(isset($fields['created'])): ?>
            <span class="entry-date"><?php print $fields['created']->content; ?></span>
          <?php endif; ?>
          <?php if(isset($fields['comment_count'])): ?>
            <span class="entry-comments"><a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>"><?php print $fields['comment_count']->content; ?> <?php print t('Comment' . ($fields['comment_count']->content == 1 ? '' : 's')); ?></a></span>
          <?php endif; ?>
          <?php if(isset($fields['field_category'])): ?>
            <span class="entry-category"><?php print t('in'); ?> <a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>"><?php print $fields['field_category']->content; ?></a></span>
          <?php endif; ?>
          <?php if(isset($fields['name'])): ?>
            <span class="entry-author"><?php print t('by'); ?> <?php print $fields['name']->content; ?></span>
          <?php endif; ?>
        </div>
      </header>
      <?php if(isset($fields['body'])): ?>
        <div class="excerpt">
          <?php print $fields['body']->content; ?>
        </div>
      <?php endif; ?>
      <footer class="entry-footer">
        <a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>" class="btn btn-default btn-sm"><?php print t('Read More'); ?></a>
      </footer>
    </article>
  </div>
  <div class="spacer md visible-sm visible-xs"></div>
  <div class="col-md-6">
    <!-- Widget :: Latest Posts -->
    <div class="latest-posts-widget widget widget__magazine-sidebar">
      <div class="widget-content">
        <ul class="latest-posts-list">
          <?php foreach ($rows as $id => $row): ?>
            <?php print $row; ?>
          <?php endforeach; ?>
        </ul>
      </div>
    </div>
    <!-- /Widget :: Latest Posts -->
  </div>
</div>
<hr class="double sm">