jQuery(function(){
	jQuery('.search-menu-link').click(function(bla){
		bla.preventDefault();
		jQuery('#block-search-form').toggle();
		jQuery('#header').toggleClass('search-form-visible');
	});
});
	
