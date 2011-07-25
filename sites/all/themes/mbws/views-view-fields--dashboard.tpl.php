<?php
  /* See views-view-fields.tpl.php */
?>
<?php
  $field = $fields['title'];
  $type = strtolower( str_replace( ' ', '-', $fields['type']->content ) );
?>
  <div class="views-field-title content-type-<?php print $type; ?>">
    <span class="field-content"><?php 
		print $field->content; 
	?> 
	  <span class="detailed-info"><?php 
		print t( '@type, @date', array('@type'=>$fields['type']->content,
		'@date'=> $fields['last_updated']->content) );
	?>
	  </span>
  	</span>
  </div>
