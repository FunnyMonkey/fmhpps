<?php
/**
 * @file
 * hpps_ongoing.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hpps_ongoing_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hpps_ongoing';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hpps_ongoing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hpps_ongoing';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hpps_ongoing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hpps_ongoing';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_hpps_ongoing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hpps_ongoing';
  $strongarm->value = '1';
  $export['node_preview_hpps_ongoing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hpps_ongoing';
  $strongarm->value = 0;
  $export['node_submitted_hpps_ongoing'] = $strongarm;

  return $export;
}
