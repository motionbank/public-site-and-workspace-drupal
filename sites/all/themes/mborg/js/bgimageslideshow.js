/*

	
*/

jQuery(function(){

var max_bgimages = moba_background_imgs.length;
  
  window.onload = function start() {
    changebackground();
  }
  
  function changebackground() {

      var current_bgimage = 0;
      window.setInterval(function () {
        jQuery('#bgimages').css('background-image', 'url(' + moba_background_imgs[current_bgimage] + ')');

        if(current_bgimage < max_bgimages){
          current_bgimage = current_bgimage+1;
        }
        else {
          current_bgimage = 0;
        }
        
      }, 5000); 

  }

/*
 // alert(moba_background_imgs.length);
	//jQuery('#body').css('background-image','url(http://127.0.0.1/motionbank/sites/motionbank.org/files/error.png)');
	//jQuery('#page').css('background','url(http://127.0.0.1/motionbank/sites/motionbank.org/files/error.png)');


  var current_bgimage = 0;

  var test = setInterval(function() {
        jQuery('#bgimages').css('background-image', 'url(' + moba_background_imgs[current_bgimage] + ')');
        if(current_bgimage < max_bgimages){
          current_bgimage = current_bgimage+1;
        }
    }, 2000);
    
    */
});
