jQuery(function(){

  var max_bgimages = moba_background_imgs.length;
  var current_bgimage = 0;
  var bgImages = jQuery('#bgimages');

  function changebackground() {
    bgImages.css('background-image', 'url(' + moba_background_imgs[current_bgimage] + ')');

    if ( current_bgimage < max_bgimages-1 ) {
      current_bgimage = current_bgimage+1;
    } else {
      current_bgimage = 0;
    }
  }

  setInterval( changebackground, 5000 );
  changebackground();
});