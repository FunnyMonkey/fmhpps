<?php
/**
 * @file
 * hpps_global.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hpps_global_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function hpps_global_views_api() {
  return array("version" => "3.0");
}
