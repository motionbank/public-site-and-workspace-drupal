/**
 *	See template.php -> mborg_preprocess_views_view() + tpl files!
 *
 *	JS to generate hovers for the blocked menu.
 */

jQuery(function(){
	jQuery(".page-frontpage .panel-pane, .panels-flexible-region-basic_page-03 .panel-pane, .panels-flexible-region-basic_page-04 .panel-pane").each(function( index, item ){
		item = jQuery('h2',item);
		var imgHeight = jQuery( this ).children().find( "img" ).attr( "height" );
		jQuery( this ).css("height", imgHeight);
		jQuery( this ).hover(function(){
			jQuery('img', this).stop(true, true).fadeIn(400);
			jQuery({alpha:0.6}).stop(true, true).animate({alpha:0}, {
						        duration: 200,
						        step: function(){
						            item.css('border-color','rgba(255,255,255,'+this.alpha+')');
						        },
						        complete: function(){
						    		item.css('border-color','rgba(255,255,255,0)');
						    }
						    });
		}, function(){
			jQuery('img', this).stop(true, true).fadeOut(400);
			jQuery({alpha:0}).stop(true, true).animate({alpha:0.6}, {
						        duration: 200,
						        step: function(){
						            item.css('border-color','rgba(255,255,255,'+this.alpha+')');
						        }, complete : function(){
						    	item.css('border-color','rgba(255,255,255,0.6)');
						    }
						    });
		});
	});
});

/*
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
 });
 */