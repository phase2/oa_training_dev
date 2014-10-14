<?php
/**
 * @file
 * device_title_change.features.inc
 */

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function device_title_change_default_page_manager_pages_alter(&$data) {
  if (isset($data['devices'])) {
    $data['devices']->default_handlers['page_devices_panel_context']->conf['display']->title = 'My Device Listing'; /* WAS: 'Device Listing' */
  }
}
