<?php
/**
 * @file
 * vp_info.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vp_info_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vp_info_node_info() {
  $items = array(
    'vp_info' => array(
      'name' => t('VP skelbimas'),
      'base' => 'node_content',
      'description' => t('Viešųjų pirkimų skelbimas, kuris gali būti priskiriamas vienai iš grupių "Techninių specifikacijų projektas" arba "Neįvykę pirkimai"'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
