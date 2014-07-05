jQuery(function(){
  
/* SLIDE OUT */
  jQuery("#block-block-5 h2").toggle(function(){
    jQuery("#block-block-5").animate({
      left: 0
    }, 400);
  }, function() {
    jQuery("#block-block-5").animate({
      left: -438
    }, 400);
  });
});