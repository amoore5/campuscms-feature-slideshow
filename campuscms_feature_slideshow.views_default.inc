<?php
/**
 * @file
 * campuscms_feature_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function campuscms_feature_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slides';
  $view->description = 'Display slides with featured content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'slideshow';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_image' => 0,
    'field_slide_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_image' => 0,
    'field_slide_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_slide_link_1']['id'] = 'field_slide_link_1';
  $handler->display->display_options['fields']['field_slide_link_1']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link_1']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_link_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_slide_link_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slide_link_1]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['path'] = '[field_slide_link_1]';
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Background */
  $handler->display->display_options['fields']['field_slide_background']['id'] = 'field_slide_background';
  $handler->display->display_options['fields']['field_slide_background']['table'] = 'field_data_field_slide_background';
  $handler->display->display_options['fields']['field_slide_background']['field'] = 'field_slide_background';
  $handler->display->display_options['fields']['field_slide_background']['label'] = '';
  $handler->display->display_options['fields']['field_slide_background']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['text'] = '[field_slide_background-value]';
  $handler->display->display_options['fields']['field_slide_background']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_background']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_background']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_slide_background']['field_api_classes'] = 0;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Slides */
  $handler = $view->new_display('block', 'Slides', 'block');
  $export['slides'] = $view;

  return $export;
}
