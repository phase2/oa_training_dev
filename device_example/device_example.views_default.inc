<?php
/**
 * @file
 * device_example.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function device_example_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'device_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Device Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'device' => 'device',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['device_reference'] = $view;

  $view = new view();
  $view->name = 'devices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Devices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Devices';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_device_id' => 'field_device_id',
    'field_device_status' => 'field_device_status',
    'field_device_type' => 'field_device_type',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_device_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_device_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_device_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Device ID */
  $handler->display->display_options['fields']['field_device_id']['id'] = 'field_device_id';
  $handler->display->display_options['fields']['field_device_id']['table'] = 'field_data_field_device_id';
  $handler->display->display_options['fields']['field_device_id']['field'] = 'field_device_id';
  /* Field: Content: Device Status */
  $handler->display->display_options['fields']['field_device_status']['id'] = 'field_device_status';
  $handler->display->display_options['fields']['field_device_status']['table'] = 'field_data_field_device_status';
  $handler->display->display_options['fields']['field_device_status']['field'] = 'field_device_status';
  /* Field: Content: Device Type */
  $handler->display->display_options['fields']['field_device_type']['id'] = 'field_device_type';
  $handler->display->display_options['fields']['field_device_type']['table'] = 'field_data_field_device_type';
  $handler->display->display_options['fields']['field_device_type']['field'] = 'field_device_type';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Space';
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'og_list_default';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Open Atrium Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['label'] = 'Section';
  $handler->display->display_options['fields']['oa_section_ref']['type'] = 'og_list_default';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'device' => 'device',
  );
  /* Filter criterion: Content: Device ID (field_device_id) */
  $handler->display->display_options['filters']['field_device_id_value']['id'] = 'field_device_id_value';
  $handler->display->display_options['filters']['field_device_id_value']['table'] = 'field_data_field_device_id';
  $handler->display->display_options['filters']['field_device_id_value']['field'] = 'field_device_id_value';
  $handler->display->display_options['filters']['field_device_id_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_device_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_device_id_value']['expose']['operator_id'] = 'field_device_id_value_op';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['label'] = 'Device ID';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['operator'] = 'field_device_id_value_op';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['identifier'] = 'field_device_id_value';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_device_id_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['autocomplete_field'] = 'field_device_id';
  $handler->display->display_options['filters']['field_device_id_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_device_id_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_device_id_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Device Status (field_device_status) */
  $handler->display->display_options['filters']['field_device_status_value']['id'] = 'field_device_status_value';
  $handler->display->display_options['filters']['field_device_status_value']['table'] = 'field_data_field_device_status';
  $handler->display->display_options['filters']['field_device_status_value']['field'] = 'field_device_status_value';
  $handler->display->display_options['filters']['field_device_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_device_status_value']['expose']['operator_id'] = 'field_device_status_value_op';
  $handler->display->display_options['filters']['field_device_status_value']['expose']['label'] = 'Device Status';
  $handler->display->display_options['filters']['field_device_status_value']['expose']['operator'] = 'field_device_status_value_op';
  $handler->display->display_options['filters']['field_device_status_value']['expose']['identifier'] = 'field_device_status_value';
  $handler->display->display_options['filters']['field_device_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Device Type (field_device_type) */
  $handler->display->display_options['filters']['field_device_type_tid']['id'] = 'field_device_type_tid';
  $handler->display->display_options['filters']['field_device_type_tid']['table'] = 'field_data_field_device_type';
  $handler->display->display_options['filters']['field_device_type_tid']['field'] = 'field_device_type_tid';
  $handler->display->display_options['filters']['field_device_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_device_type_tid']['expose']['operator_id'] = 'field_device_type_tid_op';
  $handler->display->display_options['filters']['field_device_type_tid']['expose']['label'] = 'Device Type';
  $handler->display->display_options['filters']['field_device_type_tid']['expose']['operator'] = 'field_device_type_tid_op';
  $handler->display->display_options['filters']['field_device_type_tid']['expose']['identifier'] = 'field_device_type_tid';
  $handler->display->display_options['filters']['field_device_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_device_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_device_type_tid']['vocabulary'] = 'device_type';
  /* Filter criterion: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Open Atrium Section (oa_section_ref) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'devices';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 'exposed_form_configure';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_device_id_value' => 'pane_and_exposed',
      'field_device_status_value' => 'pane_and_exposed',
      'field_device_type_tid' => 'pane_and_exposed',
      'og_group_ref_target_id' => 'pane_and_exposed',
      'oa_section_ref_target_id' => 'pane_and_exposed',
    ),
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'device_themed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Devices (themed)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 'exposed_form_configure';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_device_id_value' => 'pane_and_exposed',
      'field_device_status_value' => 'pane_and_exposed',
      'field_device_type_tid' => 'pane_and_exposed',
      'og_group_ref_target_id' => 'pane_and_exposed',
      'oa_section_ref_target_id' => 'pane_and_exposed',
    ),
  );
  $export['devices'] = $view;

  return $export;
}
