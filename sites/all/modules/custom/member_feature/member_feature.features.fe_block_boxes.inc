<?php
/**
 * @file
 * member_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function member_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Member Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'member';
  $fe_block_boxes->body = '<h2>Members</h2>
<ul class="member-list">
	<li><img src="sites/all/themes/light/images/1.jpg"/><p>Alpha</p></li>
	<li><img src="sites/all/themes/light/images/2.jpg"/><p>Bravo</p></li>
	<li><img src="sites/all/themes/light/images/3.jpg"/><p>Charlie</p></li>
	<li><img src="sites/all/themes/light/images/4.jpg"/><p>Delta</p></li>
	<li><img src="sites/all/themes/light/images/5.jpg"/><p>Echo</p></li>
	<li><img src="sites/all/themes/light/images/6.jpg"/><p>Foxtrot</p></li>
</ul>';

  $export['member'] = $fe_block_boxes;

  return $export;
}
