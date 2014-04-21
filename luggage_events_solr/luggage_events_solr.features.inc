<?php
/**
 * @file
 * luggage_events_solr.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function luggage_events_solr_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-field_category'])) {
    $data['node-event-field_category']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-event-field_category']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-event-field_category']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-event-field_category']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
  }
  if (isset($data['node-event-field_event_type'])) {
    $data['node-event-field_event_type']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-event-field_event_type']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
  }
  if (isset($data['node-event-field_tags'])) {
    $data['node-event-field_tags']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-event-field_tags']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
  }
}
