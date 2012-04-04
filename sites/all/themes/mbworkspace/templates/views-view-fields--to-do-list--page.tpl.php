<?php
/**
 * see zen/templates/views-view-fields.tpl.php
 */	
	//var_dump($fields['field_status']);
	
	$status_class = preg_replace( '/[^a-z0-9]/i', '-',
		strtolower(trim(strip_tags($fields['field_status']->content)))
	);
	
	$date_str = trim(strip_tags($fields['field_date_due']->content));
	//var_dump(array_keys((array)$fields['field_date_due']->handler->items));
	//var_dump($fields['field_date_due']->handler->items);
	//die();
	if ( !empty($date_str) )
	{
		$date_due = date_parse($fields['field_date_due']->content);
		$date_due_ts = mktime($date_due['hour'],$date_due['minute'],$date_due['second'],
							  $date_due['month'],$date_due['day'],$date_due['year']);
		$is_over_due = $date_due_ts < time();
	}
	else
	{
		$is_over_due = false;
	}
	// $timestamp = date_convert( $fields['field_date_due']->raw, DATE_ISO, DATE_UNIX);
	// var_dump( $timestamp );
	$has_milestone = isset($fields['field_milestone']) 
					 && !empty($fields['field_milestone']->content);

	// var_dump( array_keys($fields) );
	/* array(4) { [0]=> string(5) "title" [1]=> string(14) "field_date_due" [2]=> string(10) "field_list" [3]=> string(15) "field_milestone" } */
	//var_dump(array_keys((array)$fields['field_status']));
	
	$title = preg_replace( '/href="[^"]+"/i', 'href="/node/'.$fields['nid']->raw.'/edit"',
		$fields['title']->content
	);
	$title = $fields['title']->content;
?>

 <div class="views-field-title <?php 
		if ( $is_over_due && ($status_class == 'new' || $status_class == 'in-progress' || $status_class == 'blocked') ) print 'overdue'; 
	?> state-<?php
		print $status_class;
	?>">
	<span class="field-title"><?php 
		if ( $is_over_due )
			print t( '!title (<em>was due !due_date</em>)',
					 array( '!title'=>$title,
					 	    '!due_date'=>$fields['field_date_due']->content));
		else if ( !empty($date_str) )
			print t( '!title (<em>due on !due_date</em>)',
					 array( '!title'=>$title,
						    '!due_date'=>$fields['field_date_due']->content));
		else
			print $title;
	?> 
  	<span class="detailed-info"><?php
		if ( $has_milestone )
			print $fields['field_milestone']->content . ' ';
		
		print $fields['field_status']->content . ' ';
	/*print t( '@type, @date', 
			 array( '@type' => strip_tags($fields['type']->content),
				    '@date' => strip_tags($fields['last_updated']->content))
	);*/ ?></span>
 	</span>
 </div>