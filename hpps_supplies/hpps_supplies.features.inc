<?php
/**
 * @file
 * hpps_supplies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hpps_supplies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hpps_supplies_node_info() {
  $items = array(
    'hpps_supplies' => array(
      'name' => t('Supplies'),
      'base' => 'node_content',
      'description' => t('Use supplies when there are physical materials needed to support teaching and/or learning.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
