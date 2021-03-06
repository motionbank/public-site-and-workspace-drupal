<?php
/**
 * @file
 * motion_bank_org_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function motion_bank_org_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:search/node
  $menu_links['main-menu:search/node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/node',
    'router_path' => 'search/node',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Search');


  return $menu_links;
}
