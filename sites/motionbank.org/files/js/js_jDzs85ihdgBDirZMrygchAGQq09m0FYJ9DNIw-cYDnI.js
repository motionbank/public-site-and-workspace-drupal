jQuery(function(){

  var max_bgImages = moba_background_imgs.length;
  
  if ( max_bgImages > 1 ) {

    var current_bgImage = 0;
    var bgImages = jQuery('#bgimages');
    var bgImage_back = jQuery('#bgimage-back');
    var bgImage_front = jQuery('#bgimage-front');

    var nextImage = current_bgImage + 1;
    nextImage %= max_bgImages;
    bgImage_back.css('background-image', 'url(' + moba_background_imgs[nextImage] + ')');
    
    function changebackground() {

      bgImage_front.fadeOut( 3000, function(){
        
        var nextImage = current_bgImage + 1;
        nextImage %= max_bgImages;

        var tmpImg = new Image();
        tmpImg.onload = function () {
          bgImage_front.css('background-image', 'url(' + moba_background_imgs[nextImage] + ')');
          bgImage_front.show();

          current_bgImage = nextImage;

          nextImage++;
          nextImage %= max_bgImages;
          bgImage_back.css('background-image', 'url(' + moba_background_imgs[nextImage] + ')');

          setTimeout( changebackground, 10 * 1000 );
        }
        tmpImg.src = moba_background_imgs[nextImage];
      });
   }
   setTimeout( changebackground, 10 * 1000 );
  }
});;
/**
 *	See template.php -> mborg_preprocess_views_view() + tpl files!
 *
 *	JS to generate hovers for the blocked menu.
 */

 jQuery(function(){
 	jQuery('#block-views-frontpage-nodes-block,'+
 		   '#block-views-latest-entries-block,'+
 		   '#block-views-random-nodes-block').each(function(num,item){
 		item = jQuery(item);
 		var rows = jQuery('.views-row',item);
 		rows.each(function(rowNum, row){
 			row = jQuery(row);
 			if ( row.data('block-preview-image-src') ) {
	 			var item_anchor = jQuery('a',row);
		 		//var img_css_url = 'url(\'' + row.data('block-preview-image-src') + '\')';
		 		// hover states
		 		row.hover(function(){
		 			// item_anchor.css({
		 			// 	'background-image':img_css_url
		 			// });
		 			jQuery('.block-bg-image', this).stop(true, true).fadeIn(400);
		 			jQuery({alpha:0.6}).stop(true, true).animate({alpha:0}, {
						        duration: 200,
						        step: function(){
						            item_anchor.css('border-color','rgba(255,255,255,'+this.alpha+')');
						        },
						        complete: function(){
						    	item_anchor.css('border-color','rgba(255,255,255,0)');
						    }
						    });
		 		},function(){
		 			// item_anchor.css({
		 			// 	'background-image':'none'
		 			// });
		 			jQuery('.block-bg-image', this).stop(true, true).fadeOut(400);
		 			jQuery({alpha:0}).stop(true, true).animate({alpha:0.6}, {
						        duration: 200,
						        step: function(){
						            item_anchor.css('border-color','rgba(255,255,255,'+this.alpha+')');
						        }, complete : function(){
						    	item_anchor.css('border-color','rgba(255,255,255,0.6)');
						    }
						    });
		 		});
		 		jQuery( 'a', row ).css({
		 			height:(row.data('block-preview-image-height')/2)+'px',
		 			paddingTop:(row.data('block-preview-image-height')/2-20)+'px'
		 		});
		 		// preload image(s)
		 		var tmpImg = new Image();
		 		tmpImg.src = row.data('block-preview-image-src');
 			}
 		});
 	});
 });;
jQuery(function(){

  var searchField = jQuery('#edit-search-block-form--2');
  var searchButton = jQuery('.menu-path-search-node');

  jQuery(searchButton).click(function(event){
    event.preventDefault();
    jQuery('#edit-search-block-form--2:input').val('');

    searchButton.fadeOut(100,function(){
      searchField.css('display', 'block');
      searchField.fadeIn(100, function(){
        searchField.focus();
        });
    });
  });
});;
/*

 */

jQuery(function(){
	jQuery(".menuparent").not(".active-trail").mouseenter(function() {
		jQuery(".menuparent .active-trail > ul").fadeTo('fast',0.0);
	});

	jQuery(".menuparent").not(".active-trail").mouseout(function() {
		jQuery(".menuparent .active-trail > ul").fadeTo('fast',1);
	});
/*
	
	jQuery('.menuparent').filter(this '> ul:hidden').find('a').mouseenter(function() {
		alert("HELLO");
	});

	*/

	/*
	jQuery('.menuparent > ul li').mouseenter(function() {
		alert('hello');
	//	jQuery('#nice-menu-1 .active-trail > ul').fadeTo('fast',0);
		/*if( jQuery('.active-trail').has('ul').length != 0 ){
			jQuery('ul', '.active-trail').children().fadeTo('fast',0.2);
		}
	});*/
/*
	jQuery('.menuparent').not('.active-trail').mouseout(function() {
		jQuery('#nice-menu-1 .active-trail > ul').fadeTo('fast',1);
	});
/*
	/* check if a submenu is open 
	if( jQuery('.active-trail').has('ul').length != 0 ){
		
	}
	*/
	// jQuery( "#nice-menu-1 .menuparent").hover(
	// 	function(evt){
	// 		jQuery("#nice-menu-1 .active-trail > ul").css({
	// 			border: "1px solid green"
	// 		});
	// 	},
	// 	function(evt){
	// 		console.log( item );
	// 		// jQuery("#nice-menu-1 .menuparent").css({
	// 		// 	border: "1px solid red"
	// 		// });
	// 	}
	// );
	
	// jQuery("#nice-menu-1 .active-trail > ul").css({
	// 	border: "1px solid green"
	// });
});


// ).hover(function(e){console.log(evt)});
;
