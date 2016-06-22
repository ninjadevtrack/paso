<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<div class="project-item">
  <div class="project-item-inner">
    <figure class="alignnone project-img">
      <?php print $fields['field_images']->content; ?>
      <div class="overlay">
        <a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>" class="dlink"><i class="fa fa-link"></i></a>
      </div>
    </figure>
    <div class="project-desc">
      <div class="meta">
        <?php if(isset($fields['comment_count'])): ?>
          <a href="<?php print isset($fields['path']) ? $fields['path']->content : '#'; ?>" class="comments">
            <i class="fa fa-comments"></i> <?php print $fields['comment_count']->content; ?>
          </a>
        <?php endif; ?>
        <?php if(isset($fields['created'])): ?>
          <span class="date"><?php print $fields['created']->content; ?></span>
        <?php endif; ?>
      </div>
      <h4 class="title"><?php print $fields['title']->content; ?></h4>
    </div>
  </div>
</div>