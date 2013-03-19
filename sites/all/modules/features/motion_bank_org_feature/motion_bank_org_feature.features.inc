<?php
/**
 * @file
 * motion_bank_org_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function motion_bank_org_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function motion_bank_org_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function motion_bank_org_feature_image_default_styles() {
  $styles = array();

  // Exported image style: basic_page_image_view.
  $styles['basic_page_image_view'] = array(
    'name' => 'basic_page_image_view',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '306',
          'height' => '444',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: preview_image_306.
  $styles['preview_image_306'] = array(
    'name' => 'preview_image_306',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '306',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: preview_image_384.
  $styles['preview_image_384'] = array(
    'name' => 'preview_image_384',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '384',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function motion_bank_org_feature_node_info() {
  $items = array(
    'backgroundimage' => array(
      'name' => t('Background Image'),
      'base' => 'node_content',
      'description' => t('These images are being used for a site wide background image animation.'),
      'has_title' => '1',
      'title_label' => t('Backgroundimage'),
      'help' => '',
    ),
    'basic_page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Anything but events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Anything with a date: workshops, filmings, shows, ..'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
