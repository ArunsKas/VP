<?php
/**
 * @file
 * vp_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vp_forms_node_info() {
  $items = array(
    'forms' => array(
      'name' => t('Formos'),
      'base' => 'node_content',
      'description' => t('F1, F2, F3'),
      'has_title' => '1',
      'title_label' => t('Pirkimo objektas (trumpai)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
