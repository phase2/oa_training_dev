<?php

/**
 * @file
 * Defines the custom widget.
 */

$plugin = array(
  'title' => t('My Widget'),
  'description' => t('Display a custom widget'),
  'single' => TRUE,
  'category' => t('MyCategory'),
  'edit form' => 'mywidget_edit_form',
  'render callback' => 'mywidget_render',
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
function mywidget_render($subtype, $conf, $args, $context = NULL) {
  if (empty($context->data->nid) || !node_access('view', $context->data)) {
    return;
  }
  $node = $context->data;

  $block = new stdClass();
  $block->title = t('My Custom Widget');

  $vars['node_title'] = $node->title;
  $vars['body'] = isset($conf['text_body']['value']) ? $conf['text_body']['value'] : '';

  $styles = '';
  if (!empty($conf['text_color'])) {
    $styles .= 'color:' . $conf['text_color'] . '; ';
  }
  if (!empty($conf['background_color'])) {
    $styles .= 'background-color:' . $conf['background_color'] . '; ';
  }
  $vars['styles'] = $styles;

  $block->content = theme('mywidget', $vars);

  return $block;
}

/**
 * Edit form for the panel.
 */
function mywidget_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['text_body'] = array(
    '#title' => t('Displayed Text'),
    '#description' => t('Enter the full text to be displayed.'),
    '#type' => 'text_format',
    '#format' => isset($conf['text_body']['format']) ? $conf['text_body']['format'] : 'panopoly_wysiwyg_text',
    '#default_value' => isset($conf['text_body']['value']) ? $conf['text_body']['value'] : '',
  );
  $form['text_color'] = array(
    '#title' => t('Text Color'),
    '#description' => t('Enter the color of the text.'),
    '#type' => 'textfield',
    '#default_value' => $conf['text_color'],
  );
  $form['background_color'] = array(
    '#title' => t('Background Color'),
    '#description' => t('Enter the background color.'),
    '#type' => 'textfield',
    '#default_value' => $conf['background_color'],
  );
  return $form;
}

/**
 * Submit handler for edit form. Save the custom form fields we added.
 */
function mywidget_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

