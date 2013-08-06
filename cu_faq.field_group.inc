<?php
/**
 * @file
 * cu_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_faq_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_answer|field_collection_item|field_question_answer|form';
  $field_group->group_name = 'group_faq_answer';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_question_answer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_faq';
  $field_group->data = array(
    'label' => 'Answer',
    'weight' => '3',
    'children' => array(
      0 => 'field_faq_answer',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_faq_answer|field_collection_item|field_question_answer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_question|field_collection_item|field_question_answer|form';
  $field_group->group_name = 'group_faq_question';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_question_answer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_faq';
  $field_group->data = array(
    'label' => 'Question',
    'weight' => '1',
    'children' => array(
      0 => 'field_faq_question',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_faq_question|field_collection_item|field_question_answer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|field_collection_item|field_question_answer|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_question_answer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FAQ',
    'weight' => '0',
    'children' => array(
      0 => 'group_faq_question',
      1 => 'group_faq_answer',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_faq|field_collection_item|field_question_answer|form'] = $field_group;

  return $export;
}
