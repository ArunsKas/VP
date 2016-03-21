<?php
/**
 * @file
 * vp_info.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function vp_info_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Techninių specifikacijų projektai',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '3fca5de6-e81a-43fb-9235-831661a7d163',
    'vocabulary_machine_name' => 'vp_info_group',
  );
  $terms[] = array(
    'name' => 'Neįvykę pirkimai',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'abe1cd47-578a-4dd7-b957-33083902e9b8',
    'vocabulary_machine_name' => 'vp_info_group',
  );
  return $terms;
}
