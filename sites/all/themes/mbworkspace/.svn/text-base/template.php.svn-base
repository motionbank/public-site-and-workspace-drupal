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
	
	function mbworkspace_preprocess_block(&$variables) 
	{	
		//get current group id
		$group_node = og_context();
		$group_id = $group_node->gid;
		
		if ($variables['block_html_id'] === 'block-block-7') {
		
			// replace manual added block html code with group_audience selection
			$variables['content'] = str_replace('node/add/post','node/add/post?edit[group_audience][und]='.$group_id, $variables['content']);
		} 
	}
	
	/*+
	 *	Hook preprocess_menu_link()
	 */
	function mbworkspace_preprocess_menu_link ( &$variables )
	{
		/**
		 *	Highlights main menu items based upon if the current page is in
		 *	the menu tree of the menu that the item points to (they are redirects).
		 */
		 
		$menus_to_highlight = array('main-menu','secondary-menu');
		
		
		if ( in_array( $variables['element']['#original_link']['menu_name'],
		 			   $menus_to_highlight ) )
		{
			// var_dump( request_uri() ); // --> z.B. /motionbank/users
			// var_dump( request_path() ); //--> alles nach motionbank/      also z.B.  users
			// var_dump($base_path); //--> /motionbank/
			
			// pfade zu den einzelnen menüpunkten ohne motionbank/
			$menu_paths = drupal_get_path_alias(
				drupal_get_normal_path($variables['element']['#href'])
			);
			
			// bei startseite  mit leerer zeichenkette überschreiben
		    if ( $menu_paths == '<front>' ) $menu_paths = '';
			
			// pfad zur aktuellen seite ohne front (motionbank/)
			$current_tab =  request_path();
			
			// wenn ein node angesurft wurde
			if( substr($current_tab, 0, 5) == 'node/' ){
			
				//sonderfall:  node/add/wiki?parent=834
				if(substr($current_tab, 0, 9) == 'node/add/'){
					$current_tab = substr($current_tab, 9, strlen($current_tab));
					
					// für "new project posts"
					if($current_tab == 'post') $current_tab='project';
				}
				else{			
					$tmp = drupal_lookup_path( 'alias', request_path());
					
					// für fälle wie z.B. node/18/edit oder node/18/talk
					if($tmp == FALSE){
						$tmp = substr($current_tab, 0, strrpos( $current_tab, '/'));	
						$tmp = drupal_lookup_path( 'alias', $tmp);
					}
					$current_tab = $tmp;
				}
			}

			// wenn ein user sich eingelogt hat, landet er auf der startseite == content/dashboard
			if( $current_tab == 'content/dashboard' ) $current_tab='';
			
			if( substr($current_tab, 0, 14) == 'comment/reply/'){
				$nodeid = substr($current_tab, 14, strlen($current_tab));
				
				// für den fall comment auf comment: z.B. 660/374
				if( stripos( $nodeid, '/') !== FALSE){
					$nodeid = substr($nodeid, 0, stripos( $nodeid, '/'));
				} 
				
				$current_tab = drupal_lookup_path('alias', 'node/'.$nodeid);
				
			}
			// nur die zeichen bis zum ersten / verwenden für z.B. wiki, user, users etc.
			if( stripos( $current_tab, '/') !== FALSE){
				$current_tab = substr($current_tab, 0, stripos( $current_tab, '/'));
			}
			
			// .s für pluralformen wie z.B. user / users
			if ( $current_tab == $menu_paths || $current_tab."s" == $menu_paths)
			{
				if ( !isset($variables['element']['#attributes']['class']) || 	
					 !is_array($variables['element']['#attributes']['class']) )
						$variables['element']['#attributes']['class'] = array();
						$variables['element']['#attributes']['class'][] = 'active-trail';
			}
			
		}
			
		/**
		 *	Add a class 'search-menu-link' to "search" in the secondary menu.
		 */
		if ( $variables['element']['#original_link']['menu_name'] == 'secondary-menu' )
		{
			if ( 'search' == $variables['element']['#href'] ) 
			{
				$variables['element']['#attributes']['class'][] = 'search-menu-link';
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