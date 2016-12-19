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
  $view->name = 'new_category_vocabulary_taxonomy_entity_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'New category vocabulary taxonomy entity references';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    15 => '15',
    38 => '38',
    37 => '37',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'subjects::field_content_type' => 'subjects::field_content_type',
        ),
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: content type */
  $handler->display->display_options['fields']['field_content_type']['id'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['fields']['field_content_type']['field'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['delta_offset'] = '0';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    54 => '54',
  );

  /* Display: Taxonomy list -- filtered by content type */
  $handler = $view->new_display('entityreference', 'Taxonomy list -- filtered by content type', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: content type (field_content_type) */
  $handler->display->display_options['arguments']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['arguments']['field_content_type_value']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['arguments']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['arguments']['field_content_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_content_type_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_content_type_value']['default_argument_options']['code'] = '$type = \'\';
if (arg(0) == \'node\' && arg(1) == \'add\') {
    $type = arg(2); 
  }
elseif (arg(0) == \'node\' && is_numeric(arg(1))) {
    $nid = arg(1);
    $node = node_load($nid);
    $type = $node->type; 
  }  
return $type;';
  $handler->display->display_options['arguments']['field_content_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_content_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_content_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_content_type_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_content_type_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_content_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_content_type_value']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    54 => '54',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/categories-by-content-type-new';
  $translatables['new_category_vocabulary_taxonomy_entity_references'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Taxonomy term'),
    t('- Choose an operation -'),
    t('content type'),
    t('Taxonomy list -- filtered by content type'),
    t('All'),
    t('Page'),
  );
  $export['new_category_vocabulary_taxonomy_entity_references'] = $view;

  $view = new view();
  $view->name = 'new_events_search_api_with_external';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_new_event_and_external_event_bundle';
  $view->human_name = 'New events search api with external';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Indexed Content: Sticky in lists */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Next upcoming date */
  $handler->display->display_options['sorts']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
  );
  /* Filter criterion: Indexed Content: Upcoming Event Dates */
  $handler->display->display_options['filters']['upcoming_dates']['id'] = 'upcoming_dates';
  $handler->display->display_options['filters']['upcoming_dates']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['upcoming_dates']['field'] = 'upcoming_dates';
  $handler->display->display_options['filters']['upcoming_dates']['operator'] = '>=';
  $handler->display->display_options['filters']['upcoming_dates']['value'] = 'now';
  $handler->display->display_options['filters']['upcoming_dates']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_event' => 'external_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;

  /* Display: Events pane */
  $handler = $view->new_display('panel_pane', 'Events pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Sticky in lists */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Next upcoming date */
  $handler->display->display_options['sorts']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Next upcoming date */
  $handler->display->display_options['filters']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['operator'] = '>=';
  $handler->display->display_options['filters']['search_api_aggregation_2']['value'] = 'now';
  $handler->display->display_options['filters']['search_api_aggregation_2']['group'] = 1;
  /* Filter criterion: Indexed Content: Date(s) */
  $handler->display->display_options['filters']['field_date_s_']['id'] = 'field_date_s_';
  $handler->display->display_options['filters']['field_date_s_']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['field_date_s_']['field'] = 'field_date_s_';
  $handler->display->display_options['filters']['field_date_s_']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_s_']['value'] = 'now';
  $handler->display->display_options['filters']['field_date_s_']['group'] = 2;
  /* Filter criterion: Indexed Content: Event status */
  $handler->display->display_options['filters']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['filters']['field_event_status']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['filters']['field_event_status']['operator'] = '<>';
  $handler->display->display_options['filters']['field_event_status']['value'] = array(
    'cancelled' => 'cancelled',
  );

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-result-item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'search_result';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
  );
  /* Filter criterion: Indexed Content: Upcoming Event Dates */
  $handler->display->display_options['filters']['upcoming_dates']['id'] = 'upcoming_dates';
  $handler->display->display_options['filters']['upcoming_dates']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['upcoming_dates']['field'] = 'upcoming_dates';
  $handler->display->display_options['filters']['upcoming_dates']['operator'] = '>=';
  $handler->display->display_options['filters']['upcoming_dates']['value'] = 'now';
  $handler->display->display_options['filters']['upcoming_dates']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_event' => 'external_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Indexed Content: Date(s) */
  $handler->display->display_options['filters']['field_date_s_']['id'] = 'field_date_s_';
  $handler->display->display_options['filters']['field_date_s_']['table'] = 'search_api_index_new_event_and_external_event_bundle';
  $handler->display->display_options['filters']['field_date_s_']['field'] = 'field_date_s_';
  $handler->display->display_options['filters']['field_date_s_']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_s_']['value'] = 'now';
  $handler->display->display_options['filters']['field_date_s_']['group'] = 2;

  /* Display: New internal-external facet for event language */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for event language', 'search_api_views_facets_block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Language';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['block_description'] = 'New internal-external event facet block -- language';
  $handler->display->display_options['facet_field'] = 'field_event_language';

  /* Display: New internal-external facet for event subject */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for event subject', 'search_api_views_facets_block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subject';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_category';

  /* Display: New internal-external facet for branch */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for branch', 'search_api_views_facets_block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Branch';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_event_branch';

  /* Display: New internal-external facet for series */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for series', 'search_api_views_facets_block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Series';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_series_1';

  /* Display: New internal-external facet for external venue */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for external venue', 'search_api_views_facets_block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'External venue';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_name_of_venue';

  /* Display: New internal-external facet for content type */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for content type', 'search_api_views_facets_block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'In-library or partnered events';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'type';

  /* Display: New internal-external facet for age group */
  $handler = $view->new_display('search_api_views_facets_block', 'New internal-external facet for age group', 'search_api_views_facets_block_7');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_age_group';
  $translatables['new_events_search_api_with_external'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Fulltext search'),
    t('Events pane'),
    t('View panes'),
    t('Embed'),
    t('New internal-external facet for event language'),
    t('Language'),
    t('New internal-external event facet block -- language'),
    t('New internal-external facet for event subject'),
    t('Subject'),
    t('New internal-external facet for branch'),
    t('Branch'),
    t('New internal-external facet for series'),
    t('Series'),
    t('New internal-external facet for external venue'),
    t('External venue'),
    t('New internal-external facet for content type'),
    t('In-library or partnered events'),
    t('New internal-external facet for age group'),
  );
  $export['new_events_search_api_with_external'] = $view;

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
