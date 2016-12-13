<?php
/**
 * @file
 * opl_external_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opl_external_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_homepage_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New homepage events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date(s) (field_date_s_) */
  $handler->display->display_options['sorts']['field_date_s__value']['id'] = 'field_date_s__value';
  $handler->display->display_options['sorts']['field_date_s__value']['table'] = 'field_data_field_date_s_';
  $handler->display->display_options['sorts']['field_date_s__value']['field'] = 'field_date_s__value';
  $handler->display->display_options['sorts']['field_date_s__value']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
    'external_event' => 'external_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Dates (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date(s) (field_date_s_) */
  $handler->display->display_options['filters']['field_date_s__value']['id'] = 'field_date_s__value';
  $handler->display->display_options['filters']['field_date_s__value']['table'] = 'field_data_field_date_s_';
  $handler->display->display_options['filters']['field_date_s__value']['field'] = 'field_date_s__value';
  $handler->display->display_options['filters']['field_date_s__value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_s__value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_s__value']['default_date'] = 'now';
  $translatables['new_homepage_events'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );
  $export['new_homepage_events'] = $view;

  return $export;
}
