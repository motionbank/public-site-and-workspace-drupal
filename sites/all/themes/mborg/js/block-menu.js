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
 		console.log( rows );
 		rows.each(function(rowNum, row){
 			row = jQuery(row);
 			if ( row.data('block-preview-image-src') ) {
	 			var item_anchor = jQuery('a',row);
		 		var img_css_url = 'url(\'' + row.data('block-preview-image-src') + '\')';
		 		// hover states
		 		row.hover(function(){
		 			item_anchor.css({
		 				'background-image':img_css_url
		 			});
		 		},function(){
		 			item_anchor.css({
		 				'background-image':'none'
		 			});
		 		});
		 		jQuery( 'a', row ).css({
		 			height:(row.data('block-preview-image-height')/2+20)+'px',
		 			paddingTop:(row.data('block-preview-image-height')/2-20)+'px'
		 		});
		 		// preload image(s)
		 		var tmpImg = new Image();
		 		tmpImg.src = row.data('block-preview-image-src');
 			}
 		});
 	});
 });