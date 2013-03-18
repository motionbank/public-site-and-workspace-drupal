<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php $processed_blocks = 0; ?>
<?php $block_group = 0; ?>

<?php foreach ($rows as $id => $row): ?>
	<?php if($processed_blocks % 5 == 0) { print '<div style="float:left" class="random-block-group-' . $block_group . '">'; } ?>
	  
	  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>

	<?php $processed_blocks++; ?>
	<?php if($processed_blocks % 5 == 0) { print '</div>'; $block_group++;} ?>
<?php endforeach; ?>