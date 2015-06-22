<?php
/**
 * @file
 * vp_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vp_permissions_user_default_roles() {
  $roles = array();

  // Exported role: padalinio redaktorius.
  $roles['padalinio redaktorius'] = array(
    'name' => 'padalinio redaktorius',
    'weight' => 3,
  );

  return $roles;
}
