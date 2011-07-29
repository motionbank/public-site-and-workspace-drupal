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
		// drupal_set_message($variables['element']['#original_link']['menu_name']);
		
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