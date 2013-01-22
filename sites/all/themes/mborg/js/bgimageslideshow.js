jQuery(function(){

  var max_bgImages = moba_background_imgs.length;
  
  if ( max_bgImages > 1 ) {

    var current_bgImage = 0;
    var bgImages = jQuery('#bgimages');
    var bgImage_back = jQuery('#bgimage-back');
    var bgImage_front = jQuery('#bgimage-front');

    bgImage_front.css('background-image', 'url(' + moba_background_imgs[current_bgImage] + ')');

    var nextImage = current_bgImage + 1;
    nextImage %= max_bgImages;
    bgImage_back.css('background-image', 'url(' + moba_background_imgs[nextImage] + ')');
    
    function changebackground() {

      bgImage_front.fadeOut('slow',function(){
        
        var nextImage = current_bgImage + 1;
        nextImage %= max_bgImages;

        bgImage_front.css('background-image', 'url(' + moba_background_imgs[nextImage] + ')');
        bgImage_front.show();
        
        current_bgImage = nextImage;

        nextImage++;
        nextImage %= max_bgImages;
        bgImage_back.css('background-image', 'url(' + moba_background_imgs[nextImage] + ')');

      });
      setTimeout( changebackground, 1500 );
   }
   changebackground();
  }
});
