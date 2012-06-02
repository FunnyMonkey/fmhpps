<?php
/**
 * @file
 * hpps_ongoing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hpps_ongoing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hpps_ongoing_node_info() {
  $items = array(
    'hpps_ongoing' => array(
      'name' => t('Ongoing'),
      'base' => 'node_content',
      'description' => t('Use ongoing for volunteer opportunities that occur intermittently throughout the year; eg. library help'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
