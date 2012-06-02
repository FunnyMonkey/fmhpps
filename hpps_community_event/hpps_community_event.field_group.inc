<?php
/**
 * @file
 * hpps_community_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hpps_community_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hpps_information|node|hpps_community_event|default';
  $field_group->group_name = 'group_hpps_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hpps_community_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information:',
    'weight' => '0',
    'children' => array(
      0 => 'field_hpps_status',
      1 => 'field_julio_event_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information:',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hpps_information|node|hpps_community_event|default'] = $field_group;

  return $export;
}
