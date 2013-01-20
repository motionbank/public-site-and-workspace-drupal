/*
	bg image slideshow.
*/
jQuery(function(){
	var bgImgsPreloaded = [];
	var preloadImage = function ( imgSrc, i, cb ) {
		var img = new Image();
		img.src = imgSrc;
		img.onload = function () {
			cb(img, i);
		}
	}
	if ( moba_background_imgs ) {
		for ( var i = 0; i < moba_background_imgs.length; i++ ) {
			if ( !bgImgsPreloaded[i] ) {
				preloadImage(moba_background_imgs[i], i, function(img, n){
					bgImgsPreloaded[n] = img;
					console.log( jQuery('#bgimages') );
					jQuery('#page').css({'background-image':'url(\''+img.src+'\')'});
				});
			}
		}
	}
});