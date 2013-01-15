<?php
/**
 * @file
 * ofc_portfolio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofc_portfolio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ofc_portfolio_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ofc_portfolio_node_info() {
  $items = array(
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Web development portfolio.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
