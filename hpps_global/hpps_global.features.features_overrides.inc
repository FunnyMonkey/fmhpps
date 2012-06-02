<?php
/**
 * @file
 * hpps_global.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hpps_global_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.julio_announcements_all.conditions|path|values|~node/*/register"] = '~node/*/register';
  $overrides["context.julio_calendar_all.conditions|path|values|~node/*/register"] = '~node/*/register';

 return $overrides;
}
