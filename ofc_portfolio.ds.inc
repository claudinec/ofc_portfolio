<?php
/**
 * @file
 * ofc_portfolio.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ofc_portfolio_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|portfolio|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'portfolio';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|portfolio|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofc_portfolio_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|portfolio|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'portfolio';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_dates',
        2 => 'field_screenshot',
      ),
      'right' => array(
        3 => 'field_portfolio_url',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_dates' => 'left',
      'field_screenshot' => 'left',
      'field_portfolio_url' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|portfolio|default'] = $ds_layout;

  return $export;
}
