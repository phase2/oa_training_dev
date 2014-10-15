<?php

/**
 * @file
 * Defines the custom widget.
 */

$plugin = array(
  'title' => t('My VIEW Widget'),
  'description' => t('Display a custom widget with a view'),
  'single' => TRUE,
  'category' => t('MyCategory'),
  'edit form' => 'mywidget_view_edit_form',
  'render callback' => 'mywidget_view_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(
    'text_body' => '',
    'text_color' => '',
    'background_color' => '',
  ),
);


/**
 * Render callback for the widget.
 */
function mywidget_view_render($subtype, $conf, $args, $context = NULL) {
  if (empty($context->data->nid) || !node_access('view', $context->data)) {
    return;
  }
  $node = $context->data;

  $block = new stdClass();
  $block->title = t('My Custom VIEW Widget');

  $spaceid = oa_core_get_space_context();

  $view = views_get_view('device_reference');
  $view->set_display('entityreference_1');
  $view->set_arguments(array($spaceid));
  $view->pre_execute();
  $view->execute();

  // you can render the view directly
  $vars['view'] = $view->render();

  // or you can loop through the view results yourself
  $devices = array();
  foreach ($view->result as $row) {
    $devices[] = $row->node_title;
  }
  $vars['devices'] = theme('item_list', array('items' => $devices));

  $block->content = theme('mywidget_view', $vars);

  return $block;
}

/**
 * Edit form for the panel.
 */
function mywidget_view_edit_form($form, &$form_state) {
  return array();
}

/**
 * Submit handler for edit form. Save the custom form fields we added.
 */
function mywidget_view_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

