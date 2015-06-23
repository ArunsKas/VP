<?php
/**
 * @file
 * vp_core.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function vp_core_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
  );
  // Exported language: lt.
  $languages['lt'] = array(
    'language' => 'lt',
    'name' => 'Lithuanian',
    'native' => 'Lietuvių',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):(((($n%10)>=2)&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'lt',
    'weight' => 0,
  );
  return $languages;
}
