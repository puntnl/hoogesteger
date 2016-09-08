(function() {
  
  var $ = jQuery;

  $('[data-toggle="tooltip"]').tooltip();

  // Page loader
  $(".page-loader div").delay(0).fadeOut();
  $(".page-loader").delay(600).fadeOut("slow");

  Drupal.behaviors.menu_click = {
    attach: function (context, settings) {
       $('.local-scroll a', context).click(function() {
         $('.local-scroll a', context).removeClass('active');
         $(this).addClass('active');
       });
    }
  };


  Drupal.behaviors.href_click = {
    attach: function (context, settings) {
       $('a[href="#"]', context).click(function() {
        return false;
       });
    }
  };

  Drupal.behaviors.cart_remove_wrap = {
    attach: function (context, settings) {
      $('.cart-remove-wrap a', context).click(function() {
        $(this).parent().find('input').click();
        return false;
      });
    }
  };

  Drupal.behaviors.products_filter = {
    attach: function (context, settings) {
      if($('#block-stig-cms-products-filter').length > 0 && $('#edit-commerce-price-amount-wrapper').length > 0) {
        $('#edit-commerce-price-amount-wrapper').hide();
        $('.products-filter-from input').val($('#edit-commerce-price-amount-wrapper #edit-commerce-price-amount-min').val());
        $('.products-filter-to input').val($('#edit-commerce-price-amount-wrapper #edit-commerce-price-amount-max').val());
        $('#block-stig-cms-products-filter button').click(function() {
          $('#edit-commerce-price-amount-wrapper #edit-commerce-price-amount-min').val($('.products-filter-from input').val());
          $('#edit-commerce-price-amount-wrapper #edit-commerce-price-amount-max').val($('.products-filter-to input').val());
          $('#edit-commerce-price-amount-wrapper').closest('form').submit();
          return false;
        });
      }
    }
  };

  Drupal.behaviors.product_zoom = {
    attach: function (context, settings) {
        $(".lightbox-gallery-3", context).magnificPopup({
            gallery: {
                enabled: true
            }
        });
    }
  };
  
  Drupal.behaviors.tb_megamenu_align = {
    attach: function (context, settings) {
      $('.mega-align-right .mn-sub', context).addClass('to-left');
    }
  };

}());