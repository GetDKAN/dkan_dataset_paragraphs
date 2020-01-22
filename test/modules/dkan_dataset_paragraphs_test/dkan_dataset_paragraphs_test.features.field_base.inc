<?php

/**
 * @file
 * test.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dkan_dataset_paragraphs_test_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_metadata_test_field'.
  $field_bases['field_metadata_test_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_metadata_test_field',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
