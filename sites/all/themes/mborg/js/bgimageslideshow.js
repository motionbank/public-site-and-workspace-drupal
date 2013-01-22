jQuery(function(){

  var max_bgImages = moba_background_imgs.length;
  
  if(max_bgImages > 1){

    var current_bgImage = 0;
    var bgImages = jQuery('#bgimages');
    var bgImage_front = jQuery('#bgimage-front');
    var bgImage_back = jQuery('#bgimage-back');

    bgImage_front.css('background-image', 'url(' + moba_background_imgs[current_bgImage] + ')');
    bgImage_back.css('background-image', 'url(' + moba_background_imgs[current_bgImage+1] + ')');
    
    
    
    function changebackground() {

      bgImage_front.fadeOut('slow',function(){
        
        if(current_bgImage < max_bgImages-1){
          bgImage_front.css('background-image', 'url(' + moba_background_imgs[current_bgImage+1] + ')');
          bgImage_front.show();
          bgImage_back.css('background-image', 'url(' + moba_background_imgs[current_bgImage+2] + ')');

          current_bgImage = current_bgImage+1;
        }
        else{
          current_bgImage = 0;
          
          bgImage_front.css('background-image', 'url(' + moba_background_imgs[current_bgImage] + ')');
          bgImage_front.show();
          bgImage_back.css('background-image', 'url(' + moba_background_imgs[current_bgImage+1] + ')');
          
          current_bgImage = current_bgImage+1;
        }
      });
   } 
   
   setInterval( changebackground, 1500 );
   changebackground();
  }
});
