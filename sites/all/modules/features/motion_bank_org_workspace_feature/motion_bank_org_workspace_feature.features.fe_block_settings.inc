<?php
/**
 * @file
 * motion_bank_org_workspace_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function motion_bank_org_workspace_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'views-dashboard-block_recent_content' => array(
      'delta' => 'dashboard-block_recent_content',
      'module' => 'views',
    ),
    'views-dashboard_slideshow_view-block' => array(
      'delta' => 'dashboard_slideshow_view-block',
      'module' => 'views',
    ),
    'views-og_nodes-project_nodes' => array(
      'delta' => 'og_nodes-project_nodes',
      'module' => 'views',
      'node_type' => array(
        'project' => TRUE,
      ),
    ),
  );

  // garland
  $theme = array();

  $theme['views-dashboard-block_recent_content'] = array(
    'module' => 'views',
    'delta' => 'dashboard-block_recent_content',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-dashboard_slideshow_view-block'] = array(
    'module' => 'views',
    'delta' => 'dashboard_slideshow_view-block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-og_nodes-project_nodes'] = array(
    'module' => 'views',
    'delta' => 'og_nodes-project_nodes',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/add/*',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['garland'] = $theme;

  // mbworkspace
  $theme = array();

  $theme['views-dashboard-block_recent_content'] = array(
    'module' => 'views',
    'delta' => 'dashboard-block_recent_content',
    'theme' => 'mbworkspace',
    'status' => '1',
    'weight' => '-18',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-dashboard_slideshow_view-block'] = array(
    'module' => 'views',
    'delta' => 'dashboard_slideshow_view-block',
    'theme' => 'mbworkspace',
    'status' => '1',
    'weight' => '-20',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-og_nodes-project_nodes'] = array(
    'module' => 'views',
    'delta' => 'og_nodes-project_nodes',
    'theme' => 'mbworkspace',
    'status' => '1',
    'weight' => '-17',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/add/*',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['mbworkspace'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
