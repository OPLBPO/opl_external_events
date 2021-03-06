<?php
/**
 * @file
 * opl_external_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opl_external_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opl_external_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opl_external_events_node_info() {
  $items = array(
    'external_event' => array(
      'name' => t('External event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function opl_external_events_default_search_api_index() {
  $items = array();
  $items['new_event_and_external_event_bundle'] = entity_import('search_api_index', '{
    "name" : "New event and external event bundle",
    "machine_name" : "new_event_and_external_event_bundle",
    "description" : null,
    "server" : "solr_6_prod",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "event", "external_event" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_age_group" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_date_s_" : { "type" : "list\\u003Cdate\\u003E" },
        "field_event_branch" : { "type" : "integer", "entity_type" : "node" },
        "field_event_dates" : { "type" : "list\\u003Cdate\\u003E" },
        "field_event_language" : { "type" : "string" },
        "field_event_status" : { "type" : "string" },
        "field_name_of_venue" : { "type" : "string" },
        "field_series_1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_shared_registration" : { "type" : "boolean" },
        "promote" : { "type" : "boolean" },
        "search_api_aggregation_2" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" },
        "upcoming_dates" : { "type" : "list\\u003Cdate\\u003E" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_aggregation_1" : {
                "name" : "Combined locations",
                "type" : "fulltext",
                "fields" : [ "field_event_branch", "field_name_of_venue" ],
                "description" : "A Fulltext aggregation of the following fields: Branch, Name of venue."
              },
              "search_api_aggregation_2" : {
                "name" : "Next upcoming date",
                "type" : "min",
                "fields" : [ "upcoming_dates" ],
                "description" : "A Minimum aggregation of the following fields: Upcoming Event Dates."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "title_field" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "title_field" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true, "title_field" : true, "body:value" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "title_field" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "title_field" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
