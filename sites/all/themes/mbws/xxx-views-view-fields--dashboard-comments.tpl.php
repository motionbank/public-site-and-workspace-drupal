<?php
  /* See views-view-fields.tpl.php */
?>
<?php
  $field = $fields['subject'];
  $node_title = $fields['title'];
  $type = strtolower( str_replace( ' ', '-', $fields['type']->content ) );
?>
  <div class="views-field-title content-type-<?php print $type; ?>">
      <span class="field-content">
      <?php if ( $type !== 'wiki-page' ) : ?>
        <?php print $field->content; ?>
      <?php else: ?>
        <?php print l( $field->raw, 'node/'.$fields['nid']->raw.'/talk', array( 'fragment' => 'comment-'.$fields['cid']->raw ) ); ?>
      <?php endif; ?>
        <span class="node-info"> in <span class="content-type-label"><?php 
			print $fields['type']->content; 
	    ?></span>
          »<span class="node-title"><?php 
			print $node_title->content;
		?></span>« on <?php
			print $fields['timestamp']->content
		?></span>
      </span>
  </div>
