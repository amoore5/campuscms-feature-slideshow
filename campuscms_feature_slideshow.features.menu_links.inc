<?php
/**
 * @file
 * campuscms_feature_slideshow.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_slideshow_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-administrator:node/add/slide
  $menu_links['menu-toolbar-administrator:node/add/slide'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'node/add/slide',
    'router_path' => 'node/add/slide',
    'link_title' => 'Slide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-site-manager:node/add/slide
  $menu_links['menu-toolbar-site-manager:node/add/slide'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'node/add/slide',
    'router_path' => 'node/add/slide',
    'link_title' => 'Slide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Slide');


  return $menu_links;
}
