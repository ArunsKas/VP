<?php
/**
 * @file
 * vp_forms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_forms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_forms';
  $strongarm->value = array();
  $export['menu_options_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_forms';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_forms'] = $strongarm;

  return $export;
}
