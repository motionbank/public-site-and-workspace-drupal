<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can modify or override Drupal's theme
 *   functions, intercept or make additional variables available to your theme,
 *   and create custom PHP logic. For more information, please visit the Theme
 *   Developer's Guide on Drupal.org: http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to mborg_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: mborg_breadcrumb()
 *
 *   where mborg is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override either of the two theme functions used in Zen
 *   core, you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function mborg_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function mborg_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function mborg_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // mborg_preprocess_node_page() or mborg_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function mborg_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */

// function mborg_preprocess_block(&$variables, $hook) {
// }

function mborg_preprocess_views_view ( &$variables )
{
  if ( $variables['name'] === 'backgroundimages' )
  {
    $variables['mborg_backgroundimages_first_image'] = file_create_url(
      $variables['view']->result[0]->field_field_image[0]['rendered']['#file']->uri
    );
  }
}

// Removed blocky menu items

/**
 *  Hook, see:
 *  http://api.drupal.org/api/drupal/includes!menu.inc/function/theme_menu_link/7
 */
// function mborg_menu_link ( array $variables )
// {
//   $element = &$variables['element'];
//   $original_link = &$variables['element']['#original_link'];
//   $active_trail = menu_get_active_trail();

//   if ( $original_link['menu_name'] === 'menu-block-menu' ) 
//   {
//     $load_functs = unserialize($original_link['load_functions']);
//     if ( is_array( $load_functs ) && count( $load_functs ) > 0 && in_array('node_load', $load_functs) ) 
//     {
//       $path = drupal_lookup_path( 'source', $original_link['link_path'] );
//       $path = $path === FALSE ? $original_link['link_path'] : $path;

//       // hide block if it is the current page
//       if ( __menu_link_active( $active_trail, $path ) )
//       {
//         $element['#attributes']['class'][] = 'element-hidden';
//       }

//       $nid = str_replace('node/', '', $path);
//       $node = node_load( $nid );

//       if ( count($node->field_preview_image) > 0 )
//       {
//         $preview_file_field = $node->field_preview_image[LANGUAGE_NONE][0];
//         $preview_file_path = file_create_url( image_style_path( 'menu_preview_image', $preview_file_field['uri'] ) );

//         $preview_width = 374;
//         $preview_height = floor( ($preview_width / (int)$preview_file_field['width']) * (int)$preview_file_field['height'] );

//         $element['#attributes']['class'][] = 'menu-preview-image';
//         $element['#attributes']['data-preview-image-src'] = $preview_file_path;
//         $element['#attributes']['data-preview-image-width'] = $preview_width;
//         $element['#attributes']['data-preview-image-height'] = $preview_height;

//         $element['#localized_options']['attributes']['style'] = 
//           'width:'.$preview_width.'px;'.
//           'height:'.($preview_height - (floor($preview_height/2) - 10)).'px;'.
//           'padding-top:'.(floor($preview_height/2) - 10).'px;';
//       }
//     }
//   }
//   return theme_menu_link( $variables );
// }

// function __menu_link_active ( $trail, $path ) 
// {
//   foreach ( $trail as $item )
//   {
//     if ( $path === $item['link_path'] ) return true;
//   }
//   return false;
// }