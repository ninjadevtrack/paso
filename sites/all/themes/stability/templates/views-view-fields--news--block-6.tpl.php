<article class="entry entry__standard">
  <div class="row">
    <div class="col-sm-5 col-md-5">
      <figure class="alignnone entry-thumb">
        <a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>">
          <?php print $fields['field_images']->content; ?>
        </a>
      </figure>
    </div>
    <div class="col-sm-7 col-md-7">
      <header class="entry-header">
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
    </div>
  </div>
</article>