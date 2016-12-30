<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
global $projects_categories;
// Match Column numbers to Bootsrap class
$columns_classes = array(3 => 4, 4 => 3, 2 => 6, 6 => 2);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
?>

<div class = "project-feed project-feed__<?php print $view->style_plugin->options['columns']; ?>cols row isotope">
  <?php foreach ($rows as $row_number => $columns): ?>
    <?php foreach ($columns as $column_number => $item): ?>
      <?php print $item; ?>
    <?php endforeach; ?>
  <?php endforeach; ?>
</div>
