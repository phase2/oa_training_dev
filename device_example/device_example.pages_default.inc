<?php
/**
 * @file
 * device_example.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function device_example_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_8';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Device Edit Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56f6d0a5-d0cb-4670-8442-80de25b84871';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73569090-5f67-47b1-b6a5-634bc8104c2b';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73569090-5f67-47b1-b6a5-634bc8104c2b';
    $display->content['new-73569090-5f67-47b1-b6a5-634bc8104c2b'] = $pane;
    $display->panels['contentmain'][0] = 'new-73569090-5f67-47b1-b6a5-634bc8104c2b';
    $pane = new stdClass();
    $pane->pid = 'new-4a4703ea-9bbd-491b-890d-827b0cf0fc37';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_device_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4a4703ea-9bbd-491b-890d-827b0cf0fc37';
    $display->content['new-4a4703ea-9bbd-491b-890d-827b0cf0fc37'] = $pane;
    $display->panels['contentmain'][1] = 'new-4a4703ea-9bbd-491b-890d-827b0cf0fc37';
    $pane = new stdClass();
    $pane->pid = 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '17fa67de-e033-46f2-bdd8-a138e91da0e4';
    $display->content['new-17fa67de-e033-46f2-bdd8-a138e91da0e4'] = $pane;
    $display->panels['contentmain'][2] = 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4';
    $pane = new stdClass();
    $pane->pid = 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fb4920fb-24fa-425e-b6fc-958b5ccd2d52';
    $display->content['new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52'] = $pane;
    $display->panels['contentmain'][3] = 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52';
    $pane = new stdClass();
    $pane->pid = 'new-880590fc-8792-4101-896a-c5ae1ac7ffd4';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_device_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '880590fc-8792-4101-896a-c5ae1ac7ffd4';
    $display->content['new-880590fc-8792-4101-896a-c5ae1ac7ffd4'] = $pane;
    $display->panels['sidebar'][0] = 'new-880590fc-8792-4101-896a-c5ae1ac7ffd4';
    $pane = new stdClass();
    $pane->pid = 'new-f2044b0b-87ac-4df8-911d-d735809c6a87';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_device_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f2044b0b-87ac-4df8-911d-d735809c6a87';
    $display->content['new-f2044b0b-87ac-4df8-911d-d735809c6a87'] = $pane;
    $display->panels['sidebar'][1] = 'new-f2044b0b-87ac-4df8-911d-d735809c6a87';
    $pane = new stdClass();
    $pane->pid = 'new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Featured image',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '373bd769-1e08-4ec5-85b6-0a1d2fc759fd';
    $display->content['new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd'] = $pane;
    $display->panels['sidebar'][2] = 'new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd';
    $pane = new stdClass();
    $pane->pid = 'new-51126c95-cf51-4ad6-a27a-11e4260d8023';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Content category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '51126c95-cf51-4ad6-a27a-11e4260d8023';
    $display->content['new-51126c95-cf51-4ad6-a27a-11e4260d8023'] = $pane;
    $display->panels['sidebar'][3] = 'new-51126c95-cf51-4ad6-a27a-11e4260d8023';
    $pane = new stdClass();
    $pane->pid = 'new-99f6c0bd-36fd-411b-9833-c0be0fab7548';
    $pane->panel = 'sidebar';
    $pane->type = 'panelizer_form_default';
    $pane->subtype = 'panelizer_form_default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '99f6c0bd-36fd-411b-9833-c0be0fab7548';
    $display->content['new-99f6c0bd-36fd-411b-9833-c0be0fab7548'] = $pane;
    $display->panels['sidebar'][4] = 'new-99f6c0bd-36fd-411b-9833-c0be0fab7548';
    $pane = new stdClass();
    $pane->pid = 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e38ab3a3-24d0-4ac2-900e-4ddb0248be0c';
    $display->content['new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c'] = $pane;
    $display->panels['sidebar'][5] = 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c';
    $pane = new stdClass();
    $pane->pid = 'new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9176b962-e64f-44a6-8ebe-e03ebf0f6c3d';
    $display->content['new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d'] = $pane;
    $display->panels['sidebar'][6] = 'new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d';
    $pane = new stdClass();
    $pane->pid = 'new-6e4a98d8-3738-41b9-8c33-4b4c905c6834';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_author';
    $pane->subtype = 'node_form_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '6e4a98d8-3738-41b9-8c33-4b4c905c6834';
    $display->content['new-6e4a98d8-3738-41b9-8c33-4b4c905c6834'] = $pane;
    $display->panels['sidebar'][7] = 'new-6e4a98d8-3738-41b9-8c33-4b4c905c6834';
    $pane = new stdClass();
    $pane->pid = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $display->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2'] = $pane;
    $display->panels['sidebar'][8] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_8'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function device_example_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'devices';
  $page->task = 'page';
  $page->admin_title = 'Devices';
  $page->admin_description = '';
  $page->path = 'device-list';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_devices_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'devices';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Device Listing';
  $display->uuid = '8685898b-665d-4732-bde0-0d1aeb45ff06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f5fe5490-a0fb-43b6-b1b7-38d0763b3e3c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'devices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'show_exposed_form' => 1,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 0,
        'field_device_id' => 1,
        'field_device_status' => 1,
        'field_device_type' => 1,
      ),
      'exposed' => array(
        'field_device_id_value' => '',
        'field_device_status_value' => 'All',
        'field_device_type_tid' => 'All',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5fe5490-a0fb-43b6-b1b7-38d0763b3e3c';
    $display->content['new-f5fe5490-a0fb-43b6-b1b7-38d0763b3e3c'] = $pane;
    $display->panels['contentmain'][0] = 'new-f5fe5490-a0fb-43b6-b1b7-38d0763b3e3c';
    $pane = new stdClass();
    $pane->pid = 'new-3e3c059c-32e7-480b-8934-b687f486d19c';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e3c059c-32e7-480b-8934-b687f486d19c';
    $display->content['new-3e3c059c-32e7-480b-8934-b687f486d19c'] = $pane;
    $display->panels['sidebar'][0] = 'new-3e3c059c-32e7-480b-8934-b687f486d19c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f5fe5490-a0fb-43b6-b1b7-38d0763b3e3c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['devices'] = $page;

  return $pages;

}
