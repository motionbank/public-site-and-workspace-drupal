// Run only if JS available
if(Drupal.jsEnabled){
  $(document).ready(function(){
    $('div.to-do-dates').each(function(){
      $(this).find('div.to-do-date-switch').find(':checkbox').each(function(){
        var condSelect = $(this).parents('div.to-do-date-wrapper').find('div.to-do-conditional');
        if(!this.checked){
          condSelect.hide();
        };
        $(this).click(function() {
          if(this.checked) {
            condSelect.show();
          }else{
            condSelect.hide();
          };
        }); // checkbox click
      }); // each div.to-do-date-switch checkbox
    }); // each div.to-do-dates
  }); // document.ready
}
