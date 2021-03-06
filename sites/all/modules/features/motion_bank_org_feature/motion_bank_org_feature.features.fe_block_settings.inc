<?php
/**
 * @file
 * motion_bank_org_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function motion_bank_org_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-motionbank_footer' => array(
      'machine_name' => 'motionbank_footer',
      'module' => 'block',
    ),
    'block-newsletter_link_block' => array(
      'machine_name' => 'newsletter_link_block',
      'module' => 'block',
    ),
    'block-social_media_link_block' => array(
      'machine_name' => 'social_media_link_block',
      'module' => 'block',
    ),
    'locale-language' => array(
      'delta' => 'language',
      'module' => 'locale',
    ),
    'nice_menus-1' => array(
      'delta' => 1,
      'module' => 'nice_menus',
    ),
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'views-backgroundimages-block_1' => array(
      'delta' => 'backgroundimages-block_1',
      'module' => 'views',
    ),
    'views-documentation-block_1' => array(
      'delta' => 'documentation-block_1',
      'module' => 'views',
    ),
    'views-event_navigation_bottom-block' => array(
      'delta' => 'event_navigation_bottom-block',
      'module' => 'views',
      'node_type' => array(
        'event' => TRUE,
      ),
    ),
    'views-event_navigation_top-block' => array(
      'delta' => 'event_navigation_top-block',
      'module' => 'views',
      'node_type' => array(
        'event' => TRUE,
      ),
    ),
    'views-upcoming_event_list-block_1' => array(
      'delta' => 'upcoming_event_list-block_1',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-newsletter_link_block'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 1,
    'machine_name' => 'newsletter_link_block',
  );

  $theme['block-social_media_link_block'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
    'machine_name' => 'social_media_link_block',
  );

  $theme['block-motionbank_footer'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 1,
    'machine_name' => 'motionbank_footer',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'sidebar_first',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => 1,
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => -1,
    'region' => 'sidebar_first',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-backgroundimages-block_1'] = array(
    'module' => 'views',
    'delta' => 'backgroundimages-block_1',
    'theme' => 'bartik',
    'status' => 1,
    'weight' => 0,
    'region' => 'header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-documentation-block_1'] = array(
    'module' => 'views',
    'delta' => 'documentation-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 1,
    'pages' => 'documentation
dokumentation',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-event_navigation_bottom-block'] = array(
    'module' => 'views',
    'delta' => 'event_navigation_bottom-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-event_navigation_top-block'] = array(
    'module' => 'views',
    'delta' => 'event_navigation_top-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-upcoming_event_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'upcoming_event_list-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 1,
    'pages' => 'upcoming
vorschau',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $export['theme']['bartik'] = $theme;

  // mborg
  $theme = array();

  $theme['block-newsletter_link_block'] = array(
    'module' => 'block',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -15,
    'region' => 'navigation',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 1,
    'machine_name' => 'newsletter_link_block',
  );

  $theme['block-social_media_link_block'] = array(
    'module' => 'block',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -14,
    'region' => 'navigation',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
    'machine_name' => 'social_media_link_block',
  );

  $theme['block-motionbank_footer'] = array(
    'module' => 'block',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => 0,
    'region' => 'footer',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 1,
    'machine_name' => 'motionbank_footer',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -16,
    'region' => 'navigation',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => 1,
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -13,
    'region' => 'header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -12,
    'region' => 'header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -19,
    'region' => 'content_header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-backgroundimages-block_1'] = array(
    'module' => 'views',
    'delta' => 'backgroundimages-block_1',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -14,
    'region' => 'header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-documentation-block_1'] = array(
    'module' => 'views',
    'delta' => 'documentation-block_1',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -15,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 1,
    'pages' => 'documentation
dokumentation',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-event_navigation_bottom-block'] = array(
    'module' => 'views',
    'delta' => 'event_navigation_bottom-block',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => 0,
    'region' => 'content_header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-event_navigation_top-block'] = array(
    'module' => 'views',
    'delta' => 'event_navigation_top-block',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -20,
    'region' => 'content_header',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-upcoming_event_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'upcoming_event_list-block_1',
    'theme' => 'mborg',
    'status' => 1,
    'weight' => -16,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 1,
    'pages' => 'upcoming
vorschau',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $export['theme']['mborg'] = $theme;

  // seven
  $theme = array();

  $theme['block-newsletter_link_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 1,
    'machine_name' => 'newsletter_link_block',
  );

  $theme['block-social_media_link_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
    'machine_name' => 'social_media_link_block',
  );

  $theme['block-motionbank_footer'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 1,
    'machine_name' => 'motionbank_footer',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => 1,
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => 1,
    'weight' => -10,
    'region' => 'dashboard_sidebar',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => 1,
    'weight' => 0,
    'region' => 'content',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-backgroundimages-block_1'] = array(
    'module' => 'views',
    'delta' => 'backgroundimages-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-documentation-block_1'] = array(
    'module' => 'views',
    'delta' => 'documentation-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 1,
    'pages' => 'documentation
dokumentation',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-event_navigation_bottom-block'] = array(
    'module' => 'views',
    'delta' => 'event_navigation_bottom-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-event_navigation_top-block'] = array(
    'module' => 'views',
    'delta' => 'event_navigation_top-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $theme['views-upcoming_event_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'upcoming_event_list-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 1,
    'pages' => 'upcoming
vorschau',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => 0,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
