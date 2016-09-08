<!-- Navigation panel -->
<nav class="main-nav <?php print $color; ?> <?php print $stick_fixed; ?> <?php print $transparent ? 'transparent' : ''; ?>">
  <div class="full-wrapper relative clearfix">
    <!-- Logo ( * your text or image into link tag *) -->
    <div class="nav-logo-wrap local-scroll">
      <a href="<?php print url('<front>'); ?>" class="logo">
          <img src="<?php print $logo; ?>" alt="" />
      </a>
    </div>
    <div class="mobile-nav">
        <i class="fa fa-bars"></i>
    </div>
    
    <!-- Main Menu -->
    <div class="inner-nav desktop-nav">
      <ul class="clearlist">
        <?php if(module_exists('tb_megamenu')) {
            print theme('tb_megamenu', array('menu_name' => $menu));
          }
          else {
            $main_menu_tree = module_exists('i18n_menu') ? i18n_menu_translated_tree($menu) : menu_tree($menu);
            print drupal_render($main_menu_tree);
          }
        ?>
        <?php if(isset($search) && $search && module_exists('search') || isset($cart) && $cart && module_exists('commerce_cart') || $language && module_exists('locale') && drupal_multilingual()) : ?>
          <li><a style="height: 75px; line-height: 75px;">&nbsp;</a></li>
        <?php endif; ?>
        <?php if(isset($search) && $search && module_exists('search')): ?>
          <li>
            <a href="#" class="mn-has-sub" style="height: 75px; line-height: 75px;"><i class="fa fa-search"></i> <?php print t('Search'); ?></a>
            <ul class="mn-sub" style="display: none;">
              <li>
                <div class="mn-wrap">
                  <?php
                    if(module_exists('search')) {
                      $search_form_box = module_invoke('search', 'block_view');
                      print render($search_form_box);
                    }
                  ?>
                </div>
              </li>
            </ul>
          </li>
        <?php endif; ?>
        <?php if(isset($cart) && $cart && module_exists('commerce_cart')): ?>
          <li>
            <a href="<?php print url('cart'); ?>" style="height: 75px; line-height: 75px;"><i class="fa fa-shopping-cart"></i> <?php print t('Cart') . '(' . _stig_cart_count() . ')'; ?></a>
          </li>
        <?php endif; ?>
        <?php if($language && module_exists('locale') && drupal_multilingual()):
          global $language;
        ?>
          <li>
            <a href="#" style="height: 75px; line-height: 75px;" class = "mn-has-sub"><?php print $language->language; ?> <i class="fa fa-angle-down"></i></a>
              <?php
                $path = drupal_is_front_page() ? '<front>' : $_GET['q'];
                $links = language_negotiation_get_switch_links('language', $path);
                if(isset($links->links)) {
                  foreach($links->links as $i => $link) {
                    $links->links[$i]['attributes']['lang'] = $links->links[$i]['attributes']['xml:lang'];
                  }
                  $variables = array('links' => $links->links, 'attributes' => array('class' => array('mn-sub')));
                  print theme('links__locale_block', $variables);
                }
              ?>
          </li>
        <?php endif; ?>
      </ul>
    </div>
    <!-- End Main Menu -->
  </div>
</nav>