<?php
/**
 * @file
 * hpps_supplies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hpps_supplies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hpps_supplies';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hpps_supplies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hpps_supplies';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hpps_supplies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hpps_supplies';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_hpps_supplies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hpps_supplies';
  $strongarm->value = '1';
  $export['node_preview_hpps_supplies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hpps_supplies';
  $strongarm->value = 0;
  $export['node_submitted_hpps_supplies'] = $strongarm;

  return $export;
}
