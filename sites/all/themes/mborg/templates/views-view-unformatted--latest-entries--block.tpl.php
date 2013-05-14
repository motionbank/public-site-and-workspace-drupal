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
    <?php 
    if ( isset($block_preview_image) && 
         is_array($block_preview_image) && 
         isset($block_preview_image[$id]) ) : ?>
        <div style="
          margin-right: 26px; 
          margin-bottom: 26px; 
          height:<?php print ($block_preview_image[$id]['height'])-20; ?>px; 
          width:<?php print ($block_preview_image[$id]['width']); ?>px;" 
          <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'" ';  } ?>
          data-block-preview-image-src="<?php print $block_preview_image[$id]['src']; ?>"
          data-block-preview-image-height="<?php print $block_preview_image[$id]['height']; ?>"
          data-block-preview-image-width="<?php print $block_preview_image[$id]['width']; ?>"
        >
        <?php print $row; ?>
        <div class="block-bg-image" style="z-index: -1; display: none; position:relative; top:1px; left:1px; height:<?php print ($block_preview_image[$id]['height'])-20; ?>px; width:<?php print ($block_preview_image[$id]['width']); ?>px; background-image: url(<?php print $block_preview_image[$id]['src']; ?>)"></div>

    <?php
    else : ?>
        <div style="
          margin-right: 26px; 
          margin-bottom: 26px; 
          height: 300px; 
          width: 384px;" 
          <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'" ';  } ?> 
        >
        <?php print $row; ?>
    <?php endif; ?>

    </div>
<?php endforeach; ?>