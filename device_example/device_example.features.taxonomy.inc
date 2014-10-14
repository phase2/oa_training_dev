<?php
/**
 * @file
 * device_example.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function device_example_taxonomy_default_vocabularies() {
  return array(
    'device_type' => array(
      'name' => 'Device Type',
      'machine_name' => 'device_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
