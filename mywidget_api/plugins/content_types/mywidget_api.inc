<?php

/**
 * @file
 * Defines the custom widget.
 */

$plugin = array(
  'title' => t('My API Widget'),
  'description' => t('Display a custom widget using external API'),
  'single' => TRUE,
  'category' => t('MyCategory'),
  'render callback' => 'mywidget_api_render',
  'edit form' => 'mywidget_api_edit_form',
  'defaults' => array(
    'state' => '',
  ),
);


/**
 * Render callback for the widget.
 */
function mywidget_api_render($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  $block->title = t('My Custom DB Widget');

  $state = strtolower(check_plain($conf['state']));
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

  $block->content = theme('mywidget_api', $vars);

  return $block;
}

/**
 * Edit form for the panel.
 */
function mywidget_api_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  // make a select element with the matching item
  $form['state'] = array(
    '#title' => t('State'),
    '#description' => t('Enter the 2-letter abbreviation for the state.'),
    '#type' => 'textfield',
    '#default_value' => $conf['state'],
  );
  return $form;
}

/**
 * Submit handler for edit form. Save the custom form fields we added.
 */
function mywidget_api_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
