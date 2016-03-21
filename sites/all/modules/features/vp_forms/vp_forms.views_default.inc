<?php
/**
 * @file
 * vp_forms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_forms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'list_of_forms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Formų sąrašas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'daugiau';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Pritaikyti';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Išvalyti';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rikiuoti pagal';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eilučių kiekis';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ankstesnis';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'kitas  ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Informacijos nėra';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Pirkimo objektas (pavadinimas)';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Pirkimo objekto tipas */
  $handler->display->display_options['fields']['field_purchase_type']['id'] = 'field_purchase_type';
  $handler->display->display_options['fields']['field_purchase_type']['table'] = 'field_data_field_purchase_type';
  $handler->display->display_options['fields']['field_purchase_type']['field'] = 'field_purchase_type';
  $handler->display->display_options['fields']['field_purchase_type']['label'] = 'Pirkimo objekto tipas (prekės, paslaugos ar darbai)';
  $handler->display->display_options['fields']['field_purchase_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_purchase_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pirkimo būdas */
  $handler->display->display_options['fields']['field_purchase_method']['id'] = 'field_purchase_method';
  $handler->display->display_options['fields']['field_purchase_method']['table'] = 'field_data_field_purchase_method';
  $handler->display->display_options['fields']['field_purchase_method']['field'] = 'field_purchase_method';
  $handler->display->display_options['fields']['field_purchase_method']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_purchase_method']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Priežastys dėl pirkimo būdo */
  $handler->display->display_options['fields']['field_purchase_causes']['id'] = 'field_purchase_causes';
  $handler->display->display_options['fields']['field_purchase_causes']['table'] = 'field_data_field_purchase_causes';
  $handler->display->display_options['fields']['field_purchase_causes']['field'] = 'field_purchase_causes';
  $handler->display->display_options['fields']['field_purchase_causes']['label'] = 'Priežastys, dėl kurių pasirinktas nurodytas pirkimo būdas (nurodomas Taisyklių punktas)';
  $handler->display->display_options['fields']['field_purchase_causes']['element_label_colon'] = FALSE;
  /* Field: Content: Laimėjusio dalyvio pavadinimas */
  $handler->display->display_options['fields']['field_winner_title']['id'] = 'field_winner_title';
  $handler->display->display_options['fields']['field_winner_title']['table'] = 'field_data_field_winner_title';
  $handler->display->display_options['fields']['field_winner_title']['field'] = 'field_winner_title';
  /* Field: Content: Numatoma bendra sutarties vertė Eur (su PVM) */
  $handler->display->display_options['fields']['field_purchase_price']['id'] = 'field_purchase_price';
  $handler->display->display_options['fields']['field_purchase_price']['table'] = 'field_data_field_purchase_price';
  $handler->display->display_options['fields']['field_purchase_price']['field'] = 'field_purchase_price';
  /* Field: Content: Priežastys, dėl kurių pasirinktas šis laimėtojas */
  $handler->display->display_options['fields']['field_winner_reason']['id'] = 'field_winner_reason';
  $handler->display->display_options['fields']['field_winner_reason']['table'] = 'field_data_field_winner_reason';
  $handler->display->display_options['fields']['field_winner_reason']['field'] = 'field_winner_reason';
  $handler->display->display_options['fields']['field_winner_reason']['type'] = 'select_or_other_formatter';
  /* Field: Content: Subrangovų dalis */
  $handler->display->display_options['fields']['field_subcontractor_perc']['id'] = 'field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['table'] = 'field_data_field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['field'] = 'field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['label'] = 'Jei žinoma, nurodyti pirkimo sutarties įsipareigojimų dalį, kuriai laimėtojas ketina pasitelkti trečiuosius asmenis, kaip subran';
  $handler->display->display_options['fields']['field_subcontractor_perc']['element_label_colon'] = FALSE;
  /* Field: Content: Bendra galutinė sutarties vertė Eur (su PVM) */
  $handler->display->display_options['fields']['field_final_price']['id'] = 'field_final_price';
  $handler->display->display_options['fields']['field_final_price']['table'] = 'field_data_field_final_price';
  $handler->display->display_options['fields']['field_final_price']['field'] = 'field_final_price';
  /* Field: Content: Pirkimo pradžios data */
  $handler->display->display_options['fields']['field_purchase_start_date']['id'] = 'field_purchase_start_date';
  $handler->display->display_options['fields']['field_purchase_start_date']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['fields']['field_purchase_start_date']['field'] = 'field_purchase_start_date';
  $handler->display->display_options['fields']['field_purchase_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Laimėtojų nustatymo data */
  $handler->display->display_options['fields']['field_winner_date']['id'] = 'field_winner_date';
  $handler->display->display_options['fields']['field_winner_date']['table'] = 'field_data_field_winner_date';
  $handler->display->display_options['fields']['field_winner_date']['field'] = 'field_winner_date';
  $handler->display->display_options['fields']['field_winner_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sutarties sudarymo data */
  $handler->display->display_options['fields']['field_contract_date']['id'] = 'field_contract_date';
  $handler->display->display_options['fields']['field_contract_date']['table'] = 'field_data_field_contract_date';
  $handler->display->display_options['fields']['field_contract_date']['field'] = 'field_contract_date';
  $handler->display->display_options['fields']['field_contract_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['sorts']['field_purchase_start_date_value']['id'] = 'field_purchase_start_date_value';
  $handler->display->display_options['sorts']['field_purchase_start_date_value']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['sorts']['field_purchase_start_date_value']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['sorts']['field_purchase_start_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms' => 'forms',
  );
  /* Filter criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['filters']['field_purchase_start_date_value']['id'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_purchase_start_date_value']['expose']['operator_id'] = 'field_purchase_start_date_value_op';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['expose']['label'] = 'Pirkimo pradžios data (field_purchase_start_date)';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['expose']['operator'] = 'field_purchase_start_date_value_op';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['expose']['identifier'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_purchase_start_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['default_date'] = 'now - 7 day';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_purchase_start_date_value']['year_range'] = '-3:+0';
  /* Filter criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['id'] = 'field_purchase_start_date_value_1';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['form_type'] = 'date_popup';

  /* Display: F1 */
  $handler = $view->new_display('block', 'F1', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Informacija apie pradedamus pirkimus';
  $handler->display->display_options['display_description'] = 'Informacija apie pradedamus pirkimus';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Pritaikyti';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Išvalyti';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rikiuoti pagal';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eilučių kiekis';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ankstesnis';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'kitas  ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_purchase_type' => 'field_purchase_type',
    'field_purchase_method' => 'field_purchase_method',
    'field_purchase_causes' => 'field_purchase_causes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_purchase_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_purchase_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_purchase_causes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pirkimo objektas */
  $handler->display->display_options['fields']['field_purchase_title_full']['id'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['table'] = 'field_data_field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['field'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['label'] = 'Pirkimo objektas (pavadinimas)';
  $handler->display->display_options['fields']['field_purchase_title_full']['element_label_colon'] = FALSE;
  /* Field: Content: Pirkimo objekto tipas */
  $handler->display->display_options['fields']['field_purchase_type']['id'] = 'field_purchase_type';
  $handler->display->display_options['fields']['field_purchase_type']['table'] = 'field_data_field_purchase_type';
  $handler->display->display_options['fields']['field_purchase_type']['field'] = 'field_purchase_type';
  $handler->display->display_options['fields']['field_purchase_type']['label'] = 'Pirkimo objekto tipas (prekės, paslaugos ar darbai)';
  $handler->display->display_options['fields']['field_purchase_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_purchase_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pirkimo būdas */
  $handler->display->display_options['fields']['field_purchase_method']['id'] = 'field_purchase_method';
  $handler->display->display_options['fields']['field_purchase_method']['table'] = 'field_data_field_purchase_method';
  $handler->display->display_options['fields']['field_purchase_method']['field'] = 'field_purchase_method';
  $handler->display->display_options['fields']['field_purchase_method']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_purchase_method']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Priežastys dėl pirkimo būdo */
  $handler->display->display_options['fields']['field_purchase_causes']['id'] = 'field_purchase_causes';
  $handler->display->display_options['fields']['field_purchase_causes']['table'] = 'field_data_field_purchase_causes';
  $handler->display->display_options['fields']['field_purchase_causes']['field'] = 'field_purchase_causes';
  $handler->display->display_options['fields']['field_purchase_causes']['label'] = 'Priežastys, dėl kurių pasirinktas nurodytas pirkimo būdas (nurodomas Taisyklių punktas)';
  $handler->display->display_options['fields']['field_purchase_causes']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[redaguoti]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms' => 'forms',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['id'] = 'field_purchase_start_date_value_1';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Pavadinimas';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['id'] = 'field_purchase_start_date_value_2';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['expose']['operator_id'] = 'field_purchase_start_date_value_2_op';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['expose']['label'] = 'Data';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['expose']['operator'] = 'field_purchase_start_date_value_2_op';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['expose']['identifier'] = 'field_purchase_start_date_value_2';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_purchase_start_date_value_2']['year_range'] = '-3:+0';

  /* Display: F2 */
  $handler = $view->new_display('block', 'F2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Informacija apie nustatytus pirkimų laimėtojus ir ketinamas sudaryti sutartis';
  $handler->display->display_options['display_description'] = 'Informacija apie nustatytus pirkimų laimėtojus ir ketinamas sudaryti sutartis';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eilučių kiekis';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ankstesnis';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'kitas  ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_winner_title' => 'field_winner_title',
    'field_purchase_price' => 'field_purchase_price',
    'field_winner_reason' => 'field_winner_reason',
    'field_subcontractor_perc' => 'field_subcontractor_perc',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_winner_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_purchase_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_winner_reason' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subcontractor_perc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pirkimo objektas */
  $handler->display->display_options['fields']['field_purchase_title_full']['id'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['table'] = 'field_data_field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['field'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['label'] = 'Pirkimo objektas (pavadinimas)';
  $handler->display->display_options['fields']['field_purchase_title_full']['element_label_colon'] = FALSE;
  /* Field: Content: Laimėjusio dalyvio pavadinimas */
  $handler->display->display_options['fields']['field_winner_title']['id'] = 'field_winner_title';
  $handler->display->display_options['fields']['field_winner_title']['table'] = 'field_data_field_winner_title';
  $handler->display->display_options['fields']['field_winner_title']['field'] = 'field_winner_title';
  /* Field: Content: Numatoma bendra sutarties vertė Eur (su PVM) */
  $handler->display->display_options['fields']['field_purchase_price']['id'] = 'field_purchase_price';
  $handler->display->display_options['fields']['field_purchase_price']['table'] = 'field_data_field_purchase_price';
  $handler->display->display_options['fields']['field_purchase_price']['field'] = 'field_purchase_price';
  /* Field: Content: Priežastys, dėl kurių pasirinktas šis laimėtojas */
  $handler->display->display_options['fields']['field_winner_reason']['id'] = 'field_winner_reason';
  $handler->display->display_options['fields']['field_winner_reason']['table'] = 'field_data_field_winner_reason';
  $handler->display->display_options['fields']['field_winner_reason']['field'] = 'field_winner_reason';
  $handler->display->display_options['fields']['field_winner_reason']['type'] = 'select_or_other_formatter';
  /* Field: Content: Subrangovų dalis */
  $handler->display->display_options['fields']['field_subcontractor_perc']['id'] = 'field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['table'] = 'field_data_field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['field'] = 'field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['label'] = 'Jei žinoma, nurodyti pirkimo sutarties įsipareigojimų dalį, kuriai laimėtojas ketina pasitelkti trečiuosius asmenis, kaip subran';
  $handler->display->display_options['fields']['field_subcontractor_perc']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[redaguoti]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Laimėtojų nustatymo data (field_winner_date) */
  $handler->display->display_options['sorts']['field_winner_date_value']['id'] = 'field_winner_date_value';
  $handler->display->display_options['sorts']['field_winner_date_value']['table'] = 'field_data_field_winner_date';
  $handler->display->display_options['sorts']['field_winner_date_value']['field'] = 'field_winner_date_value';
  $handler->display->display_options['sorts']['field_winner_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms' => 'forms',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Laimėtojų nustatymo data (field_winner_date) */
  $handler->display->display_options['filters']['field_winner_date_value_1']['id'] = 'field_winner_date_value_1';
  $handler->display->display_options['filters']['field_winner_date_value_1']['table'] = 'field_data_field_winner_date';
  $handler->display->display_options['filters']['field_winner_date_value_1']['field'] = 'field_winner_date_value';
  $handler->display->display_options['filters']['field_winner_date_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_winner_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_winner_date_value_1']['year_range'] = '-3:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Pavadinimas';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Laimėtojų nustatymo data (field_winner_date) */
  $handler->display->display_options['filters']['field_winner_date_value_2']['id'] = 'field_winner_date_value_2';
  $handler->display->display_options['filters']['field_winner_date_value_2']['table'] = 'field_data_field_winner_date';
  $handler->display->display_options['filters']['field_winner_date_value_2']['field'] = 'field_winner_date_value';
  $handler->display->display_options['filters']['field_winner_date_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_winner_date_value_2']['expose']['operator_id'] = 'field_winner_date_value_2_op';
  $handler->display->display_options['filters']['field_winner_date_value_2']['expose']['label'] = 'Data';
  $handler->display->display_options['filters']['field_winner_date_value_2']['expose']['operator'] = 'field_winner_date_value_2_op';
  $handler->display->display_options['filters']['field_winner_date_value_2']['expose']['identifier'] = 'field_winner_date_value_2';
  $handler->display->display_options['filters']['field_winner_date_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_winner_date_value_2']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_winner_date_value_2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_winner_date_value_2']['year_range'] = '-3:+0';

  /* Display: F3 */
  $handler = $view->new_display('block', 'F3', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Informacija apie sudarytas sutartis';
  $handler->display->display_options['display_description'] = 'Informacija apie sudarytas sutartis';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eilučių kiekis';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ankstesnis';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'kitas  ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_winner_title' => 'field_winner_title',
    'field_final_price' => 'field_final_price',
    'field_subcontractor_perc' => 'field_subcontractor_perc',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_winner_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_final_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subcontractor_perc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pirkimo objektas */
  $handler->display->display_options['fields']['field_purchase_title_full']['id'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['table'] = 'field_data_field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['field'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['label'] = 'Pirkimo objektas (pavadinimas)';
  $handler->display->display_options['fields']['field_purchase_title_full']['element_label_colon'] = FALSE;
  /* Field: Content: Laimėjusio dalyvio pavadinimas */
  $handler->display->display_options['fields']['field_winner_title']['id'] = 'field_winner_title';
  $handler->display->display_options['fields']['field_winner_title']['table'] = 'field_data_field_winner_title';
  $handler->display->display_options['fields']['field_winner_title']['field'] = 'field_winner_title';
  /* Field: Content: Bendra galutinė sutarties vertė Eur (su PVM) */
  $handler->display->display_options['fields']['field_final_price']['id'] = 'field_final_price';
  $handler->display->display_options['fields']['field_final_price']['table'] = 'field_data_field_final_price';
  $handler->display->display_options['fields']['field_final_price']['field'] = 'field_final_price';
  /* Field: Content: Subrangovų dalis */
  $handler->display->display_options['fields']['field_subcontractor_perc']['id'] = 'field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['table'] = 'field_data_field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['field'] = 'field_subcontractor_perc';
  $handler->display->display_options['fields']['field_subcontractor_perc']['label'] = 'Jei žinoma, nurodyti pirkimo sutarties įsipareigojimų dalį, kuriai laimėtojas ketina pasitelkti trečiuosius asmenis, kaip subran';
  $handler->display->display_options['fields']['field_subcontractor_perc']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[redaguoti]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms' => 'forms',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sutarties sudarymo data (field_contract_date) */
  $handler->display->display_options['filters']['field_contract_date_value_1']['id'] = 'field_contract_date_value_1';
  $handler->display->display_options['filters']['field_contract_date_value_1']['table'] = 'field_data_field_contract_date';
  $handler->display->display_options['filters']['field_contract_date_value_1']['field'] = 'field_contract_date_value';
  $handler->display->display_options['filters']['field_contract_date_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_contract_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_contract_date_value_1']['year_range'] = '-3:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Pavadinimas';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Sutarties sudarymo data (field_contract_date) */
  $handler->display->display_options['filters']['field_contract_date_value_2']['id'] = 'field_contract_date_value_2';
  $handler->display->display_options['filters']['field_contract_date_value_2']['table'] = 'field_data_field_contract_date';
  $handler->display->display_options['filters']['field_contract_date_value_2']['field'] = 'field_contract_date_value';
  $handler->display->display_options['filters']['field_contract_date_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contract_date_value_2']['expose']['operator_id'] = 'field_contract_date_value_2_op';
  $handler->display->display_options['filters']['field_contract_date_value_2']['expose']['label'] = 'Data';
  $handler->display->display_options['filters']['field_contract_date_value_2']['expose']['operator'] = 'field_contract_date_value_2_op';
  $handler->display->display_options['filters']['field_contract_date_value_2']['expose']['identifier'] = 'field_contract_date_value_2';
  $handler->display->display_options['filters']['field_contract_date_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_contract_date_value_2']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_contract_date_value_2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_contract_date_value_2']['year_range'] = '-3:+0';

  /* Display: Vartotojo formos */
  $handler = $view->new_display('block', 'Vartotojo formos', 'block_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eilučių kiekis';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Redagavimas */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Redagavimas';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[redaguoti]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?destination=node';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Pirkimo objektas */
  $handler->display->display_options['fields']['field_purchase_title_full']['id'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['table'] = 'field_data_field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['field'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['label'] = '';
  $handler->display->display_options['fields']['field_purchase_title_full']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_purchase_title_full']['alter']['text'] = '[field_purchase_title_full] </ br>
[nothing]';
  $handler->display->display_options['fields']['field_purchase_title_full']['element_label_colon'] = FALSE;
  /* Field: F1 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'F1';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'F1';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: F2 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'F2';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'F2';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: F3 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'F3';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'F3';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: F1 - F3 būsena */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'F1 - F3 būsena';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[nothing_1]
[nothing_2]
[nothing_3]';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Visi';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms' => 'forms',
  );
  /* Filter criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['id'] = 'field_purchase_start_date_value_1';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['form_type'] = 'date_popup';

  /* Display: Visos formos */
  $handler = $view->new_display('block', 'Visos formos', 'block_5');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Formų apžvalga (admin)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eilučių kiekis';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Redagavimas */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Redagavimas';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[redaguoti]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?destination=node';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Pirkimo objektas */
  $handler->display->display_options['fields']['field_purchase_title_full']['id'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['table'] = 'field_data_field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['field'] = 'field_purchase_title_full';
  $handler->display->display_options['fields']['field_purchase_title_full']['label'] = '';
  $handler->display->display_options['fields']['field_purchase_title_full']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_purchase_title_full']['alter']['text'] = '[field_purchase_title_full] </ br>
[nothing]';
  $handler->display->display_options['fields']['field_purchase_title_full']['element_label_colon'] = FALSE;
  /* Field: F1 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'F1';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'F1';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: F2 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'F2';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'F2';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: F3 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'F3';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'F3';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: F1 - F3 būsena */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'F1 - F3 būsena';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[nothing_1]
[nothing_2]
[nothing_3]';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forms' => 'forms',
  );
  /* Filter criterion: Content: Pirkimo pradžios data (field_purchase_start_date) */
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['id'] = 'field_purchase_start_date_value_1';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['table'] = 'field_data_field_purchase_start_date';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['field'] = 'field_purchase_start_date_value';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_purchase_start_date_value_1']['form_type'] = 'date_popup';
  $translatables['list_of_forms'] = array(
    t('Master'),
    t('daugiau'),
    t('Pritaikyti'),
    t('Išvalyti'),
    t('Rikiuoti pagal'),
    t('Asc'),
    t('Desc'),
    t('Eilučių kiekis'),
    t('- Visos -'),
    t('Offset'),
    t('« pirmas'),
    t('‹ ankstesnis'),
    t('kitas  ›'),
    t('paskutinis  »'),
    t('Informacijos nėra'),
    t('Pirkimo objektas (pavadinimas)'),
    t('Pirkimo objekto tipas (prekės, paslaugos ar darbai)'),
    t('Pirkimo būdas'),
    t('Priežastys, dėl kurių pasirinktas nurodytas pirkimo būdas (nurodomas Taisyklių punktas)'),
    t('Laimėjusio dalyvio pavadinimas'),
    t('Numatoma bendra sutarties vertė Eur (su PVM)'),
    t('Priežastys, dėl kurių pasirinktas šis laimėtojas'),
    t('Jei žinoma, nurodyti pirkimo sutarties įsipareigojimų dalį, kuriai laimėtojas ketina pasitelkti trečiuosius asmenis, kaip subran'),
    t('Bendra galutinė sutarties vertė Eur (su PVM)'),
    t('Pirkimo pradžios data'),
    t('Laimėtojų nustatymo data'),
    t('Sutarties sudarymo data'),
    t('Pirkimo pradžios data (field_purchase_start_date)'),
    t('F1'),
    t('Informacija apie pradedamus pirkimus'),
    t('more'),
    t('[redaguoti]'),
    t('Pavadinimas'),
    t('Data'),
    t('F2'),
    t('Informacija apie nustatytus pirkimų laimėtojus ir ketinamas sudaryti sutartis'),
    t('F3'),
    t('Informacija apie sudarytas sutartis'),
    t('Vartotojo formos'),
    t('‹ '),
    t(' ›'),
    t('Nid'),
    t('[field_purchase_title_full] </ br>
[nothing]'),
    t('[nothing_1]
[nothing_2]
[nothing_3]'),
    t('Visi'),
    t('Visos formos'),
    t('Formų apžvalga (admin)'),
  );
  $export['list_of_forms'] = $view;

  return $export;
}
