<?php

/**
 * @file
 * Defines the custom widget.
 */

$plugin = array(
  'title' => t('My DB Widget'),
  'description' => t('Display a custom widget using db queries'),
  'single' => TRUE,
  'category' => t('MyCategory'),
  'render callback' => 'mywidget_db_render',
  'edit form' => 'mywidget_db_edit_form',
  'defaults' => array(
    'db_value' => 0,
  ),
);


/**
 * Render callback for the widget.
 */
function mywidget_db_render($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  $block->title = t('My Custom DB Widget');

  $db_value = $conf['db_value'];

  // Get Items.
  $query = db_select('dbtable', 'd')
    ->fields('d', array('dbtable_id', 'name', 'description'))
    ->condition('d.value', $db_value);
  $items = $query
    ->execute()
    ->fetchAllAssoc('dbtable_id');

  $vars['items'] = $items;
  $vars['no_items'] = t('No items.');

  $block->content = theme('mywidget_db', $vars);

  return $block;
}

/**
 * Edit form for the panel.
 */
function mywidget_db_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  // make a select element with the matching item
  $form['db_value'] = array(
    '#title' => t('Value to match'),
    '#description' => t('Select the value of items to show.'),
    '#type' => 'textfield',
    '#default_value' => $conf['db_value'],
  );
  return $form;
}

/**
 * Submit handler for edit form. Save the custom form fields we added.
 */
function mywidget_db_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
