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
<?php foreach ($rows as $id => $row): ?>
  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } 
  		?> <?php 
  		if ( isset($block_preview_image) && 
  			 is_array($block_preview_image) && 
  			 isset($block_preview_image[$id]) ) : ?>
  		data-block-preview-image-src="<?php print $block_preview_image[$id]['src']; ?>"
  		data-block-preview-image-height="<?php print $block_preview_image[$id]['height']; ?>"
  		data-block-preview-image-width="<?php print $block_preview_image[$id]['width']; ?>"
  		<?php endif; ?>
  		>
    <?php print $row; ?>
    
  </div>
<?php endforeach; ?>
