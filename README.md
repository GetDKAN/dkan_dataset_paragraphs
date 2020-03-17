[![CircleCI](https://circleci.com/gh/GetDKAN/dkan_dataset_paragraphs.svg?style=svg)](https://circleci.com/gh/GetDKAN/dkan_dataset_paragraphs)

# DKAN Dataset Paragraphs (Extended Metadata)

This module adds the "Extended Metadata" field to the dataset content type.

## Extending Available Metadata Bundles

Utilizing the [Paragraphs](https://www.drupal.org/project/paragraphs) module, this module's feature holds the **"field_metadata_extended"** field base and creates the field instance on the **Dataset** content type when the module is enabled. This allows admin UI overridding of the field settings without conflicting with DKAN feature modules.

Additional "Paragraph" bundles can be added to provide additional metadata fields and the Dataset content type's "Extended Metadata" field settings can be edited to select which bundles are available when adding new Datasets. By default, all bundles are available.

The "[Paragraphs Default](http://drupal.org/project/paragraphs_defaults)" module allows you to configure which bundles of fields are automatically open when adding/editing Datasets at `/admin/structure/paragraphs/defaults/manage/node/field_metadata_extended/dataset`.

The configuration for new "Paragraph" bundles of **"Extended Metadata"** can be set in the Admin UI and saved in a new Feature module if you wish.

## Installation

This module requires the Paragraphs and Paragraphs Defaults modules. If you are using [DKAN-Tools](https://github.com/GetDKAN/dkan-tools) to manage your site, add the following to your [drupal.make](https://github.com/getdkan/dkan-tools#the-srcmake-folder) file to add the module and its dependencies to your build:

```yaml
  dkan_dataset_paragraphs:
    download:
      type: git
      url: https://github.com/GetDKAN/dkan_dataset_paragraphs.git
      branch: 7.x-1.x
  paragraphs:
    version: '1.0-rc5'
    patch:
      2896751: https://www.drupal.org/files/issues/paragraphs_unvalid_reference_host_entity.patch
  paragraphs_defaults:
    version: '1.0'
```

(Note you may want to replace `branch: 7.x-1.x` with a particular tag or revision to lock down your build.)

When enabling the module, there is a known issue with automatically enabling Paragraphs simultaneously. Enabling the Paragraphs module first is recommended.

## License

DKAN and related modules are freely-available under the ["GNU General Public License, version 2 or any later version"](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html) license.

## Acknowledgements

Copyright 2017-2020 CivicActions, Inc.

This module was partially funded by the [US Department of Agriculture](https://usda.gov), as part of the development of the [Ag Data Commons](https://data.nal.usda.gov/).

Any opinions, findings, conclusion, or recommendations expressed in this publication are those of the author(s) and do not necessarily reflect the view of the US. Department of Agriculture.

