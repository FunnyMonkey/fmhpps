<?php
/**
 * @file
 * hpps_community_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hpps_community_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hpps_community_event_node_info() {
  $items = array(
    'hpps_community_event' => array(
      'name' => t('Community Event'),
      'base' => 'node_content',
      'description' => t('Use community event for events that are going to occur on a specific day.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
