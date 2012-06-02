<?php
/**
 * @file
 * hpps_community_event.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hpps_community_event_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hpps_community_event';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hpps_community_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hpps_community_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hpps_community_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hpps_community_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_hpps_community_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hpps_community_event';
  $strongarm->value = '1';
  $export['node_preview_hpps_community_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hpps_community_event';
  $strongarm->value = 0;
  $export['node_submitted_hpps_community_event'] = $strongarm;

  return $export;
}
