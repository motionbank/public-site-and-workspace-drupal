<?php
/**
 * @file
 * motion_bank_org_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function motion_bank_org_feature_user_default_roles() {
  $roles = array();

  // Exported role: content enterer.
  $roles['content enterer'] = array(
    'name' => 'content enterer',
    'weight' => '7',
  );

  return $roles;
}
