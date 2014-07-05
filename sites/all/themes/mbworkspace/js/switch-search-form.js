jQuery(function(){
	/* show/hide search field block when search link is clicked. see template.php _menu_link() */
	jQuery('.search-menu-link').click(function(event){
		event.preventDefault();

		jQuery('#header').toggleClass('search-form-visible');
		if( jQuery('#header').hasClass('search-form-visible') ){
			jQuery('#block-search-form form').css('display','block');
			jQuery('#header').animate({height: "169px"},250);
		}
		else{
			jQuery('#header').animate({height: "133px"},250, function(){
				jQuery('#block-search-form form').css('display','none');
			});
		}	
	});
});
	
