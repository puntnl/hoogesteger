<?php
/**
 * @file
 * stig_commerce.features.inc
 */

/**
 * Implements hook_views_api().
 */
function stig_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stig_commerce_node_info() {
  $items = array(
    'nd_product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
