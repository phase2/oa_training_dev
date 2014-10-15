<?php

/**
 * @file
 * Defines the custom widget.
 */

$plugin = array(
  'title' => t('My EFQ Widget'),
  'description' => t('Display a custom widget using entity field queries'),
  'single' => TRUE,
  'category' => t('MyCategory'),
  'edit form' => 'mywidget_efq_edit_form',
  'render callback' => 'mywidget_efq_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(
    'device_id' => '',
  ),
);


/**
 * Render callback for the widget.
 */
function mywidget_efq_render($subtype, $conf, $args, $context = NULL) {
  if (empty($context->data->nid) || !node_access('view', $context->data)) {
    return;
  }
  $node = $context->data;

  $block = new stdClass();
  $block->title = t('My Custom EFQ Widget');

  $device_id = $conf['device_id'];

  // Get Tasks.
  // Only return tasks with the matching device_id
  // Only return "open" tasks
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'oa_worktracker_task')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldCondition('field_device_ref', 'target_id', $device_id, '=')
    ->fieldCondition('field_oa_worktracker_task_status', 'value', 'open', '=');
  $result = $query->execute();

  // Load the actual task nodes to get title, etc
  $tasks = array();
  $nodes = node_load_multiple(array_keys($result['node']));
  foreach ($nodes as $nid => $task) {
    $tasks[$nid]['title'] = $task->title;
    $tasks[$nid]['link'] = l($task->title, 'node/' . $nid);
    $tasks[$nid]['body'] = $task->body[LANGUAGE_NONE][0]['value'];
  }

  $vars['tasks'] = $tasks;
  $vars['no_tasks'] = t('No tasks.');

  $block->content = theme('mywidget_efq', $vars);

  return $block;
}

/**
 * Edit form for the panel.
 */
function mywidget_efq_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  // get the current Space from context
  $spaceid = oa_core_get_space_context();

  // query all the devices assigned to the space
  $query = db_select('node', 'n');
  $query->leftJoin('og_membership', 'f', "n.nid = f.etid");
  $query->fields('n', array('nid', 'title'))
    ->condition('f.gid', $spaceid)
    ->condition('n.type', 'device')
    ->orderBy('n.title')
    // only return devices we have access to
    ->addTag('node_access');

  $result = $query->execute()->fetchAllAssoc('nid');

  $options = array();
  foreach ($result as $nid => $row) {
    $options[$nid] = $row->title;
  }

  // make a select element with the matching devices
  $form['device_id'] = array(
    '#title' => t('Device ID'),
    '#description' => t('Select a device to show tasks for.'),
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => $conf['device_id'],
  );
  return $form;
}

/**
 * Submit handler for edit form. Save the custom form fields we added.
 */
function mywidget_efq_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

