<?php
/**
 * see zen/templates/views-view-fields.tpl.php
 */

	$is_over_due = $fields['field_date_due']->raw > time();
	// $timestamp = date_convert( $fields['field_date_due']->raw, DATE_ISO, DATE_UNIX);
	// var_dump( $timestamp );
	$has_milestone = isset($fields['field_milestone']) && !empty($fields['field_milestone']->content);

	// var_dump( array_keys($fields) );
	/* array(4) { [0]=> string(5) "title" [1]=> string(14) "field_date_due" [2]=> string(10) "field_list" [3]=> string(15) "field_milestone" } */
?>

 <div class="views-field-title <?php if ( $is_over_due ) print 'overdue' ?>">
	<span class="field-title"><?php print $fields['title']->content; ?> 
  	<span class="detailed-info"><?php
		if ( $has_milestone )
			print $fields['field_milestone']->content;
	/*print t( '@type, @date', 
			 array( '@type' => strip_tags($fields['type']->content),
				    '@date' => strip_tags($fields['last_updated']->content))
	);*/ ?></span>
 	</span>
 </div>