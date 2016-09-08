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
// Match Column numbers to Bootsrap class
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
?>
<div class = "row masonry<?php if (isset($row_classes[0])) { print ' ' . $row_classes[0];  } ?>" >
  <?php foreach ($rows as $row_number => $columns): ?>
    <?php foreach ($columns as $column_number => $item): ?>
      <div class = "col-md-<?php print $bootsrap_class; ?><?php if ($column_classes[$row_number][$column_number]) { print ' ' . $column_classes[$row_number][$column_number];  } ?>">
        <?php print $item; ?>
      </div>
    <?php endforeach; ?>
  <?php endforeach; ?>
</div>