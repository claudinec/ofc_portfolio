<?php
/**
 * @file
 * ofc_portfolio.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ofc_portfolio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:portfolio
  $menu_links['main-menu:portfolio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio',
    'router_path' => 'portfolio',
    'link_title' => 'Portfolio',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Portfolio');


  return $menu_links;
}
