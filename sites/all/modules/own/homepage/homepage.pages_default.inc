<?php
/**
 * @file
 * homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'This is the homepage layout. ';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage';
  $display->uuid = 'e35aac8c-9d4b-40e9-8805-6b63dfd69716';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62f352b9-3aa8-455d-811f-d6b5860380a2';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62f352b9-3aa8-455d-811f-d6b5860380a2';
    $display->content['new-62f352b9-3aa8-455d-811f-d6b5860380a2'] = $pane;
    $display->panels['center'][0] = 'new-62f352b9-3aa8-455d-811f-d6b5860380a2';
    $pane = new stdClass();
    $pane->pid = 'new-ba32b9cd-b3ff-4c9a-aecb-c591063c4793';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'recent_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ba32b9cd-b3ff-4c9a-aecb-c591063c4793';
    $display->content['new-ba32b9cd-b3ff-4c9a-aecb-c591063c4793'] = $pane;
    $display->panels['center'][1] = 'new-ba32b9cd-b3ff-4c9a-aecb-c591063c4793';
    $pane = new stdClass();
    $pane->pid = 'new-cc4e3a72-066e-480a-9074-24f3f3ebb81d';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'photo_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cc4e3a72-066e-480a-9074-24f3f3ebb81d';
    $display->content['new-cc4e3a72-066e-480a-9074-24f3f3ebb81d'] = $pane;
    $display->panels['center'][2] = 'new-cc4e3a72-066e-480a-9074-24f3f3ebb81d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-62f352b9-3aa8-455d-811f-d6b5860380a2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
