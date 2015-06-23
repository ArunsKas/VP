<?php
/**
 * @file
 * vp_core.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function vp_core_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'apklausa raštu',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '0a976b37-6ff9-49a3-a5de-e23fcb5dcd8c',
    'vocabulary_machine_name' => 'purchase_method',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-budas/apklausa-rastu',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'supaprastintas pirkimas apklausos būdu',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '21602ff5-501b-4998-8129-66a8c581be84',
    'vocabulary_machine_name' => 'purchase_method',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-budas/supaprastintas-pirkimas-apklausos-budu',
        'language' => 'und',
      ),
    ),
  );
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
    'url_alias' => array(
      0 => array(
        'alias' => 'vp-skelbimo-grupe/techniniu-specifikaciju-projektai',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'darbai',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '76d43664-5284-4f56-892c-c62f68eb17c0',
    'vocabulary_machine_name' => 'purchase_type',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-objekto-tipas/darbai',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'paslaugos',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '81a7577f-f964-4eaa-96dd-27894c0b1681',
    'vocabulary_machine_name' => 'purchase_type',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-objekto-tipas/paslaugos',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'apklausa žodžiu',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '85b8a8f8-63bc-4fdc-9d01-dde22415b5c1',
    'vocabulary_machine_name' => 'purchase_method',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-budas/apklausa-zodziu',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'supaprastintas atviras konkursas',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'a61b1abe-2f3f-42df-822d-131a352de6ec',
    'vocabulary_machine_name' => 'purchase_method',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-budas/supaprastintas-atviras-konkursas',
        'language' => 'und',
      ),
    ),
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
    'url_alias' => array(
      0 => array(
        'alias' => 'vp-skelbimo-grupe/neivyke-pirkimai',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'supaprastintas ribotas konkursas',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'ca7d18cf-0c1c-4a25-ab7c-5c3c6ab1f249',
    'vocabulary_machine_name' => 'purchase_method',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-budas/supaprastintas-ribotas-konkursas',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'prekės',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'd05b4371-836b-4b67-8ecd-c0784897aecd',
    'vocabulary_machine_name' => 'purchase_type',
    'url_alias' => array(
      0 => array(
        'alias' => 'pirkimo-objekto-tipas/prekes',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
