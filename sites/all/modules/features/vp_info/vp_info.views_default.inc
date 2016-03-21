<?php
/**
 * @file
 * vp_info.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_info_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vp_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VP skelbimai';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'daugiau';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Pritaikyti';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Išvalyti';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rikiuoti pagal';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Vienetų kiekis puslapyje';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ankstesnis';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'kitas  ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Antraštė */
  $handler->display->display_options['fields']['field_title_full']['id'] = 'field_title_full';
  $handler->display->display_options['fields']['field_title_full']['table'] = 'field_data_field_title_full';
  $handler->display->display_options['fields']['field_title_full']['field'] = 'field_title_full';
  $handler->display->display_options['fields']['field_title_full']['label'] = '';
  $handler->display->display_options['fields']['field_title_full']['alter']['text'] = '[field_title_full] [edit_node]';
  $handler->display->display_options['fields']['field_title_full']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_title_full']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[redaguoti]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'vp_info' => 'vp_info',
  );

  /* Display: Techninės specifikacijos */
  $handler = $view->new_display('block', 'Techninės specifikacijos', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Vienetų kiekis puslapyje';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Visos -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pirmas';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ankstesnis';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'kitas  ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'paskutinis  »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Antraštė */
  $handler->display->display_options['fields']['field_title_full']['id'] = 'field_title_full';
  $handler->display->display_options['fields']['field_title_full']['table'] = 'field_data_field_title_full';
  $handler->display->display_options['fields']['field_title_full']['field'] = 'field_title_full';
  $handler->display->display_options['fields']['field_title_full']['label'] = '';
  $handler->display->display_options['fields']['field_title_full']['alter']['text'] = '[field_title_full] [edit_node]';
  $handler->display->display_options['fields']['field_title_full']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_title_full']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[redaguoti]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'p';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
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
    'vp_info' => 'vp_info',
  );
  /* Filter criterion: Content: Skelbimo grupė (field_info_group) */
  $handler->display->display_options['filters']['field_info_group_tid']['id'] = 'field_info_group_tid';
  $handler->display->display_options['filters']['field_info_group_tid']['table'] = 'field_data_field_info_group';
  $handler->display->display_options['filters']['field_info_group_tid']['field'] = 'field_info_group_tid';
  $handler->display->display_options['filters']['field_info_group_tid']['value'] = array(
    0 => '3',
  );
  $handler->display->display_options['filters']['field_info_group_tid']['vocabulary'] = 'vp_info_group';

  /* Display: Neįvykę pirkimai */
  $handler = $view->new_display('block', 'Neįvykę pirkimai', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Antraštė */
  $handler->display->display_options['fields']['field_title_full']['id'] = 'field_title_full';
  $handler->display->display_options['fields']['field_title_full']['table'] = 'field_data_field_title_full';
  $handler->display->display_options['fields']['field_title_full']['field'] = 'field_title_full';
  $handler->display->display_options['fields']['field_title_full']['label'] = '';
  $handler->display->display_options['fields']['field_title_full']['alter']['text'] = '[field_title_full] [edit_node]';
  $handler->display->display_options['fields']['field_title_full']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_title_full']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[redaguoti]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'p';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
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
    'vp_info' => 'vp_info',
  );
  /* Filter criterion: Content: Skelbimo grupė (field_info_group) */
  $handler->display->display_options['filters']['field_info_group_tid']['id'] = 'field_info_group_tid';
  $handler->display->display_options['filters']['field_info_group_tid']['table'] = 'field_data_field_info_group';
  $handler->display->display_options['filters']['field_info_group_tid']['field'] = 'field_info_group_tid';
  $handler->display->display_options['filters']['field_info_group_tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['field_info_group_tid']['vocabulary'] = 'vp_info_group';
  $translatables['vp_info'] = array(
    t('Master'),
    t('daugiau'),
    t('Pritaikyti'),
    t('Išvalyti'),
    t('Rikiuoti pagal'),
    t('Asc'),
    t('Desc'),
    t('Vienetų kiekis puslapyje'),
    t('- Visos -'),
    t('Offset'),
    t('« pirmas'),
    t('‹ ankstesnis'),
    t('kitas  ›'),
    t('paskutinis  »'),
    t('[field_title_full] [edit_node]'),
    t('[redaguoti]'),
    t('Techninės specifikacijos'),
    t('more'),
    t('Neįvykę pirkimai'),
  );
  $export['vp_info'] = $view;

  return $export;
}
