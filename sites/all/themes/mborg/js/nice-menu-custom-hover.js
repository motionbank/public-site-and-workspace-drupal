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
});