<?php
/**
 * @file
 * quiz_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quiz_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function quiz_feature_node_info() {
  $items = array(
    'quiz' => array(
      'name' => t('Quiz'),
      'base' => 'node_content',
      'description' => t('Quiz for front-end skills'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
