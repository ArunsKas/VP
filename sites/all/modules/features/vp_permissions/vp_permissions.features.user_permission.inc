<?php
/**
 * @file
 * vp_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vp_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access forms node view'.
  $permissions['access forms node view'] = array(
    'name' => 'access forms node view',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access vp_info node view'.
  $permissions['access vp_info node view'] = array(
    'name' => 'access vp_info node view',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create forms content'.
  $permissions['create forms content'] = array(
    'name' => 'create forms content',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vp_info content'.
  $permissions['create vp_info content'] = array(
    'name' => 'create vp_info content',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forms content'.
  $permissions['delete own forms content'] = array(
    'name' => 'delete own forms content',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vp_info content'.
  $permissions['delete own vp_info content'] = array(
    'name' => 'delete own vp_info content',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forms content'.
  $permissions['edit own forms content'] = array(
    'name' => 'edit own forms content',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vp_info content'.
  $permissions['edit own vp_info content'] = array(
    'name' => 'edit own vp_info content',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'node',
  );

  // Exported permission: 'override forms published option'.
  $permissions['override forms published option'] = array(
    'name' => 'override forms published option',
    'roles' => array(
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override vp_info authored by option'.
  $permissions['override vp_info authored by option'] = array(
    'name' => 'override vp_info authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override vp_info authored on option'.
  $permissions['override vp_info authored on option'] = array(
    'name' => 'override vp_info authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override vp_info published option'.
  $permissions['override vp_info published option'] = array(
    'name' => 'override vp_info published option',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'use add another'.
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'addanother',
  );

  // Exported permission: 'view any unpublished vp_info content'.
  $permissions['view any unpublished vp_info content'] = array(
    'name' => 'view any unpublished vp_info content',
    'roles' => array(
      'administrator' => 'administrator',
      'padalinio redaktorius' => 'padalinio redaktorius',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
