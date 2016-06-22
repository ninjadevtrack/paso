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

    // Color changer
    $(".color-red").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/red.css");
        return false;
    });

    $(".color-violet").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/violet.css");
        return false;
    });

    $(".color-blue").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/blue.css");
        return false;
    });
    
    $(".color-green").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/green.css");
        return false;
    });
    
    $(".color-orange").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/orange.css");
        return false;
    });

    $(".color-yellow").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/yellow.css");
        return false;
    });

    $(".color-asbestos").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/asbestos.css");
        return false;
    });

    $(".color-silver").click(function(e){
        e.preventDefault();
        $("link[href^='/sites/all/themes/stability/css/skins']").attr("href", "/sites/all/themes/stability/css/skins/silver.css");
        return false;
    });


    // Layout
    $(".layout-boxed").click(function(e){
        e.preventDefault();
        // jQuery('.tp-banner').revredraw();
        $('.style-switcher-layout li a').removeClass('active');
        $(this).addClass('active');
        $("body").removeClass("wide").addClass("boxed");
        return false;
    });

    $(".layout-wide").click(function(e){
        e.preventDefault();
        // jQuery('.tp-banner').revredraw();
        $('.style-switcher-layout li a').removeClass('active');
        $(this).addClass('active');
        $("body").removeClass("boxed").addClass("wide");
        return false;
    });

    // Patterns
    $('body').addClass('wide');
    $(".style-switcher-patterns li a").click(function(e){
        e.preventDefault();
        var pattern = $(this).attr('class');
        $("body").css({
            "background": "url(/sites/all/themes/stability/images/patterns/" + pattern + ".png)"
        });
        return false;
    });
    
});