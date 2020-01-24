<?php

use Drupal\DKANExtension\Context\RawDKANContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDKANContext
{
  protected $old_global_user;

  /** @BeforeFeature @extended_metadata */
  public static function enableTestModule() {
    module_enable(['dkan_dataset_paragraphs_test']);
  }

  /** @AfterFeature @extended_metadata */
  public static function disableTestModule() {
    module_disable(['dkan_dataset_paragraphs_test']);
  }

}
