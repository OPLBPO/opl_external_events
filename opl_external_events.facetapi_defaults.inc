<?php
/**
 * @file
 * opl_external_events.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function opl_external_events_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle::upcoming_dates';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = '';
  $facet->facet = 'upcoming_dates';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'date_range',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle::upcoming_dates'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:body:value';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'body:value';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:body:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_category';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_category';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_event_branch';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_event_branch';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'display' => 'display',
      'count' => 'count',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-49',
      'indexed' => '-47',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'ranges' => array(
      'past_hour' => array(
        'label' => 'Past hour',
        'machine_name' => 'past_hour',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '0',
        'delete' => 0,
      ),
      'past_24_hours' => array(
        'label' => 'Past 24 hours',
        'machine_name' => 'past_24_hours',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '24',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '1',
        'delete' => 0,
      ),
      'past_week' => array(
        'label' => 'Past week',
        'machine_name' => 'past_week',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '7',
        'date_range_start_unit' => 'DAY',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '2',
        'delete' => 0,
      ),
      'past_month' => array(
        'label' => 'Past month',
        'machine_name' => 'past_month',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'MONTH',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '3',
        'delete' => 0,
      ),
      'past_year' => array(
        'label' => 'Past year',
        'machine_name' => 'past_year',
        'date_range_start_op' => '-',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'YEAR',
        'date_range_end_op' => 'NOW',
        'date_range_end_amount' => '',
        'date_range_end_unit' => 'HOUR',
        'weight' => '4',
        'delete' => 0,
      ),
    ),
    'date_ranges' => array(
      'add_range' => 'Add a new date range',
    ),
    'empty_text' => array(
      'value' => '',
      'format' => '2',
    ),
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_event_branch'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_event_language';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_event_language';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_event_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_event_status';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_event_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_event_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_name_of_venue';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_name_of_venue';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_name_of_venue'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_series_1';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_series_1';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_series_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:field_shared_registration';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'field_shared_registration';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:field_shared_registration'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:promote';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'promote';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:promote'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:search_api_aggregation_2';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_2';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:search_api_aggregation_2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:search_api_language';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:status';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:sticky';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'sticky';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:sticky'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:title';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:title_field';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'title_field';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:title_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:type';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@new_event_and_external_event_bundle:block:type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@new_event_and_external_event_bundle:block:upcoming_dates';
  $facet->searcher = 'search_api@new_event_and_external_event_bundle';
  $facet->realm = 'block';
  $facet->facet = 'upcoming_dates';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'date_range',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'ranges' => array(
      'past_hour' => array(
        'label' => 'Within the next day',
        'machine_name' => 'past_hour',
        'date_range_start_op' => 'NOW',
        'date_range_start_amount' => '1',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => '+',
        'date_range_end_amount' => '1',
        'date_range_end_unit' => 'DAY',
        'weight' => '0',
        'delete' => 0,
      ),
      'past_24_hours' => array(
        'label' => 'Within the next week',
        'machine_name' => 'past_24_hours',
        'date_range_start_op' => 'NOW',
        'date_range_start_amount' => '24',
        'date_range_start_unit' => 'HOUR',
        'date_range_end_op' => '+',
        'date_range_end_amount' => '7',
        'date_range_end_unit' => 'DAY',
        'weight' => '1',
        'delete' => 0,
      ),
      'past_week' => array(
        'label' => 'Within the next month',
        'machine_name' => 'past_week',
        'date_range_start_op' => 'NOW',
        'date_range_start_amount' => '7',
        'date_range_start_unit' => 'DAY',
        'date_range_end_op' => '+',
        'date_range_end_amount' => '1',
        'date_range_end_unit' => 'MONTH',
        'weight' => '2',
        'delete' => 0,
      ),
    ),
    'date_ranges' => array(
      'add_range' => 'Add a new date range',
    ),
    'empty_text' => array(
      'value' => '',
      'format' => '2',
    ),
  );
  $export['search_api@new_event_and_external_event_bundle:block:upcoming_dates'] = $facet;

  return $export;
}
