<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <div class="project-item design logo" style="position: absolute; left: <?php print $id*380 ?>px; top: 0px;">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>