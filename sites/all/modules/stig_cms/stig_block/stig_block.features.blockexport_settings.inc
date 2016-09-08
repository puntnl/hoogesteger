<?php
/**
 * @file
 * stig_block.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function stig_block_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 22,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'rhythm_cms',
  'delta' => 'menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/header-white',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'rhythm_cms',
  'delta' => 'page_title',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'rhythm_cms',
  'delta' => 'page_title_simple',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'rhythm_cms',
  'delta' => 'search_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'rhythm_cms',
  'delta' => 'search_2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 38,
  'module' => 'rhythm_cms',
  'delta' => 'breadcrumb',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'rhythm_cms',
  'delta' => 'menu',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/header-white',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'rhythm_cms',
  'delta' => 'page_title',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'rhythm_cms',
  'delta' => 'page_title_simple',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'rhythm_cms',
  'delta' => 'search_1',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'rhythm_cms',
  'delta' => 'search_2',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'rhythm_cms',
  'delta' => 'breadcrumb',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-dark-transparent',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-dark-transparent',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-white-transparent',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -52,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-white-transparent',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-white
content/contact-2
content/services-3
content/faq-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-white
content/contact-2
content/services-3
content/faq-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-parallax
portfolio-promo',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -55,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-parallax
portfolio-promo',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => -12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'views',
  'delta' => 'related_products-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 68,
  'module' => 'views',
  'delta' => 'related_products-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 69,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '4-columns-shop
product*
blog-3-columns
blog-4-columns
blog-masonry-3-columns
blog-masonry-4-columns
portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 70,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'content_full',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '4-columns-shop
product*
blog-3-columns
blog-4-columns
blog-masonry-3-columns
blog-masonry-4-columns
portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'views',
  'delta' => 'shop_categories-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 72,
  'module' => 'views',
  'delta' => 'shop_categories-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'views',
  'delta' => 'products_best_sellers-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'views',
  'delta' => 'products_best_sellers-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 75,
  'module' => 'views',
  'delta' => 'products_tags-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Tags',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'views',
  'delta' => 'products_tags-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -17,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Tags',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 77,
  'module' => 'views',
  'delta' => 'products_comments-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -15,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => 'Comments',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'views',
  'delta' => 'products_comments-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Text Widget',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -13,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Text Widget',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'views',
  'delta' => 'archive-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -12,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Archive',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'views',
  'delta' => 'archive-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Archive',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'views',
  'delta' => '-exp-shop_2_columns-page',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'views',
  'delta' => '-exp-shop_2_columns-page',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => '',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'shop*',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'rhythm_cms',
  'delta' => 'products_filter',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => 'Filter by Price',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'rhythm_cms',
  'delta' => 'products_filter',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => 'Filter by Price',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '4-columns-shop',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '4-columns-shop',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'views',
  'delta' => 'products_comments-block_1',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -14,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'views',
  'delta' => 'products_comments-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'views',
  'delta' => 'shop_categories-block_1',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Blog Taxonomies',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'views',
  'delta' => 'shop_categories-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Blog Taxonomies',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'views',
  'delta' => 'last_posts-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -16,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'views',
  'delta' => 'last_posts-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-masonry-3-columns
blog-masonry-4-columns
blog-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -3,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-masonry-3-columns
blog-masonry-4-columns
blog-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-masonry-3-columns
blog-masonry-4-columns
blog-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -2,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-masonry-3-columns
blog-masonry-4-columns
blog-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-4-columns
blog-masonry-3-columns
blog-masonry-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-4-columns
blog-masonry-3-columns
blog-masonry-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'views',
  'delta' => 'team-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'views',
  'delta' => 'team-block',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'views',
  'delta' => 'team-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'views',
  'delta' => 'team-block_1',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'views',
  'delta' => 'portfolio_promo-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'views',
  'delta' => 'portfolio_promo-block',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'locale',
  'delta' => 'language',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -51,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/pricing-1
content/pricing-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-boxed*
portfolio-titles*
portfolio-masonry*
portfolio-parallax*
portfolio-promo*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -52,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/contact-1
node/119
node/119*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -29,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/contact-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -30,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/contact-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/landing-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'views',
  'delta' => 'shop_2_columns-block_1',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'views',
  'delta' => 'blog_grid-block_1',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -48,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/main-demo',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -47,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/1/yellow',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -46,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -45,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -44,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/4/red',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -42,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -41,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -43,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/8/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/9/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -37,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'md_slider',
  'delta' => 'mega-slider-1',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/12',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/10/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -36,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/14',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -35,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/15',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'block',
  'delta' => 32,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -34,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/16',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'block',
  'delta' => 33,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -33,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/17',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'block',
  'delta' => 34,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -32,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/18',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'views',
  'delta' => 'portfolio_boxed-block_1',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'block',
  'delta' => 35,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -31,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/all-demos',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'block',
  'delta' => 36,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -27,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'menu',
  'delta' => 'menu-one-page',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'tb_megamenu',
  'delta' => 'menu-one-page',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'block',
  'delta' => 37,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/1/yellow',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'block',
  'delta' => 38,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'block',
  'delta' => 39,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'block',
  'delta' => 40,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/4/red',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'block',
  'delta' => 41,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'block',
  'delta' => 42,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'block',
  'delta' => 43,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -13,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'block',
  'delta' => 44,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -16,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/8/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 148,
  'module' => 'block',
  'delta' => 45,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -14,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/9/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 149,
  'module' => 'block',
  'delta' => 46,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -15,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/10/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 150,
  'module' => 'block',
  'delta' => 47,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -17,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'block',
  'delta' => 48,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -12,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/14',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 152,
  'module' => 'block',
  'delta' => 49,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -24,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/15',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 153,
  'module' => 'block',
  'delta' => 50,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/16',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 154,
  'module' => 'block',
  'delta' => 51,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/17',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 155,
  'module' => 'block',
  'delta' => 52,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -11,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/18',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'block',
  'delta' => 53,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/about-us-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 157,
  'module' => 'block',
  'delta' => 54,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -9,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/services-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 158,
  'module' => 'block',
  'delta' => 55,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -8,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/services-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 159,
  'module' => 'block',
  'delta' => 56,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -7,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/team-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 160,
  'module' => 'block',
  'delta' => 57,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -10,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/faq-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 161,
  'module' => 'block',
  'delta' => 58,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/faq-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 162,
  'module' => 'block',
  'delta' => 59,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -51,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/pricing-1
gallery*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 164,
  'module' => 'block',
  'delta' => 61,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -6,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/header-white-transparent
content/header-white
content/header-dark-transparent
content/contact-1
content/contact-2
portfolio-parallax
content/landing-page
content/main-demo
node/7/*
content/all-demos
node/119
node/119*
content/about-us-1
content/services-1
content/services-2
content/services-3
content/team-1
content/faq-1
content/faq-2
content/pricing-1
gallery*
portfolio-promo
portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 165,
  'module' => 'block',
  'delta' => 62,
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -4,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 166,
  'module' => 'views',
  'delta' => 'related_projects-block',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 167,
  'module' => 'rhythm_cms',
  'delta' => 'project_next_prev',
  'theme' => 'rhythm_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 168,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 169,
  'module' => 'tb_megamenu',
  'delta' => 'features',
  'theme' => 'rhythm_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 170,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-dark-transparent',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 171,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-4-columns
blog-masonry-3-columns
blog-masonry-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 172,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 173,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -52,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/pricing-1
content/pricing-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 174,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -51,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-boxed*
portfolio-titles*
portfolio-masonry*
portfolio-parallax*
portfolio-promo*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 175,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/contact-1
node/119
node/119*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 176,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/contact-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 177,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -29,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/contact-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 178,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/landing-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 179,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -48,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/main-demo',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 180,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -47,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/1/yellow',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 181,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-white-transparent',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 182,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -46,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 183,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -45,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 184,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -44,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/4/red',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 185,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -42,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 186,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -41,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 187,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -43,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 188,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/8/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 189,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/9/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 190,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -36,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 191,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -37,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/10/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 192,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -56,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/header-white
content/contact-2
content/services-3
content/faq-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 193,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -35,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/14',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 194,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -34,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/15',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 195,
  'module' => 'block',
  'delta' => 32,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -33,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/16',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 196,
  'module' => 'block',
  'delta' => 33,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -32,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/17',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 197,
  'module' => 'block',
  'delta' => 34,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -31,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/18',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 198,
  'module' => 'block',
  'delta' => 35,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -30,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/all-demos',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 199,
  'module' => 'block',
  'delta' => 36,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 200,
  'module' => 'block',
  'delta' => 37,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/1/yellow',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 201,
  'module' => 'block',
  'delta' => 38,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 202,
  'module' => 'block',
  'delta' => 39,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 203,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -52,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-parallax
portfolio-promo',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 204,
  'module' => 'block',
  'delta' => 40,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/4/red',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 205,
  'module' => 'block',
  'delta' => 41,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -17,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 206,
  'module' => 'block',
  'delta' => 42,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 207,
  'module' => 'block',
  'delta' => 43,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -11,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 208,
  'module' => 'block',
  'delta' => 44,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -15,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/8/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 209,
  'module' => 'block',
  'delta' => 45,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -12,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/9/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 210,
  'module' => 'block',
  'delta' => 46,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -14,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/10/cyan',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 211,
  'module' => 'block',
  'delta' => 47,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -16,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 212,
  'module' => 'block',
  'delta' => 48,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -10,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/14',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 213,
  'module' => 'block',
  'delta' => 49,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/15',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 214,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'content_full',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '4-columns-shop
product*
blog-3-columns
blog-4-columns
blog-masonry-3-columns
blog-masonry-4-columns
portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 215,
  'module' => 'block',
  'delta' => 50,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/16',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 216,
  'module' => 'block',
  'delta' => 51,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -24,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/17',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 217,
  'module' => 'block',
  'delta' => 52,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -9,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/18',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 218,
  'module' => 'block',
  'delta' => 53,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/about-us-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 219,
  'module' => 'block',
  'delta' => 54,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -7,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/services-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 220,
  'module' => 'block',
  'delta' => 55,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -6,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/services-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 221,
  'module' => 'block',
  'delta' => 56,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -5,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/team-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 222,
  'module' => 'block',
  'delta' => 57,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -8,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/faq-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 223,
  'module' => 'block',
  'delta' => 58,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/faq-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 224,
  'module' => 'block',
  'delta' => 59,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -51,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/pricing-1
gallery*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 225,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -44,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Text Widget',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 227,
  'module' => 'block',
  'delta' => 61,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -55,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/header-white-transparent
content/header-white
content/header-dark-transparent
content/contact-1
content/contact-2
portfolio-parallax
content/landing-page
content/main-demo
node/7/*
content/all-demos
node/119
node/119*
content/about-us-1
content/services-1
content/services-2
content/services-3
content/team-1
content/faq-1
content/faq-2
content/pricing-1
gallery*
portfolio-promo
portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 228,
  'module' => 'block',
  'delta' => 62,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -4,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio-item*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 229,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '4-columns-shop',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 230,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -3,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-masonry-3-columns
blog-masonry-4-columns
blog-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 231,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -2,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-3-columns
blog-masonry-3-columns
blog-masonry-4-columns
blog-4-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 232,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 233,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 234,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 235,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 236,
  'module' => 'locale',
  'delta' => 'language',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 237,
  'module' => 'md_slider',
  'delta' => 'mega-slider-1',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/12',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 238,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 239,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 240,
  'module' => 'menu',
  'delta' => 'menu-one-page',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 241,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 242,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 243,
  'module' => 'rhythm_cms',
  'delta' => 'breadcrumb',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 244,
  'module' => 'rhythm_cms',
  'delta' => 'menu',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/header-white',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 245,
  'module' => 'rhythm_cms',
  'delta' => 'page_title',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 246,
  'module' => 'rhythm_cms',
  'delta' => 'page_title_simple',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 247,
  'module' => 'rhythm_cms',
  'delta' => 'products_filter',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => 'Filter by Price',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 248,
  'module' => 'rhythm_cms',
  'delta' => 'project_next_prev',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 249,
  'module' => 'rhythm_cms',
  'delta' => 'search_1',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 250,
  'module' => 'rhythm_cms',
  'delta' => 'search_2',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 251,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 252,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -27,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 253,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 254,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 255,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 256,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 257,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 258,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 259,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 260,
  'module' => 'tb_megamenu',
  'delta' => 'features',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 261,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 262,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 263,
  'module' => 'tb_megamenu',
  'delta' => 'menu-one-page',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 264,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 265,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 266,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 267,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 268,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 269,
  'module' => 'views',
  'delta' => '-exp-shop_2_columns-page',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 270,
  'module' => 'views',
  'delta' => 'archive-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -43,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Archive',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 271,
  'module' => 'views',
  'delta' => 'blog_grid-block_1',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 272,
  'module' => 'views',
  'delta' => 'last_posts-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -47,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 273,
  'module' => 'views',
  'delta' => 'portfolio_boxed-block_1',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 274,
  'module' => 'views',
  'delta' => 'portfolio_promo-block',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 275,
  'module' => 'views',
  'delta' => 'products_best_sellers-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 276,
  'module' => 'views',
  'delta' => 'products_comments-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -46,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => 'Comments',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 277,
  'module' => 'views',
  'delta' => 'products_comments-block_1',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -45,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 278,
  'module' => 'views',
  'delta' => 'products_tags-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -48,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*
blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Tags',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 279,
  'module' => 'views',
  'delta' => 'related_products-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 280,
  'module' => 'views',
  'delta' => 'related_projects-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 281,
  'module' => 'views',
  'delta' => 'shop_2_columns-block_1',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 282,
  'module' => 'views',
  'delta' => 'shop_categories-block',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -51,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 283,
  'module' => 'views',
  'delta' => 'shop_categories-block_1',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-item/new-web-design-trends-2015-year
blog-item/minimalistic-design-forever
blog-sidebar-left
blog-sidebar-right
blog-2-columns
blog-masonry-2-columns',
  'title' => 'Blog Taxonomies',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 284,
  'module' => 'views',
  'delta' => 'team-block',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 285,
  'module' => 'views',
  'delta' => 'team-block_1',
  'theme' => 'stig_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 286,
  'module' => 'stig_cms',
  'delta' => 'menu',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 287,
  'module' => 'stig_cms',
  'delta' => 'products_filter',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -52,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 288,
  'module' => 'stig_cms',
  'delta' => 'project_next_prev',
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 289,
  'module' => 'block',
  'delta' => 63,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/71',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 290,
  'module' => 'block',
  'delta' => 64,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/19',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 291,
  'module' => 'block',
  'delta' => 65,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -1,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/7/20',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 292,
  'module' => 'block',
  'delta' => 66,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => -13,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/71',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 293,
  'module' => 'block',
  'delta' => 67,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/19',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 294,
  'module' => 'block',
  'delta' => 68,
  'theme' => 'stig_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/119/20',
  'title' => '',
  'cache' => -1,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '[nd_menu menu="main-menu" type="dark" transparent="1" different_values="0" search="1" cart="1" language="1" stick_fixed="1"]
[/nd_menu]
[nd_header fid="105" type="bg-dark-alfa-30" breadcrumbs="1" description="LOREM IPSUM DOLOR SIT AMET CONSECTETUR" different_values="0" size="home-section parallax-2 fixed-height-small" scroll="0"]
[/nd_header]
 ',
  'info' => 'Header Dark Transparent',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="1" different_values="0" fid="3" search="1" cart="1" language="1" stick_fixed="1"]
[/nd_menu]
[nd_header fid="106" type="bg-light-alfa-90" breadcrumbs="1" description="LOREM IPSUM DOLOR SIT AMET CONSECTETUR" different_values="0" size="home-section parallax-2 fixed-height-small" scroll="0"]
[/nd_header]
 ',
  'info' => 'Header White Transparent',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '[nd_menu menu="main-menu" fid="117" type="white" transparent="0" different_values="0" search="1" cart="1" language="1"]
[/nd_menu]
[nd_header type="bg-dark-alfa-30" breadcrumbs="1" description="WE PROVIDE THE BEST DIGITAL SOLUTIONS" different_values="0" size="small-section" fid="105" scroll="1"]
[/nd_header]
 ',
  'info' => 'Header White',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" different_values="0" search="1" cart="1" language="1" fid="117"]
[/nd_menu]
[nd_header type="bg-dark-alfa-30" breadcrumbs="1" description="LOREM IPSUM DOLOR SIT AMET CONSECTETUR" different_values="0" size="small-section" fid="78" scroll="0" style_margin_bottom="-1"]
[/nd_header]
 ',
  'info' => 'Header: Dark Color BG',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '[html format="nd_ckeditor" p_classes="text" different_values="0"]<hr class="full-width mb-140 mt-120">[/html]
 ',
  'info' => 'Separator hr',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '[html format="nd_ckeditor" different_values="0" extra_classes="widget-body widget-text clearfix"]<p><img alt="" class="img-circle left img-left" src="http://local.rhythm.nikadevs.com/sites/rhythm.nikadevs.com/files/user-avatar.png" style="height: 70px; width: 70px; margin: 0px 10px 10px 0px;">Consectetur adipiscing elit. Quisque magna ante eleifend eleifend. Purus ut dignissim consectetur, nulla erat ultrices purus, ut consequat sem elit non sem. Quisque magna ante eleifend eleifend.</p>[/html]
 ',
  'info' => 'Text Widget',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '[row different_values="0"]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/commerce_cart/cart/configure" different_values="0"]
[/nd_block]
[/col]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/views/products_tags-block/configure" different_values="0"]
[/nd_block]
[nd_block admin_url="admin/structure/block/manage/block/6/configure" different_values="0"]
[/nd_block]
[/col]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/views/shop_categories-block/configure" different_values="0"]
[/nd_block]
[nd_block admin_url="admin/structure/block/manage/stig_cms/products_filter/configure" different_values="0"]
[/nd_block]
[/col]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/views/products_best_sellers-block/configure" different_values="0"]
[/nd_block]
[/col]
[/row]
 ',
  'info' => 'Shop 4 Columns',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '[nd_container different_values="0" style_margin_top="70" style_margin_bottom="-30"]
[nd_block admin_url="admin/structure/block/manage/search/form/configure" different_values="0"]
[/nd_block]
[/nd_container]
 ',
  'info' => 'Search Box',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '[nd_hr style_margin_top="40" style_margin_bottom="-40" different_values="0"]
[/nd_hr]
 ',
  'info' => 'Hr Separator',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '[row different_values="0"]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/views/shop_categories-block_1/configure" different_values="0"]
[/nd_block]
[/col]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/views/products_tags-block/configure" different_values="0"]
[/nd_block]
[/col]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/views/archive-block/configure" different_values="0"]
[/nd_block]
[/col]
[col tablet="6" desktop="3" wide="3" different_values="0"]
[nd_block admin_url="admin/structure/block/manage/block/6/configure" different_values="0"]
[/nd_block]
[/col]
[/row]
 ',
  'info' => 'Blog 3 Columns',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '[nd_bg color="bg-dark" slider="0" banner="0" different_values="0" style_padding_bottom="60" style_padding_top="70" full_height="0" scroll_icon="0"]
[nd_container text_align="center" different_values="0"]
[nd_icon icon="fa fa-facebook" boxed="0" different_values="0" link="https://www.facebook.com/nikadevs" type="Bordered"]
[/nd_icon]
[nd_icon icon="fa fa-twitter" boxed="0" different_values="0" link="https://www.twitter.com/nikadevs" type="Bordered"]
[/nd_icon]
[nd_icon icon="fa fa-behance" boxed="0" different_values="0" link="https://www.twitter.com/nikadevs" type="Bordered"]
[/nd_icon]
[nd_icon icon="fa fa-linkedin" boxed="0" different_values="0" link="https://www.twitter.com/nikadevs" type="Bordered"]
[/nd_icon]
[nd_icon icon="fa fa-pinterest" boxed="0" different_values="0" link="https://www.twitter.com/nikadevs" type="Bordered"]
[/nd_icon]
[html format="nd_ckeditor" different_values="0" style_padding_top="60"]<div class="footer-text footer">	<!-- Copyright -->	<div class="footer-copy font-alt">		<a href="http://themeforest.net/user/NikaDevs/portfolio" target="_blank">© Stig 2015</a>.</div>	<!-- End Copyright -->	<div class="footer-made">		Made with love for great people.</div></div>[/html]
[/nd_container]
[/nd_bg]
 ',
  'info' => 'Footer',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 12,
  'body' => '[nd_bg extra_classes="banner-section" style_padding_bottom="0" style_padding_top="0" different_values="0" scroll_icon="0" full_height="0" banner="0" slider="0" scroll="1" fid="106" color="bg-dark-alfa-90"]
[nd_container different_values="0"]
[row different_values="0"]
[col different_values="0" style_padding_right="15" style_padding_left="15" phone="6"]
[nd_div different_values="0" style_margin_bottom="140" style_margin_top="140" vertical_align="0"]
[nd_title different_values="0" style_margin_bottom="20" underline="0" uppercase="0" colored="0" size="h3_24" title="Looking for exclusive digital services?" alignment=" align-left" color=" "]
[/nd_title]
[html different_values="0" format="nd_ckeditor" p_classes="banner-decription"]<p>Proin fringilla augue at maximus vestibulum. Nam pulvinar vitae neque et porttitor. Integer non dapibus diam, ac eleifend lectus.</p>[/html]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="pages-contact-1.html" text="Lets talk" size="medium" block="0"]
[/nd_button]
[/nd_div]
[/col]
[col phone="6" style_margin_top="-40" text_align="left" animation="fadeInUp" different_values="0"]
[nd_image fid="56" different_values="0"]
[/nd_image]
[/col]
[/row]
[/nd_container]
[/nd_bg]
 ',
  'info' => 'Looking for exclusive',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '[nd_bg scroll="1" scroll_icon="0" full_height="0" different_values="0" slider="0" color="bg-light-alfa-90" fid="106" banner="0"]
[nd_container different_values="0"]
[row different_values="0"]
[col different_values="0" style_margin_left="195" style_padding_right="15" style_padding_left="15" tablet="8"]
[nd_title different_values="0" style_margin_bottom="5" underline="0" weight="fw-300" color="black" uppercase="0" colored="0" alignment=" align-center" size="h4" title="Looking for exclusive services?"]
[/nd_title]
[nd_title different_values="0" style_margin_bottom="28" underline="0" weight="fw-600" color="black" uppercase="1" colored="0" alignment=" align-center" size="h1" title="Just say hi and we start"]
[/nd_title]
[html format="nd_ckeditor" style_margin_bottom="50" different_values="0" p_classes="section-text"]<p class="rtecenter"><span><span style="font-size: 18px;">Proin fringilla augue at&nbsp;maximus vestibulum. Nam pulvinar vitae neque et&nbsp;porttitor. Integer dapibus diam, ac&nbsp;eleifend sodales ipsum sollicitudin, vehicula ipsum varius.</span></span></p>[/html]
[nd_div text_align="center" different_values="0" extra_classes="local-scroll" vertical_align="0"]
[nd_button link="#portfolio" different_values="0" colored_text="0" colored="0" invert="0" text="Say Hello" size="large" block="0"]
[/nd_button]
[nd_button link="http://themeforest.net/user/theme-guru/portfolio" different_values="0" colored_text="0" colored="1" invert="0" text="Buy Now" size="large" block="0" button_type="glass"]
[/nd_button]
[/nd_div]
[/col]
[/row]
[/nd_container]
[/nd_bg]
 ',
  'info' => 'Want to work with us?',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => '[nd_gmap type="roadmap" overlay="1" address="Belt Parkway, Queens, NY, United States" different_values="0"]
[/nd_gmap]
[nd_container different_values="0" style_margin_top="140" style_padding_bottom="120"]
[row different_values="0"]
[col style_margin_left="195" desktop="8" text_align="center" different_values="0"]
[nd_title title="Want to talk?" size="h1" alignment=" align-center" colored="0" uppercase="0" color="black" weight="fw-300" underline="0" style_margin_bottom="5" different_values="0" extra_classes="section-title"]
[/nd_title]
[nd_title title="Just Say Hello" size="h2" alignment=" align-center" colored="0" uppercase="0" color="black" weight="fw-300" underline="0" style_margin_bottom="40" different_values="0" extra_classes="section-heading"]
[/nd_title]
[/col]
[col desktop="10" different_values="0" style_margin_left="97"]
[nd_node different_values="0" admin_url="node/106/edit"]
[/nd_node]
[/col]
[/row]
[/nd_container]
 ',
  'info' => 'Gmap: Contact',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="57" size="page-section" type="bg-dark-alfa-90" breadcrumbs="1" description="WE\'RE ALWAYS OPEN TO TALK TO GOOD PEOPLE" different_values="0" scroll="0"]
[/nd_header]
 ',
  'info' => 'Contact Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '[nd_gmap type="roadmap" overlay="0" address="Belt Parkway, Queens, NY, United States" different_values="0"]
[/nd_gmap]
 ',
  'info' => 'Gmap: Contact Top',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="77" size="page-section" type="bg-dark-alfa-90" breadcrumbs="1" description="LOREM IPSUM DOLOR SIT AMET, CONSECTETUR ADIPISCING" different_values="0" scroll="0" style_margin_bottom="-140"]
[/nd_header]
 ',
  'info' => 'Header Landing',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '[nd_menu type="dark" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" stick_fixed="1" fid="126"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="78" different_values="0" banner="1" slider="0" color="bg-dark" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color="hs-line-10" different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Main Demo',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 19,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" fid="117" stick_fixed="1"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="79" different_values="0" banner="1" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color="hs-line-10 highlight"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 1',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 20,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="3" stick_fixed="1"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="2" full_height="1" scroll_icon="1" scroll="0" style_margin_bottom="-140"]
[nd_div vertical_align="1" different_values="0" text_align="center"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" alignment=" align-center" styled="1" uppercase="0" color=" " different_values="0" colored="0" underline="0" bg_color="hs-line-10 highlight"]
[/nd_title]
[nd_title title="THE BEST DIGITAL EXPERIENCE" size="h2_64" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" style_margin_top="-10" style_margin_bottom="-20" colored="0" underline="0" bg_color=" "]
[/nd_title]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="10" desktop="6" extra_classes="col-md-offset-3" different_values="0"]
[row different_values="0"]
[col tablet="4" different_values="0"]
[nd_feature text="Modern design" icon="fa fa-diamond" type="round_background" colored="0" different_values="0"]
[/nd_feature]
[/col]
[col tablet="4" different_values="0"]
[nd_feature text="Responsive" icon="fa fa-heartbeat" type="round_background" colored="0" different_values="0"]
[/nd_feature]
[/col]
[col tablet="4" different_values="0"]
[nd_feature text="Easy to use" icon="fa fa-magic" type="round_background" colored="0" different_values="0"]
[/nd_feature]
[/col]
[/row]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 2',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="3" stick_fixed="1"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="124" full_height="1" scroll_icon="1" scroll="0" style_margin_bottom="-140"]
[nd_div vertical_align="1" different_values="0"]
[nd_container different_values="0" text_align="left"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" alignment=" align-left" styled="1" uppercase="0" color="white" different_values="0" colored="0" underline="0" bg_color=" "]
[/nd_title]
[nd_title title="|{b|}The best|{/b|} digital experience" size="h3_64" alignment=" align-left" styled="1" uppercase="0" different_values="0" color="white" colored="0" underline="0" bg_color=" " style_margin_top="-15" style_margin_bottom="40"]
[/nd_title]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 3',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 22,
  'body' => '[nd_menu type="dark" different_values="0" language="1" cart="1" search="1" transparent="1" menu="main-menu" fid="125" stick_fixed="1"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="15" different_values="0" banner="1" slider="0" color="bg-color-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_styled" title="The Stig |{b|}Creative Agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_96" title="The best experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 4',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 23,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" stick_fixed="0" fid="117"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="0" fid="82" different_values="0" banner="1" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_styled" title="The Stig |{b|}Creative Agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="20" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Fullwidth Image',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 24,
  'body' => '[nd_menu type="dark" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" stick_fixed="1" fid="126"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="2" different_values="0" banner="1" slider="0" color="bg-light-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color="white" underline="0" bg_color="hs-line-10" different_values="0" style_margin_bottom="15"]
[/nd_title]
[nd_title different_values="0" color="black" uppercase="1" styled="0" alignment=" align-center" size="h2_64" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="THE BEST DIGITAL EXPERIENCE" text_line_2="BEST IDEAS FOR YOUR PROJECT" text_line_3="ALL DIGITAL MAGIC IN ONE CUP" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3" button_type="gray"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Text Rotator',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 25,
  'body' => '[nd_menu menu="main-menu" type="dark" transparent="1" search="1" cart="1" language="1" different_values="0"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="1" full_height="1" scroll_icon="1"]
[nd_div vertical_align="1" different_values="0" text_align="center"]
[nd_container different_values="0"]
[nd_title title="UNIQUE EXPERIENCE WITH" size="h4_styled" alignment=" align-center" styled="1" uppercase="0" color="white" different_values="0"]
[/nd_title]
[nd_title title="RHYTHM CREATIVE STUDIO" size="h2_42" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" style_margin_top="50" style_margin_bottom="50"]
[/nd_title]
[nd_button button_type="border" block="0" display="round" size="medium" text="SEE MORE" invert="1" style_margin_right="8" different_values="0"]
[/nd_button]
[nd_button button_type="border" block="0" display="round" size="medium" text="PLAY REEL" invert="1" different_values="0"]
[/nd_button]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 5',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 26,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="128" stick_fixed="1"]
[/nd_menu]
[nd_slider slide_anim="fullwidth" different_values="0" style_margin_bottom="-140"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="107" full_height="1" scroll_icon="0" scroll="0"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color="hs-line-10 highlight" different_values="0" style_margin_bottom="10"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="106" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="129" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Fullscreen',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 27,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="128" stick_fixed="1"]
[/nd_menu]
[nd_slider slide_anim="fullwidth-zoom" different_values="0" style_margin_bottom="-140"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="106" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="107" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color="hs-line-10 highlight" different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="129" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Zoom Effect',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 28,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" stick_fixed="1" fid="117"]
[/nd_menu]
[nd_slider slide_anim="fullwidth-bg" different_values="0" pagination="pagination-white" style_margin_bottom="-140"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="82" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="83" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="123" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Background',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 29,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="128" stick_fixed="1"]
[/nd_menu]
[nd_slider different_values="0" style_margin_bottom="-140" slide_anim="fullwidth" pagination="pagination-white"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-color-alfa-90" slider="0" banner="0" different_values="0" fid="15" full_height="0" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0" style_padding_top="50" style_margin_bottom="20"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0" style_padding_bottom="50"]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-50" slider="0" banner="0" different_values="0" fid="79" full_height="0" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="124" full_height="0" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Fullwidth',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 30,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="128" stick_fixed="1"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-50" slider="0" banner="1" different_values="0" fid="124" full_height="1" scroll_icon="1" scroll="0" style_margin_bottom="-140"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="1" different_values="0" fid="124" full_height="1" scroll_icon="0" scroll="0"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" " title="Design Studio"]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_bg]
 ',
  'info' => 'Header: With Play Button',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 31,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" stick_fixed="1" fid="117"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" full_height="0" scroll_icon="0" video="http://youtu.be/BLL-kW_TpT4" fid="130" scroll="1" style_margin_bottom="-140"]
[nd_div vertical_align="1" different_values="0" text_align="center"]
[nd_container different_values="0"]
[nd_title title="The Stig |{b|}Creative agency|{/b|}" size="h2_styled" alignment=" align-center" styled="1" uppercase="0" color="white" different_values="0" colored="0" underline="0" bg_color=" " style_margin_bottom="20" style_padding_top="140"]
[/nd_title]
[nd_title title="THE BEST DIGITAL EXPERIENCE" size="h2_64" alignment=" align-center" styled="1" uppercase="0" different_values="0" color="white" style_margin_top="0" style_margin_bottom="50" colored="0" underline="0" bg_color=" " style_padding_bottom="40"]
[/nd_title]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: BG Video Fullwidth',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 32,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" fid="117" stick_fixed="1"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="131" different_values="0" banner="0" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140" video="http://youtu.be/m2CTPxq0d2o"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: BG Video FullScreen 1',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 33,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" fid="117" stick_fixed="1"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="131" different_values="0" banner="0" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140" video="http://youtu.be/m2CTPxq0d2o"]
[nd_div different_values="0" vertical_align="1"]
[nd_container different_values="0"]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h2_styled" title="The Stig |{b|}Creative Agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="THE BEST EXPERIENCE WITH STIG STUDIO" text_line_2="WE HAVE MAGIC SKILLS IN WEB DESIGN" text_line_3="WE LOVE SMART DESIGN OF GREAT WEBSITES" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: BG Video FullScreen 2',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 34,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" fid="117" stick_fixed="0"]
[/nd_menu]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="black" uppercase="0" styled="0" alignment=" align-center" size="h2_styled" title="The Stig |{b|}Creative agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" " style_padding_top="120"]
[/nd_title]
[nd_title different_values="0" color="black" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Header: Agency Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 35,
  'body' => '[nd_menu type="dark" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" stick_fixed="1" fid="126"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="0" fid="106" different_values="0" banner="0" slider="0" color="bg-light-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<h1 class="hs-line-3 mt-0 mb-30 mb-xs-10"> Stig - multipurpose one / multi page template </h1><h2 class="hs-line-2 mb-40 mb-xs-20"> Choose Your Demo </h2>[/html]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="content/main-demo" text="Multi Page" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="content/one-page" text="One Page" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: All Demos',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 36,
  'body' => '[nd_menu type="dark" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" stick_fixed="1" fid="126" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="78" different_values="0" banner="1" slider="0" color="bg-dark" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color="hs-line-10" different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Main Demo OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 37,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" fid="117" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="79" different_values="0" banner="1" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color="hs-line-10 highlight"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 1 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 38,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" fid="3" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="2" full_height="1" scroll_icon="1" scroll="0"]
[nd_div vertical_align="1" different_values="0" text_align="center"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" alignment=" align-center" styled="1" uppercase="0" color=" " different_values="0" colored="0" underline="0" bg_color="hs-line-10 highlight"]
[/nd_title]
[nd_title title="THE BEST DIGITAL EXPERIENCE" size="h2_64" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" style_margin_top="-10" style_margin_bottom="-20" colored="0" underline="0" bg_color=" "]
[/nd_title]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="10" desktop="6" extra_classes="col-md-offset-3" different_values="0"]
[row different_values="0"]
[col tablet="4" different_values="0"]
[nd_feature text="Modern design" icon="fa fa-diamond" type="round_background" colored="0" different_values="0"]
[/nd_feature]
[/col]
[col tablet="4" different_values="0"]
[nd_feature text="Responsive" icon="fa fa-heartbeat" type="round_background" colored="0" different_values="0"]
[/nd_feature]
[/col]
[col tablet="4" different_values="0"]
[nd_feature text="Easy to use" icon="fa fa-magic" type="round_background" colored="0" different_values="0"]
[/nd_feature]
[/col]
[/row]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 2 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 39,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" fid="3" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="124" full_height="1" scroll_icon="1" scroll="0"]
[nd_div vertical_align="1" different_values="0"]
[nd_container different_values="0" text_align="left"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" alignment=" align-left" styled="1" uppercase="0" color="white" different_values="0" colored="0" underline="0" bg_color=" "]
[/nd_title]
[nd_title title="|{b|}The best|{/b|} digital experience" size="h3_64" alignment=" align-left" styled="1" uppercase="0" different_values="0" color="white" colored="0" underline="0" bg_color=" " style_margin_top="-15" style_margin_bottom="40"]
[/nd_title]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 3 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 40,
  'body' => '[nd_menu type="dark" different_values="0" language="0" cart="0" search="0" transparent="1" menu="menu-one-page" fid="125" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="15" different_values="0" banner="1" slider="0" color="bg-color-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_styled" title="The Stig |{b|}Creative Agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_96" title="The best experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 4 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 41,
  'body' => '[nd_menu menu="menu-one-page" type="dark" transparent="1" search="0" cart="0" language="0" different_values="0" id="home"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="1" full_height="1" scroll_icon="1"]
[nd_div vertical_align="1" different_values="0" text_align="center"]
[nd_container different_values="0"]
[nd_title title="UNIQUE EXPERIENCE WITH" size="h4_styled" alignment=" align-center" styled="1" uppercase="0" color="white" different_values="0"]
[/nd_title]
[nd_title title="RHYTHM CREATIVE STUDIO" size="h2_42" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" style_margin_top="50" style_margin_bottom="50"]
[/nd_title]
[nd_button button_type="border" block="0" display="round" size="medium" text="SEE MORE" invert="1" style_margin_right="8" different_values="0"]
[/nd_button]
[nd_button button_type="border" block="0" display="round" size="medium" text="PLAY REEL" invert="1" different_values="0"]
[/nd_button]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Image Parallax 5 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 42,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" stick_fixed="0" fid="117" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="0" fid="82" different_values="0" banner="1" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="The Stig |{b|}Creative Agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Fullwidth Image OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 43,
  'body' => '[nd_menu type="dark" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" stick_fixed="1" fid="126" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="2" different_values="0" banner="1" slider="0" color="bg-light-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color="white" underline="0" bg_color="hs-line-10" different_values="0" style_margin_bottom="15"]
[/nd_title]
[nd_title different_values="0" color="black" uppercase="1" styled="0" alignment=" align-center" size="h2_64" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="THE BEST DIGITAL EXPERIENCE" text_line_2="BEST IDEAS FOR YOUR PROJECT" text_line_3="ALL DIGITAL MAGIC IN ONE CUP" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3" button_type="gray"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Text Rotator OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 44,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" fid="128" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_slider slide_anim="fullwidth" different_values="0" style_margin_bottom="-140"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="107" full_height="1" scroll_icon="0" scroll="0"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color="hs-line-10 highlight" different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="106" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="129" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Fullscreen OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 45,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" fid="128" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_slider slide_anim="fullwidth-zoom" different_values="0" style_margin_bottom="-140"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="106" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="107" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color="hs-line-10 highlight" different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="129" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Zoom Effect OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 46,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" fid="128" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_slider different_values="0" style_margin_bottom="-140" slide_anim="fullwidth" pagination="pagination-white"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-color-alfa-90" slider="0" banner="0" different_values="0" fid="15" full_height="0" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="1" colored="0" invert="1" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-50" slider="0" banner="0" different_values="0" fid="79" full_height="0" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-90" slider="0" banner="0" different_values="0" fid="124" full_height="0" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h3_64" title="|{b|}The best|{/b|} digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Fullwidth OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 47,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" stick_fixed="1" fid="117" id="Home"]
[/nd_menu]
[nd_slider slide_anim="fullwidth-bg" different_values="0"]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="82" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="83" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" fid="123" full_height="1" scroll_icon="0" scroll="1"]
[nd_div different_values="0" vertical_align="1"]
[nd_title title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" size="h1_30" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
 ',
  'info' => 'Header: Slider Background OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 48,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" fid="128" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-50" slider="0" banner="1" different_values="0" fid="124" full_height="1" scroll_icon="1" scroll="0"]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="1" different_values="0" fid="124" full_height="1" scroll_icon="0" scroll="0"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" " title="Design Studio"]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
[/nd_bg]
 ',
  'info' => 'Header: With Play Button OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 49,
  'body' => '[nd_menu menu="menu-one-page" type="white" transparent="0" search="0" cart="0" language="0" different_values="0" stick_fixed="1" fid="117" id="Home"]
[/nd_menu]
[nd_bg color="bg-dark-alfa-30" slider="0" banner="0" different_values="0" full_height="0" scroll_icon="0" video="http://youtu.be/BLL-kW_TpT4" fid="130" scroll="1" style_margin_bottom="-140"]
[nd_div vertical_align="1" different_values="0" text_align="center"]
[nd_container different_values="0"]
[nd_title title="The Stig |{b|}Creative agency|{/b|}" size="h2_styled" alignment=" align-center" styled="1" uppercase="0" color="white" different_values="0" colored="0" underline="0" bg_color=" " style_margin_bottom="20"]
[/nd_title]
[nd_title title="THE BEST DIGITAL EXPERIENCE" size="h2_64" alignment=" align-center" styled="1" uppercase="0" different_values="0" color="white" style_margin_top="0" style_margin_bottom="50" colored="0" underline="0" bg_color=" "]
[/nd_title]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: BG Video Fullwidth OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 50,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" fid="117" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="131" different_values="0" banner="0" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140" video="http://youtu.be/m2CTPxq0d2o"]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40"]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="1" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: BG Video FullScreen 1 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 51,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" fid="117" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="131" different_values="0" banner="0" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140" video="http://youtu.be/m2CTPxq0d2o"]
[nd_div different_values="0" vertical_align="1"]
[nd_container different_values="0"]
[nd_title different_values="0" color=" " uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="THE BEST EXPERIENCE WITH STIG STUDIO" text_line_2="WE HAVE MAGIC SKILLS IN WEB DESIGN" text_line_3="WE LOVE SMART DESIGN OF GREAT WEBSITES" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[/nd_container]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: BG Video FullScreen 2 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 52,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" fid="117" stick_fixed="0" id="Home"]
[/nd_menu]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="black" uppercase="0" styled="0" alignment=" align-center" size="h2_styled" title="The Stig |{b|}Creative agency|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" " style_padding_top="120"]
[/nd_title]
[nd_title different_values="0" color="black" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Header: Agency Header OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 53,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="78" size="page-section" type="bg-dark-alfa-50" breadcrumbs="1" different_values="0" scroll="0"]
[/nd_header]
 ',
  'info' => 'Header: About Us',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 54,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="78" size="page-section" type="bg-dark-alfa-30" breadcrumbs="1" different_values="0" description="WE PROVIDE THE BEST DIGITAL SOLUTIONS" title="services" scroll="0"]
[/nd_header]
 ',
  'info' => 'Header: Services 1',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 55,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="105" size="page-section" type="bg-dark-alfa-30" breadcrumbs="1" different_values="0" description="WE PROVIDE THE BEST DIGITAL SOLUTIONS" title="services" scroll="0"]
[/nd_header]
 ',
  'info' => 'Header: Services 2',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 56,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="81" size="page-section" type="bg-dark-alfa-30" breadcrumbs="1" different_values="0" description="EXTRAORDINARY ART TEAM &amp; CREATIVE MINIMALISM LOVERS" scroll="0" height="365"]
[/nd_header]
 ',
  'info' => 'Header: Team 1',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 57,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" search="1" cart="1" language="1" different_values="0" fid="117"]
[/nd_menu]
[nd_header fid="79" size="page-section" type="bg-dark-alfa-30" breadcrumbs="1" different_values="0" description="FREQUENTLY ASKED QUESTIONS" title="FAQ" scroll="0"]
[/nd_header]
 ',
  'info' => 'Header: Faq 1 ',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 58,
  'body' => '[nd_bg color="bg-dark-lighter" slider="0" banner="0" different_values="0" text_align="center" style_padding_top="60" style_padding_bottom="60" full_height="0" scroll_icon="0"]
[nd_title title="DID NOT FIND THE RIGHT ANSWER?" size="h4" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" spacing="ls-03"]
[/nd_title]
[nd_button button_type="gray" block="0" display="round" size="medium" text="contact us" link="http://rhythm.nikadevs.com" invert="0" different_values="0"]
[/nd_button]
[/nd_bg]
 ',
  'info' => 'Did not find the right answer?',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 59,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" different_values="0" search="1" cart="1" language="1" fid="117"]
[/nd_menu]
[nd_header type="bg-dark-alfa-90" breadcrumbs="1" description="LOREM IPSUM DOLOR SIT AMET CONSECTETUR" different_values="0" size="small-section" fid="106" scroll="1"]
[/nd_header]
 ',
  'info' => 'Header All White',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 61,
  'body' => '[nd_menu menu="main-menu" fid="3" type="white" transparent="0" search="1" cart="1" language="1" different_values="0"]
[/nd_menu]
[nd_header fid="55" size="small-section" type="bg-dark-alfa-90" breadcrumbs="1" description="EXTRAORDINARY ART TEAM &amp; CREATIVE MINIMALISM LOVERS" different_values="0" scroll="1" style_margin_bottom="-1"]
[/nd_header]
 ',
  'info' => 'Header: Main Black',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 62,
  'body' => '[nd_menu menu="main-menu" fid="3" type="white" transparent="0" search="1" cart="1" language="1" different_values="0"]
[/nd_menu]
[nd_header fid="106" size="page-section" type="bg-dark-alfa-90" breadcrumbs="1" description="LOREM IPSUM DOLOR SIT AMET, CONSECTETUR ADIPISCING ELIT" different_values="0" scroll="1"]
[/nd_header]
 ',
  'info' => 'Header: Single Portfolio',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 63,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" stick_fixed="1" fid="117"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="127" different_values="0" banner="1" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Text Rotator 2',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 64,
  'body' => '[nd_menu type="white" different_values="0" language="1" cart="1" search="1" transparent="0" menu="main-menu" fid="117" stick_fixed="1"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="106" different_values="0" banner="1" slider="0" color="bg-light-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div vertical_align="0" extra_classes="home-bot-image hidden-xs" different_values="0"]
[row different_values="0"]
[col tablet="8" desktop="6" extra_classes="col-sm-offset-2 col-md-offset-3" different_values="0"]
[nd_image fid="110" different_values="0" style_align="center"]
[/nd_image]
[/col]
[/row]
[/nd_div]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="15" bg_color="hs-line-10"]
[/nd_title]
[nd_title different_values="0" color="black" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Promo Light',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 65,
  'body' => '[nd_menu type="dark" different_values="0" language="1" cart="1" search="1" transparent="1" menu="main-menu" stick_fixed="1"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="106" different_values="0" banner="1" slider="0" color="bg-dark-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div vertical_align="0" extra_classes="home-bot-image hidden-xs" different_values="0"]
[row different_values="0"]
[col tablet="10" desktop="8" extra_classes="col-sm-offset-1 col-md-offset-2" different_values="0"]
[nd_image fid="112" different_values="0"]
[/nd_image]
[/col]
[/row]
[/nd_div]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="70" style_margin_bottom="15" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0" style_margin_bottom="140"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="#about" text="See More" size="large" block="0" style_margin_right="3" button_type="gray"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Promo Dark',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 66,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" stick_fixed="1" fid="117" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="1" full_height="1" fid="127" different_values="0" banner="1" slider="0" color="bg-dark-alfa-50" scroll="0" style_margin_bottom="-140"]
[nd_div different_values="0" vertical_align="1"]
[html format="html" p_classes="text" different_values="0"]<a href="http://vimeo.com/channels/staffpicks/116829150" class="big-icon-link lightbox-gallery-1 mfp-iframe"> <span class="big-icon"> <i class="fa fa-play"></i> </span></a>[/html]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h2_96" colored="0" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[nd_text_rotator text_line_1="Great Results" text_line_2="Design Studio" text_line_3="Creative People" op="Add new row" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="BRANDING / DESIGN / DEVELOPMENT / PHOTO" size="h4_16" colored="0" uppercase="0" color=" " underline="0" bg_color=" " different_values="0"]
[/nd_title]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Text Rotator 2 OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 67,
  'body' => '[nd_menu type="white" different_values="0" language="0" cart="0" search="0" transparent="0" menu="menu-one-page" fid="117" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="106" different_values="0" banner="1" slider="0" color="bg-light-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div vertical_align="0" extra_classes="home-bot-image hidden-xs" different_values="0"]
[row different_values="0"]
[col tablet="8" desktop="6" extra_classes="col-sm-offset-2 col-md-offset-3" different_values="0"]
[nd_image fid="110" different_values="0" style_align="center"]
[/nd_image]
[/col]
[/row]
[/nd_div]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="0" style_margin_bottom="15" bg_color="hs-line-10"]
[/nd_title]
[nd_title different_values="0" color="black" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="#about" text="See More" size="large" block="0" style_margin_right="3"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Promo Light OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 68,
  'body' => '[nd_menu type="dark" different_values="0" language="0" cart="0" search="0" transparent="1" menu="menu-one-page" stick_fixed="1" id="Home"]
[/nd_menu]
[nd_bg scroll_icon="0" full_height="1" fid="106" different_values="0" banner="1" slider="0" color="bg-dark-alfa-90" scroll="0" style_margin_bottom="-140"]
[nd_div vertical_align="0" extra_classes="home-bot-image hidden-xs" different_values="0"]
[row different_values="0"]
[col tablet="10" desktop="8" extra_classes="col-sm-offset-1 col-md-offset-2" different_values="0"]
[nd_image fid="112" different_values="0"]
[/nd_image]
[/col]
[/row]
[/nd_div]
[nd_div different_values="0" vertical_align="1"]
[nd_title different_values="0" color="white" uppercase="0" styled="0" alignment=" align-center" size="h1_30" title="THE STIG |{b|}CREATIVE AGENCY|{/b|}" colored="0" underline="0" style_margin_top="70" style_margin_bottom="15" bg_color=" "]
[/nd_title]
[nd_title different_values="0" color="white" uppercase="1" styled="0" alignment=" align-center" size="h2_64" title="The best digital experience" colored="0" weight="fw-600" underline="0" style_margin_top="0" style_margin_bottom="40" bg_color=" "]
[/nd_title]
[nd_div different_values="0" vertical_align="0" style_margin_bottom="140"]
[nd_button different_values="0" colored_text="0" colored="0" invert="0" link="#about" text="See More" size="large" block="0" style_margin_right="3" button_type="gray"]
[/nd_button]
[nd_button different_values="0" colored_text="0" colored="1" invert="0" link="http://themeforest.net/user/theme-guru/portfolio" text="Buy Now" size="large" block="0" style_margin_left="3"]
[/nd_button]
[/nd_div]
[/nd_div]
[/nd_bg]
 ',
  'info' => 'Header: Promo Dark OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_node_type'][] = array(
  'module' => 'rhythm_cms',
  'delta' => 'project_next_prev',
  'type' => 'nd_portfolio',
);
  $export['block_node_type'][] = array(
  'module' => 'stig_cms',
  'delta' => 'project_next_prev',
  'type' => 'nd_portfolio',
);
  $export['block_node_type'][] = array(
  'module' => 'views',
  'delta' => 'related_projects-block',
  'type' => 'nd_portfolio',
);
  $export['block_node_type'][] = array(
  'module' => 'views',
  'delta' => 'related_products-block',
  'type' => 'nd_product_display',
);
return $export;
}
