<?php
/* See STARTERKIT/template.php for comments and help */

/**
 *  Highlight main menu items based on current path
 *  fjenett - 2010-10-22
 *  
 *  http://api.drupal.org/api/function/theme_menu_item
 */
function mbws_menu_item ( $link, $has_children, $menu = '',
                          $in_active_trail = FALSE,
                          $extra_class = NULL )
{
  global $language;
  
  $class = ($menu ? 'expanded' : ($has_children ? 'collapsed' : 'leaf'));
  
  if (!empty($extra_class))
  {
    $class .= ' '. $extra_class;
  }
  
  $path_link = preg_replace( '/.*href="([^"]+)".*/', '\1', $link);
  
  $b = base_path();
  $path_link = substr( $path_link, strlen($b) );
  
  $l = $language->language . '/';
  
  if ( strpos($path_link, $l) === 0 )
  {
    $path_link = str_replace( $l, '', $path_link );
  }
  
  // singularize
  // projects => project
  // users/all => user/all
  $path_link_single = preg_replace( '/^([^\/]+)s(\/.*)*$/i', '\1\2', $path_link);
  
  $path_now  = drupal_get_path_alias( urldecode( $_GET['q'] ), $language->language );
  
  if ( $in_active_trail || !empty($path_now) && 
      ( (!empty($path_link) && strpos( $path_now, $path_link  ) === 0 ) ||
        (!empty($path_link_single) && strpos( $path_now, $path_link_single  ) === 0 ) ) )
  {
    $class .= ' active-trail';
  }
  
  if ( $path_link == 'logout' )
  {
    global $user;
    
    if ( $user->uid > 0 )
    {
      return '<li class="'. $class .'">'. l($user->name, 'user/'.$user->uid) . $menu ."</li>\n".
             '<li class="'. $class .'">'. $link . $menu ."</li>\n";
    }
  }
  else
    return '<li class="'. $class .'">'. $link . $menu ."</li>\n";
}

/**
 * Implementation of HOOK_theme().
 */
function mbws_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */
/* -- Delete this line if you want to use this function
function mbws_preprocess(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function mbws_preprocess_page(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function mbws_preprocess_node(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // mbws_preprocess_node_page() or mbws_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function mbws_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function mbws_preprocess_block(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */
