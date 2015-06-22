<?php
/**
 * @file
 * vp_forms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vp_forms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f1_f2_f3_group|node|forms|form';
  $field_group->group_name = 'group_f1_f2_f3_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forms';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F1, F2, F3',
    'weight' => '3',
    'children' => array(
      0 => 'group_f1',
      1 => 'group_f2',
      2 => 'group_f3',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-f1-f2-f3-group field-group-tabs',
      ),
    ),
  );
  $export['group_f1_f2_f3_group|node|forms|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f1|node|forms|form';
  $field_group->group_name = 'group_f1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forms';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_f1_f2_f3_group';
  $field_group->data = array(
    'label' => 'F1',
    'weight' => '4',
    'children' => array(
      0 => 'field_purchase_method',
      1 => 'field_purchase_type',
      2 => 'field_purchase_causes',
      3 => 'field_purchase_start_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_f1|node|forms|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f2|node|forms|form';
  $field_group->group_name = 'group_f2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forms';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_f1_f2_f3_group';
  $field_group->data = array(
    'label' => 'F2',
    'weight' => '5',
    'children' => array(
      0 => 'field_winner_title',
      1 => 'field_purchase_price',
      2 => 'field_winner_reason',
      3 => 'field_subcontractor_perc',
      4 => 'field_winner_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_f2|node|forms|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f3|node|forms|form';
  $field_group->group_name = 'group_f3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forms';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_f1_f2_f3_group';
  $field_group->data = array(
    'label' => 'F3',
    'weight' => '6',
    'children' => array(
      0 => 'field_final_price',
      1 => 'field_contract_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_f3|node|forms|form'] = $field_group;

  return $export;
}
