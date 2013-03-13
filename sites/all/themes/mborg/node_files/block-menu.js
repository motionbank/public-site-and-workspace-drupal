/**
 *	See template.php -> mborg_menu_link()
 *
 *	JS to generate hovers for the blocked menu.
 */

 jQuery(function(){
 	jQuery('#block-menu-menu-block-menu .menu-preview-image').each(function(num,item){
 		item = jQuery(item);
 		var item_anchor = jQuery('a',item);
 		var img_css_url = 'url(\'' + item.data('preview-image-src') + '\')';
 		// hover states
 		item.hover(function(){
 			item_anchor.css({
 				'background-image':img_css_url
 			});
 		},function(){
 			item_anchor.css({
 				'background-image':'none'
 			});
 		});
 		// preload image(s)
 		var tmpImg = new Image();
 		tmpImg.src = item.data('preview-image-src');
 	});
 });