<?php
/**
 * @file
 * device_title_change.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function device_title_change_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.devices.default_handlers|page_devices_panel_context|conf|display|title"] = 'My Device Listing';

 return $overrides;
}
