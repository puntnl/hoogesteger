jQuery(function($){

    $('#style-switcher h3 a').click(function(event){
        event.preventDefault();
        if($(this).hasClass('show')){
            $( "#style-switcher" ).animate({
              left: "-=200"
              }, 300, function() {
                // Animation complete.
              });
              $(this).removeClass('show').addClass('hidden1');
        }
        else {
            $( "#style-switcher" ).animate({
              left: "+=200"
              }, 300, function() {
                // Animation complete.
              });
              $(this).removeClass('hidden1').addClass('show');    
            }
    });

    $('#style-switcher h3 a').hover(
        function() {
            $(this).find('.fa').addClass('fa-spin');  
        },
        function() {
            $(this).find('.fa').removeClass('fa-spin');  
        }
    );

    $('.styles-switcher-colors a').click(function() {
      $('.styles-switcher-colors a.active').removeClass('active');
      $(this).addClass('active');
      $('.style-switcher').prev("link").attr("href", "/sites/all/themes/stig/css/colors/" + $(this).attr('data-color') + ".css");  
      return false;
    });

});