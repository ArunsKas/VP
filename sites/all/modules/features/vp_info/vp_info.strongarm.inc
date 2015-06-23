<?php
/**
 * @file
 * vp_info.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_info_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vp_info';
  $strongarm->value = array();
  $export['menu_options_vp_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vp_info';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vp_info'] = $strongarm;

  return $export;
}
