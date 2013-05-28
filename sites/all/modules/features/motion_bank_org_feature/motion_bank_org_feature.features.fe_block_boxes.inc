<?php
/**
 * @file
 * motion_bank_org_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function motion_bank_org_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for Newsletter Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'newsletter_link_block';
  $fe_block_boxes->body = '<p><a href="">Newsletter</a></p>
';

  $export['newsletter_link_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for Social Media Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_media_link_block';
  $fe_block_boxes->body = '<p id="follow">Follow:</p>
<p><a href="https://de-de.facebook.com/motionbank"><img src="/sites/all/themes/mborg/images/facebook-icon.jpg" /></a> <a href="https://twitter.com/motionbank"><img src="/sites/all/themes/mborg/images/twitter-icon.jpg" /></a></p>
';

  $export['social_media_link_block'] = $fe_block_boxes;

  return $export;
}
