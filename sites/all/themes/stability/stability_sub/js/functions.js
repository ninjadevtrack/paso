(function($){
  var owl = $(".owl-carousel.owl-slider-autoPlay");
    owl.owlCarousel({
        items: 1,
        autoPlay: true,
        autoPlaySpeed: 5000,
        autoPlayTimeout: 5000,
        autoPlayHoverPause: true
    });

  if($('body.node-type-blog .main #content > article.entry__video').length > 0 ) {
    $('body.node-type-blog .main #content > ul.links.inline').css('margin','0');
  }
})(jQuery);
