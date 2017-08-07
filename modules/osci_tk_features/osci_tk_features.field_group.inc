<?php
/**
 * @file
 * osci_tk_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function osci_tk_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|section|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'File Attachments',
    'weight' => '9',
    'children' => array(
      0 => 'field_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-attachments field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_attachments|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_object_info|node|work_of_art|form';
  $field_group->group_name = 'group_basic_object_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Basic Object Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_creator',
      1 => 'field_work_title',
      2 => 'field_creation',
      3 => 'field_materials',
      4 => 'field_credit_line',
      5 => 'field_accession',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_object_info|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|section|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '8',
    'children' => array(
      0 => 'field_body',
      1 => 'field_authors_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-body field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_body|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|section|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'group_body',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-content field-group-tabs',
      ),
    ),
  );
  $export['group_content|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_curatorial_entry2|node|work_of_art|form';
  $field_group->group_name = 'group_curatorial_entry2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Curatorial Entry 2',
    'weight' => '6',
    'children' => array(
      0 => 'field_title_curatorial_entry2',
      1 => 'field_author_curatorial_entry2',
      2 => 'field_curatorial_entry2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_curatorial_entry2|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_curatorial_entry|node|section|form';
  $field_group->group_name = 'group_curatorial_entry';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Curatorial Entry',
    'weight' => '10',
    'children' => array(
      0 => 'field_author_curatorial_entry',
      1 => 'field_curatorial_entry',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-curatorial-entry field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_curatorial_entry|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_curatorial_entry|node|work_of_art|form';
  $field_group->group_name = 'group_curatorial_entry';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Curatorial Entry',
    'weight' => '5',
    'children' => array(
      0 => 'field_author_curatorial_entry',
      1 => 'field_curatorial_entry',
      2 => 'field_title_curatorial_entry',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_curatorial_entry|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_history|node|work_of_art|form';
  $field_group->group_name = 'group_exhibition_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Exhibition History',
    'weight' => '9',
    'children' => array(
      0 => 'field_exhibitions',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibition_history|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figures_footnotes|node|section|form';
  $field_group->group_name = 'group_figures_footnotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Figures and Footnotes',
    'weight' => '11',
    'children' => array(
      0 => 'group_figures',
      1 => 'group_footnotes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-figures-footnotes field-group-tabs',
      ),
    ),
  );
  $export['group_figures_footnotes|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figures_footnotes|node|work_of_art|form';
  $field_group->group_name = 'group_figures_footnotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Figures and Footnotes',
    'weight' => '1',
    'children' => array(
      0 => 'group_figures',
      1 => 'group_footnotes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_figures_footnotes|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figures|node|section|form';
  $field_group->group_name = 'group_figures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_figures_footnotes';
  $field_group->data = array(
    'label' => 'Figures',
    'weight' => '9',
    'children' => array(
      0 => 'field_figure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-figures field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_figures|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figures|node|work_of_art|form';
  $field_group->group_name = 'group_figures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_figures_footnotes';
  $field_group->data = array(
    'label' => 'Figures',
    'weight' => '1',
    'children' => array(
      0 => 'field_figure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_figures|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_attachments|node|work_of_art|form';
  $field_group->group_name = 'group_file_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Attachments',
    'weight' => '2',
    'children' => array(
      0 => 'field_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_file_attachments|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footnotes_figures|node|section|form';
  $field_group->group_name = 'group_footnotes_figures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footnotes & Figures',
    'weight' => '5',
    'children' => array(
      0 => 'group_figures',
      1 => 'group_footnotes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-footnotes-figures field-group-tabs',
      ),
    ),
  );
  $export['group_footnotes_figures|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footnotes|node|section|form';
  $field_group->group_name = 'group_footnotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_figures_footnotes';
  $field_group->data = array(
    'label' => 'Footnotes',
    'weight' => '10',
    'children' => array(
      0 => 'field_footnote',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-footnotes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_footnotes|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footnotes|node|work_of_art|form';
  $field_group->group_name = 'group_footnotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_figures_footnotes';
  $field_group->data = array(
    'label' => 'Footnotes',
    'weight' => '2',
    'children' => array(
      0 => 'field_footnote',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_footnotes|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|section|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_section_image',
      1 => 'field_subtitle',
      2 => 'field_active',
      3 => 'field_navigation_title',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|work_of_art|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_navigation_title',
      1 => 'field_catalogue_number',
      2 => 'field_donated_by',
      3 => 'field_active',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_osci|node|section|form';
  $field_group->group_name = 'group_osci';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'OSCI',
    'weight' => '0',
    'children' => array(
      0 => 'group_info',
      1 => 'group_attachments',
      2 => 'group_body',
      3 => 'group_curatorial_entry',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-osci field-group-tabs',
      ),
    ),
  );
  $export['group_osci|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_osci|node|work_of_art|form';
  $field_group->group_name = 'group_osci';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'OSCI',
    'weight' => '0',
    'children' => array(
      0 => 'group_info',
      1 => 'group_basic_object_info',
      2 => 'group_tombstone',
      3 => 'group_curatorial_entry',
      4 => 'group_technical_report',
      5 => 'group_provenance',
      6 => 'group_exhibition_history',
      7 => 'group_selected_references',
      8 => 'group_other_documentation',
      9 => 'group_curatorial_entry2',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_osci|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_documentation|node|work_of_art|form';
  $field_group->group_name = 'group_other_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Other Documentation',
    'weight' => '11',
    'children' => array(
      0 => 'field_other_documentation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_other_documentation|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_provenance|node|work_of_art|form';
  $field_group->group_name = 'group_provenance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Provenance',
    'weight' => '8',
    'children' => array(
      0 => 'field_provenance',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_provenance|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_content|node|publication|form';
  $field_group->group_name = 'group_publication_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_nodetree',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-publication-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publication_content|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_info|node|publication|form';
  $field_group->group_name = 'group_publication_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '11',
    'children' => array(
      0 => 'field_osci_tk_cover_image',
      1 => 'field_osci_tk_creator',
      2 => 'field_osci_tk_description',
      3 => 'field_osci_tk_publisher',
      4 => 'field_osci_tk_rights',
      5 => 'field_osci_tk_subject',
      6 => 'field_osci_tk_identifier',
      7 => 'field_osci_tk_editor',
      8 => 'field_vocabulary',
      9 => 'field_publication_date',
      10 => 'field_stylesheet',
      11 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-publication-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publication_info|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication|node|publication|form';
  $field_group->group_name = 'group_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '11',
    'children' => array(
      0 => 'group_publication_content',
      1 => 'group_publication_info',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-publication field-group-tabs',
      ),
    ),
  );
  $export['group_publication|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_selected_references|node|work_of_art|form';
  $field_group->group_name = 'group_selected_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Selected References',
    'weight' => '10',
    'children' => array(
      0 => 'field_references',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_selected_references|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_report|node|work_of_art|form';
  $field_group->group_name = 'group_technical_report';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Technical Report',
    'weight' => '7',
    'children' => array(
      0 => 'field_author_technical_report',
      1 => 'field_technical_report',
      2 => 'field_title_technical_report',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_technical_report|node|work_of_art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tombstone|node|work_of_art|form';
  $field_group->group_name = 'group_tombstone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work_of_art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_osci';
  $field_group->data = array(
    'label' => 'Tombstone',
    'weight' => '4',
    'children' => array(
      0 => 'field_authors_tombstone',
      1 => 'field_tombstone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tombstone|node|work_of_art|form'] = $field_group;

  return $export;
}
