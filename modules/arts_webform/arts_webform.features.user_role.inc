<?php
/**
 * @file
 * arts_webform.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function arts_webform_user_default_roles() {
  $roles = array();

  // Exported role: webformer.
  $roles['webformer'] = array(
    'name' => 'webformer',
    'weight' => '8',
  );

  return $roles;
}
