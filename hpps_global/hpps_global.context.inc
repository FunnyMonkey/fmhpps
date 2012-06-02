<?php
/**
 * @file
 * hpps_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hpps_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hpps_community';
  $context->description = 'Blocks for the Hack PPS Community Pages';
  $context->tag = 'hpps';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'hpps_community_event' => 'hpps_community_event',
        'hpps_ongoing' => 'hpps_ongoing',
        'hpps_supplies' => 'hpps_supplies',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/register' => '~node/*/register',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_events_calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_events_calendar-block_1',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
        'views-julio_announcements-block_3' => array(
          'module' => 'views',
          'delta' => 'julio_announcements-block_3',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'registration-node',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for the Hack PPS Community Pages');
  t('hpps');
  $export['hpps_community'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hpps_search';
  $context->description = 'Search results';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/site*' => 'search/site*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu' => array(
          'module' => 'facetapi',
          'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-pMDLJAZfHqusY6J7R2u3VH7jZTYA1Qjq' => array(
          'module' => 'facetapi',
          'delta' => 'pMDLJAZfHqusY6J7R2u3VH7jZTYA1Qjq',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search results');
  $export['hpps_search'] = $context;

  return $export;
}
