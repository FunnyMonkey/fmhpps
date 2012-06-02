<?php
/**
 * @file
 * hpps_global.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hpps_global_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hpps_supplies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'hpps_supplies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteer Opportunities';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_hpps_item_link' => 'body',
    'field_hpps_item_name' => 'body',
    'field_hpps_item_quantity' => 'body',
    'created' => 'created',
    'field_julio_event_date' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_hpps_item_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hpps_item_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hpps_item_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_julio_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Additional details';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_julio_event_date']['id'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['table'] = 'field_data_field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['field'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_julio_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_julio_event_date']['field_api_classes'] = 0;
  /* Field: Content: Item Link */
  $handler->display->display_options['fields']['field_hpps_item_link']['id'] = 'field_hpps_item_link';
  $handler->display->display_options['fields']['field_hpps_item_link']['table'] = 'field_data_field_hpps_item_link';
  $handler->display->display_options['fields']['field_hpps_item_link']['field'] = 'field_hpps_item_link';
  $handler->display->display_options['fields']['field_hpps_item_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hpps_item_link']['field_api_classes'] = 0;
  /* Field: Content: Item Name */
  $handler->display->display_options['fields']['field_hpps_item_name']['id'] = 'field_hpps_item_name';
  $handler->display->display_options['fields']['field_hpps_item_name']['table'] = 'field_data_field_hpps_item_name';
  $handler->display->display_options['fields']['field_hpps_item_name']['field'] = 'field_hpps_item_name';
  $handler->display->display_options['fields']['field_hpps_item_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_name']['field_api_classes'] = 0;
  /* Field: Content: Item Quantity */
  $handler->display->display_options['fields']['field_hpps_item_quantity']['id'] = 'field_hpps_item_quantity';
  $handler->display->display_options['fields']['field_hpps_item_quantity']['table'] = 'field_data_field_hpps_item_quantity';
  $handler->display->display_options['fields']['field_hpps_item_quantity']['field'] = 'field_hpps_item_quantity';
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['text'] = '[field_hpps_item_name] ([field_hpps_item_quantity]) : [field_hpps_item_link]';
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hpps_item_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hpps_item_quantity']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'day';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hpps_community_event' => 'hpps_community_event',
    'hpps_ongoing' => 'hpps_ongoing',
    'hpps_supplies' => 'hpps_supplies',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Status (field_hpps_status) */
  $handler->display->display_options['filters']['field_hpps_status_value']['id'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['table'] = 'field_data_field_hpps_status';
  $handler->display->display_options['filters']['field_hpps_status_value']['field'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['operator_id'] = 'field_hpps_status_value_op';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['label'] = 'Fulfillment status';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['operator'] = 'field_hpps_status_value_op';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['identifier'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hpps_community_event' => 'hpps_community_event',
    'hpps_ongoing' => 'hpps_ongoing',
    'hpps_supplies' => 'hpps_supplies',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Status (field_hpps_status) */
  $handler->display->display_options['filters']['field_hpps_status_value']['id'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['table'] = 'field_data_field_hpps_status';
  $handler->display->display_options['filters']['field_hpps_status_value']['field'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['operator_id'] = 'field_hpps_status_value_op';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['label'] = 'Fulfillment status';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['operator'] = 'field_hpps_status_value_op';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['identifier'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'supplies';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Volunteer opportunities from PPS Hackathon';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hpps_community_event' => 'hpps_community_event',
    'hpps_ongoing' => 'hpps_ongoing',
    'hpps_supplies' => 'hpps_supplies',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Choose a type of opportunity:';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Status (field_hpps_status) */
  $handler->display->display_options['filters']['field_hpps_status_value']['id'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['table'] = 'field_data_field_hpps_status';
  $handler->display->display_options['filters']['field_hpps_status_value']['field'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['operator_id'] = 'field_hpps_status_value_op';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['label'] = 'Fulfillment status';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['operator'] = 'field_hpps_status_value_op';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['identifier'] = 'field_hpps_status_value';
  $handler->display->display_options['filters']['field_hpps_status_value']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'supplies/rss.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['hpps_supplies'] = $view;

  return $export;
}
