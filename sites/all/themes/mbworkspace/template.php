<?php

	/**
	 *	see sites/default/themes/zen/template.php
	 */
	
	function mbworkspace_breadcrumb ( $variables )
	{
	  $breadcrumb = $variables['breadcrumb'];

	  if ( count($breadcrumb) > 0 )
	  {
	    $o = '';
	    foreach ( $breadcrumb as $i => $crumb )
	    {
	      $o .= '<li class="'.($i == 0 ? ' first ' : '').
	                          ($i == count($breadcrumb)-1 ? ' last ' : '').'">'.
	                          $crumb.'</li>';
	    }
	    return '<ul class="breadcrumb">'.$o.'</ul>';
	  }
	  else
	  {
	    return '';
	  }
	}
	
	/**
	 *	hook_preprocess
	 */
	function mbworkspace_preprocess ( &$variables )
	{
		//drupal_set_message(implode(',',$variables['theme_hook_suggestions']));
	}
	
	/**
	 *	Highlights main menu items based upon if the current page is in
	 *	the menu tree of the menu that the item points to (they are redirects).
	 */
	function mbworkspace_preprocess_menu_link ( &$variables )
	{
		$menus_to_highlight = array('main-menu','secondary-menu');
		//drupal_set_message($variables['element']['#original_link']['menu_name']);
		
		if ( in_array( $variables['element']['#original_link']['menu_name'],
		 			   $menus_to_highlight ) )
		{
			$u = request_uri();
			$u = preg_replace('!^/!i', '', $u);
			$u2 = drupal_get_path_alias(
				drupal_get_normal_path($variables['element']['#href'])
			);
			if ( $u2 == '<front>' ) $u2 = '';
			
			// $trail = menu_get_active_trail();
			// 			foreach ( $trail as $item )
			// 			{
			// 				$link_path = drupal_get_normal_path($variables['element']['#href']);
			// 				if ( $item['link_path'] == $link_path )
			// 				{
			// 					drupal_set_message($link_path);
			// 				}
			// 			}
			
			if ( $u == $u2 || (!empty($u2) && strpos($u, $u2) !== FALSE) )
			{
				if ( !isset($variables['element']['#attributes']['class']) || 	
					 !is_array($variables['element']['#attributes']['class']) )
					$variables['element']['#attributes']['class'] = array();
				$variables['element']['#attributes']['class'][] = 'active-trail';
			}
		}
	}

	//	This is maybe old code from the Drupal-6 version, commented out to see if
	//	errors surface at some point. Remove later. fjenett 20121119

 // 	/**
 // 	 *	http://www.tylerfrankenstein.com/user/4/code/drupal-views-group-by-field-with-counts
 // 	 */
	// function motionbank_preprocess_views_view ( &$variables )
	// {
	// 	//drupal_set_message($variables['view']->name);
	// 	switch ( $variables['view']->name ) 
	// 	{
	// 		case "to_do_block_status":
	// 			_motionbank_preproc_views_count( $variables,
	// 				 							 'to_do_status_counts',
	// 											 'tid',
	// 											 'taxonomy_term_data_name'
	// 			);
	// 			break;
	// 		case "milestones_block":
	// 			_motionbank_preproc_views_count( $variables,
	// 				 							 'milestones_counts',
	// 											 'tid',
	// 											 'taxonomy_term_data_name'
	// 			);
	// 			break;
	// 	}
	// }
	
	// function _motionbank_preproc_views_count ( &$variables, $variable_name,
	// 										   $views_grouping_field,
	// 										   $views_grouping_field_title )
	// {
	// 	// generate counts for the views grouping field
	// 	$variables[$variable_name] = array();
	// 	foreach ($variables['view']->result as $result) 
	// 	{
	// 	    $index = $result->$views_grouping_field;
	// 		if ( !isset($variables[$variable_name][$index]) ) 
	// 		{ 
	// 			$variables[$variable_name][$index] = 0; 
	// 		}
	// 	    $variables[$variable_name][$index]++;
	// 	}

	// 	// build an array of each group count
	// 	$views_grouping_field_links = array();
	// 	foreach ($variables[$variable_name] as $index => $count) 
	// 	{
	// 	  	foreach ($variables['view']->result as $result)
	// 		{
	// 	    	if ($index == $result->$views_grouping_field) 
	// 			{
	// 				$date = null;
	// 	      		$title = $result->$views_grouping_field;
	// 	      		if ($views_grouping_field_title) 
	// 				{ 
	// 					$title = $result->$views_grouping_field_title; 
	// 				}
	// 				//var_dump((array)$result);
	// 				if ( isset($result->field_field_date_due) && !empty($result->field_field_date_due) )
	// 				{
	// 					$date = $result->field_field_date_due[0]['rendered']['#markup'];
	// 				}
	// 	      		$views_grouping_field_links[] = array(
	// 					'title' => $title,
	// 					'date'  => $date,
	// 					'path'  => drupal_get_path_alias('taxonomy/term/'.$result->$views_grouping_field),
	// 					'count' => $count,
	// 					'index' => $index
	// 				);
	// 	      		break;
	// 	    	}
	// 	  	}
	// 	}
	// 	if (!empty($views_grouping_field_links)) 
	// 	{
	// 	  	$variables['views_grouping_field_links'] = $views_grouping_field_links;
	// 	}
	// }