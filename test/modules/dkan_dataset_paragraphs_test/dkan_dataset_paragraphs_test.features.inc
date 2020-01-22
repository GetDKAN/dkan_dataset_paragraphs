<?php

/**
 * @file
 * test.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function dkan_dataset_paragraphs_test_paragraphs_info() {
  $items = array(
    'extended_metadata_test' => array(
      'name' => 'Extended Metadata Test',
      'bundle' => 'extended_metadata_test',
      'locked' => '1',
    ),
  );
  return $items;
}
