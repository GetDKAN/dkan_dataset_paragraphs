<?php

/**
 * @file
 * test.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dkan_dataset_paragraphs_test_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-extended_metadata_test-field_metadata_test_field'.
  $field_instances['paragraphs_item-extended_metadata_test-field_metadata_test_field'] = array(
    'bundle' => 'extended_metadata_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_metadata_test_field',
    'label' => 'Metadata test field',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Metadata test field');

  return $field_instances;
}
