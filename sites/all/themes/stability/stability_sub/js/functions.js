(function($){
  var owl = $(".owl-carousel.owl-slider-autoPlay");
    owl.owlCarousel({
        items: 1,
        autoPlay: true,
        autoPlaySpeed: 5000,
        autoPlayTimeout: 5000,
        autoPlayHoverPause: true
    });
})(jQuery);
