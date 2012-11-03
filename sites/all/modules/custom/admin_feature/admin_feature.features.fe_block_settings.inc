<?php
/**
 * @file
 * admin_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function admin_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'comment-recent' => array(
      'delta' => 'recent',
      'module' => 'comment',
    ),
    'devel-execute_php' => array(
      'delta' => 'execute_php',
      'module' => 'devel',
    ),
    'devel-switch_user' => array(
      'delta' => 'switch_user',
      'module' => 'devel',
    ),
    'menu-devel' => array(
      'delta' => 'devel',
      'module' => 'menu',
    ),
    'node-recent' => array(
      'delta' => 'recent',
      'module' => 'node',
    ),
    'node-syndicate' => array(
      'delta' => 'syndicate',
      'module' => 'node',
    ),
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
    'shortcut-shortcuts' => array(
      'delta' => 'shortcuts',
      'module' => 'shortcut',
    ),
    'system-help' => array(
      'delta' => 'help',
      'module' => 'system',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'system-main-menu' => array(
      'delta' => 'main-menu',
      'module' => 'system',
    ),
    'system-management' => array(
      'delta' => 'management',
      'module' => 'system',
    ),
    'system-navigation' => array(
      'delta' => 'navigation',
      'module' => 'system',
    ),
    'system-powered-by' => array(
      'delta' => 'powered-by',
      'module' => 'system',
    ),
    'system-user-menu' => array(
      'delta' => 'user-menu',
      'module' => 'system',
    ),
    'user-login' => array(
      'delta' => 'login',
      'module' => 'user',
    ),
    'user-new' => array(
      'delta' => 'new',
      'module' => 'user',
    ),
    'user-online' => array(
      'delta' => 'online',
      'module' => 'user',
    ),
    'views-latest_questions-block' => array(
      'delta' => 'latest_questions-block',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['comment-recent'] = array(
    'module' => 'comment',
    'delta' => 'recent',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['devel-execute_php'] = array(
    'module' => 'devel',
    'delta' => 'execute_php',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['devel-switch_user'] = array(
    'module' => 'devel',
    'delta' => 'switch_user',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-devel'] = array(
    'module' => 'menu',
    'delta' => 'devel',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['shortcut-shortcuts'] = array(
    'module' => 'shortcut',
    'delta' => 'shortcuts',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '10',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '-8',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-latest_questions-block'] = array(
    'module' => 'views',
    'delta' => 'latest_questions-block',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-7',
    'region' => 'sidebar_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['comment-recent'] = array(
    'module' => 'comment',
    'delta' => 'recent',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'dashboard_inactive',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['devel-execute_php'] = array(
    'module' => 'devel',
    'delta' => 'execute_php',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['devel-switch_user'] = array(
    'module' => 'devel',
    'delta' => 'switch_user',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-devel'] = array(
    'module' => 'menu',
    'delta' => 'devel',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '10',
    'region' => 'dashboard_main',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-10',
    'region' => 'dashboard_sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['shortcut-shortcuts'] = array(
    'module' => 'shortcut',
    'delta' => 'shortcuts',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '10',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'dashboard_sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'dashboard_inactive',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-latest_questions-block'] = array(
    'module' => 'views',
    'delta' => 'latest_questions-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
