<?php
/**
 * @file
 * device_example.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function device_example_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:device:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'device';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '67b91556-cf8f-4825-b318-7dc9facdb723';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9beacf09-042d-44af-9701-144c54f189ae';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_device_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '9beacf09-042d-44af-9701-144c54f189ae';
    $display->content['new-9beacf09-042d-44af-9701-144c54f189ae'] = $pane;
    $display->panels['contentmain'][0] = 'new-9beacf09-042d-44af-9701-144c54f189ae';
    $pane = new stdClass();
    $pane->pid = 'new-9002702b-3eb8-42df-baf3-696fc24ae2a5';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9002702b-3eb8-42df-baf3-696fc24ae2a5';
    $display->content['new-9002702b-3eb8-42df-baf3-696fc24ae2a5'] = $pane;
    $display->panels['contentmain'][1] = 'new-9002702b-3eb8-42df-baf3-696fc24ae2a5';
    $pane = new stdClass();
    $pane->pid = 'new-2ef6e879-2459-42ce-b3de-aeb301829092';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_history_notes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2ef6e879-2459-42ce-b3de-aeb301829092';
    $display->content['new-2ef6e879-2459-42ce-b3de-aeb301829092'] = $pane;
    $display->panels['contentmain'][2] = 'new-2ef6e879-2459-42ce-b3de-aeb301829092';
    $pane = new stdClass();
    $pane->pid = 'new-633f6668-3b93-4bd9-828e-4a37c11d6a8f';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oa_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '633f6668-3b93-4bd9-828e-4a37c11d6a8f';
    $display->content['new-633f6668-3b93-4bd9-828e-4a37c11d6a8f'] = $pane;
    $display->panels['contentmain'][3] = 'new-633f6668-3b93-4bd9-828e-4a37c11d6a8f';
    $pane = new stdClass();
    $pane->pid = 'new-1a94bde2-62d9-4ea2-b72a-6660b0786f5a';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1a94bde2-62d9-4ea2-b72a-6660b0786f5a';
    $display->content['new-1a94bde2-62d9-4ea2-b72a-6660b0786f5a'] = $pane;
    $display->panels['contentmain'][4] = 'new-1a94bde2-62d9-4ea2-b72a-6660b0786f5a';
    $pane = new stdClass();
    $pane->pid = 'new-eadb9f2c-0bc3-4966-82c7-96cfc4943b95';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_device_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = 'eadb9f2c-0bc3-4966-82c7-96cfc4943b95';
    $display->content['new-eadb9f2c-0bc3-4966-82c7-96cfc4943b95'] = $pane;
    $display->panels['sidebar'][0] = 'new-eadb9f2c-0bc3-4966-82c7-96cfc4943b95';
    $pane = new stdClass();
    $pane->pid = 'new-1fed7a8c-f378-42f8-8f32-54ff8a9cf784';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_device_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '1fed7a8c-f378-42f8-8f32-54ff8a9cf784';
    $display->content['new-1fed7a8c-f378-42f8-8f32-54ff8a9cf784'] = $pane;
    $display->panels['sidebar'][1] = 'new-1fed7a8c-f378-42f8-8f32-54ff8a9cf784';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9002702b-3eb8-42df-baf3-696fc24ae2a5';
  $panelizer->display = $display;
  $export['node:device:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_section:device_section';
  $panelizer->title = 'Device Section';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6b061dde-e76e-4840-87d6-3c2d260e5bd0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f764f22-e7d4-4e51-ae8f-15eb0505f91d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f764f22-e7d4-4e51-ae8f-15eb0505f91d';
    $display->content['new-1f764f22-e7d4-4e51-ae8f-15eb0505f91d'] = $pane;
    $display->panels['contentmain'][0] = 'new-1f764f22-e7d4-4e51-ae8f-15eb0505f91d';
    $pane = new stdClass();
    $pane->pid = 'new-879791b5-d7ee-47c6-b761-54a0d9b7c33e';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '879791b5-d7ee-47c6-b761-54a0d9b7c33e';
    $display->content['new-879791b5-d7ee-47c6-b761-54a0d9b7c33e'] = $pane;
    $display->panels['contentmain'][1] = 'new-879791b5-d7ee-47c6-b761-54a0d9b7c33e';
    $pane = new stdClass();
    $pane->pid = 'new-1d569277-6935-40a8-bb57-280a1f3c23f9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
        'keys' => '',
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(),
        'field_oa_worktracker_priority_value' => array(),
        'field_oa_worktracker_task_type_value' => array(),
        'flagged' => '0',
        'field_device_ref_target_id' => '',
        'field_device_status_value' => 'All',
        'field_device_type_tid' => 'All',
      ),
      'show_exposed_form' => 1,
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 1,
        'realname_1' => 1,
        'realname' => 1,
        'title_1' => 1,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 1,
        'field_oa_worktracker_task_status' => 1,
        'comment_count' => 1,
        'last_updated' => 1,
        'field_device_ref' => 1,
        'field_device_status' => 1,
        'field_device_type' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Device Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1d569277-6935-40a8-bb57-280a1f3c23f9';
    $display->content['new-1d569277-6935-40a8-bb57-280a1f3c23f9'] = $pane;
    $display->panels['contentmain'][2] = 'new-1d569277-6935-40a8-bb57-280a1f3c23f9';
    $pane = new stdClass();
    $pane->pid = 'new-26424c66-b3df-4ed6-bb36-5bed16447182';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'devices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_device_id_value' => '',
        'field_device_status_value' => 'All',
        'field_device_type_tid' => 'All',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
      ),
      'show_exposed_form' => 1,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'field_device_id' => 1,
        'field_device_status' => 1,
        'field_device_type' => 1,
        'og_group_ref' => 1,
        'oa_section_ref' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Customer Devices',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '26424c66-b3df-4ed6-bb36-5bed16447182';
    $display->content['new-26424c66-b3df-4ed6-bb36-5bed16447182'] = $pane;
    $display->panels['contentmain'][3] = 'new-26424c66-b3df-4ed6-bb36-5bed16447182';
    $pane = new stdClass();
    $pane->pid = 'new-ee7b9a5a-2afb-49cd-b63c-bd6971ce0099';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-section_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'empty',
      ),
      'view_mode' => 'full',
      'widget_title' => NULL,
      'items_per_page' => '',
      'exposed' => array(
        'type' => array(),
        'realname' => '',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_parent' => 0,
        'oa_section_ref_target_id' => '',
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'show_exposed_form' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ee7b9a5a-2afb-49cd-b63c-bd6971ce0099';
    $display->content['new-ee7b9a5a-2afb-49cd-b63c-bd6971ce0099'] = $pane;
    $display->panels['contentmain'][4] = 'new-ee7b9a5a-2afb-49cd-b63c-bd6971ce0099';
    $pane = new stdClass();
    $pane->pid = 'new-8a102498-9433-4daa-89e8-02137abfcfc0';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'form_build_id' => 'form-AHJUfpYPcZ4fsSHUHIFy0Adu0CXy4e79Kcslz2yLodI',
      'form_token' => 'BzH8uxEwTjsQGuqkcXBIlcjCxMTFGGufXWz-7ckhC2M',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a102498-9433-4daa-89e8-02137abfcfc0';
    $display->content['new-8a102498-9433-4daa-89e8-02137abfcfc0'] = $pane;
    $display->panels['sidebar'][0] = 'new-8a102498-9433-4daa-89e8-02137abfcfc0';
    $pane = new stdClass();
    $pane->pid = 'new-e46eaca6-3e81-4a12-acd9-72122f1f183f';
    $pane->panel = 'sidebar';
    $pane->type = 'og_menu_single_menu';
    $pane->subtype = 'og_menu_single_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 0,
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'og_menu_single_depth' => '0',
      'og_menu_single_parent' => 'auto',
      'form_build_id' => 'form-4K3ewrxBpQ6gLpQ17PMXLK44cCFWxCLoQS-Yp1Hks_E',
      'form_token' => '1Bb8t5EXHaEf_Y5XvtojdqAxSDMGwVGyanDS7B9BUEs',
      'form_id' => 'og_menu_single_pane_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e46eaca6-3e81-4a12-acd9-72122f1f183f';
    $display->content['new-e46eaca6-3e81-4a12-acd9-72122f1f183f'] = $pane;
    $display->panels['sidebar'][1] = 'new-e46eaca6-3e81-4a12-acd9-72122f1f183f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_section:device_section'] = $panelizer;

  return $export;
}
