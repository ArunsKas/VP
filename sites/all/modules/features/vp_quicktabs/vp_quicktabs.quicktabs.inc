<?php
/**
 * @file
 * vp_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function vp_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'vp_forms';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Viešieji pirkimai';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_list_of_forms-block_1',
      'hide_title' => 1,
      'title' => 'Vykdomi pirkimai',
      'weight' => '-99',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_list_of_forms-block_2',
      'hide_title' => 1,
      'title' => 'Nustatyti laimėtojai',
      'weight' => '-98',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_list_of_forms-block_3',
      'hide_title' => 1,
      'title' => 'Sudarytos sutartys',
      'weight' => '-97',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_vp_info-block_2',
      'hide_title' => 1,
      'title' => 'Neįvykę pirkimai',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Neįvykę pirkimai');
  t('Nustatyti laimėtojai');
  t('Sudarytos sutartys');
  t('Viešieji pirkimai');
  t('Vykdomi pirkimai');

  $export['vp_forms'] = $quicktabs;

  return $export;
}
