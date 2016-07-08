<?php

/**
 * @file
 * Defines the custom widget.
 */

$plugin = array(
  'title' => t('My API Node Widget'),
  'description' => t('Display a custom widget using external API from Node data'),
  'single' => TRUE,
  'category' => t('MyCategory'),
  'render callback' => 'mywidget_api_node_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);


/**
 * Render callback for the widget.
 */
function mywidget_api_node_render($subtype, $conf, $args, $context = NULL) {
  if (empty($context->data->nid) || !node_access('view', $context->data)) {
    return;
  }
  $node = $context->data;
  $wrapper = entity_metadata_wrapper('node', $node);
  $state = strtolower(check_plain($wrapper->field_atmos_state->value()));

  $block = new stdClass();

  $block->title = t('Counties of ' . strtoupper($state));

  $response = drupal_http_request('http://api.sba.gov/geodata/city_county_links_for_state_of/' . $state. '.json');
  $data = drupal_json_decode($response->data);
  $items = array();
  foreach ($data as $record) {
    if (empty($record['county_name'])) {
      $items[] = $record['name'];
    }
  }
  $vars['items'] = $items;
  $vars['no_items'] = t('No county information for ' . $state);

  $block->content = theme('mywidget_api_node', $vars);

  return $block;
}
