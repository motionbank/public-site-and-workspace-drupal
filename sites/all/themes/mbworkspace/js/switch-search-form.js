jQuery(function(){
	/* show/hide search field block when search link is clicked. see template.php _menu_link() */
	jQuery('.search-menu-link').click(function(event){
		event.preventDefault();
		jQuery('#block-search-form').toggle();
		jQuery('#header').toggleClass('search-form-visible');
	});
});
	
