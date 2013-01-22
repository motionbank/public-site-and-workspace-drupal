<?php
/**
 * see zen/templates/node.tpl.php
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <?php
		/* adds creator, created as fields to be rendered 
		   with the other fields further down */
		$content['creator_name'] = array(
			'#theme' => 'field',
			'#weight' => -10,
			'#title' => t('Creator'),
			'#access' => true,
			'#label_display' => 'inline',
			'#field_name' => 'creator_name',
			'#field_type' => 'text',
			'#items' => array( array('value'=>$node->name,'safe_value'=>$node->name) ),
			'#formatter' => 'text_default',
			0 => array( '#markup' => l($node->name,'user/'.$node->uid) )
		);
		$content['creation_date'] = array(
			'#theme' => 'field',
			'#weight' => -10,
			'#title' => t('Created'),
			'#access' => true,
			'#label_display' => 'inline',
			'#field_name' => 'creation_date',
			'#field_type' => 'text',
			'#items' => array( array('value'=>format_date($node->created), 'safe_value'=>format_date($node->created)) ),
			'#formatter' => 'text_default',
			0 => array( '#markup' => format_date($node->created) )
		);
	?>
  <?php endif; ?>

  <div class="fields">
	<?php
      hide($content['comments']);
      hide($content['links']);
	  hide($content['body']);
      print render($content);
    ?>
  </div>

  <div class="content"<?php print $content_attributes; ?>>
	<?php print render($content['body']); ?>
  </div>

  <?php print render($content['comments']); ?>

</div><!-- /.node -->
