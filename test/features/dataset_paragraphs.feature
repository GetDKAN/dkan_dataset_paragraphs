 @api @extended_metadata
Feature: DKAN Extended Metadata Features

  @extended_metadata_01
  Scenario: A user views the add dataset page
    Given I am logged in as a user with the administrator role
    And I visit "/node/add/dataset"
    Then I should see "Metadata test field" field

  @extended_metadata_02
  Scenario: A user views a dataset with extended metadata
    Given I am logged in as a user with the administrator role
    And I visit "/node/add/dataset"
    And I fill in "Title" with "paragraphs test"
    And I fill in "Metadata test field" with "This is a test"
    And I press the "Next: Add data" button
    And I visit "/dataset/paragraphs-test"
    Then I should see "Extended Metadata:"
    And I should see "Metadata test field:"
    And I should see "This is a test"
