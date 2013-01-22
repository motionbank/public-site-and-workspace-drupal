<?php
/**
 * see sites/all/themes/zen/templates/views-view-fields.tpl.php
 */
	
	$field = $fields['title'];
	$type = strtolower( str_replace( ' ', '-', strip_tags($fields['type']->content) ) );
?>
 <div class="views-field-title content-type-<?php print $type; ?>">
   <span class="field-content"><?php print $field->content; ?> 
  <span class="detailed-info"><?php 
	print t( '@type, @date', 
			 array( '@type' => strip_tags($fields['type']->content),
				    '@date' => strip_tags($fields['last_updated']->content))
	); ?></span>
 	</span>
 </div>
