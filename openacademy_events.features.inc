<?php
/**
 * @file
 * openacademy_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openacademy_events_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function openacademy_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openacademy_events_node_info() {
  $items = array(
    'openacademy_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An important event to post to your site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
