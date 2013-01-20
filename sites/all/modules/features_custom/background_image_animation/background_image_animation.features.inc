<?php
/**
 * @file
 * background_image_animation.features.inc
 */

/**
 * Implements hook_views_api().
 */
function background_image_animation_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function background_image_animation_node_info() {
  $items = array(
    'backgroundimage' => array(
      'name' => t('Background Image'),
      'base' => 'node_content',
      'description' => t('These images are being used for a site wide background image animation.'),
      'has_title' => '1',
      'title_label' => t('Backgroundimage'),
      'help' => '',
    ),
  );
  return $items;
}
