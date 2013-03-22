jQuery(function(){

  var searchField = jQuery('#edit-search-block-form--2');
  var searchButton = jQuery('.menu-path-search-node');

  jQuery(searchButton).click(function(event){
    event.preventDefault();
    jQuery('#edit-search-block-form--2:input').val('');

    searchButton.fadeOut(100,function(){
      searchField.fadeIn(100, function(){
        searchField.focus();
        });
    });
  });
});