<?php
/**
 * see zen/templates/views-view-fields.tpl.php
 */
	$field = $fields['title'];
	
	//var_dump(array_keys($fields));
	/*
	array(3) { [0]=> string(5) "title" [1]=> string(13) "comment_count" [2]=> string(12) "new_comments" }
	*/
?>
 <div class="views-field-title">
   <span class="field-content"><?php 
	
	print t( '!title <small>by !author</small>', 
			 array('!title' => $field->content, '!author'=>$fields['name']->content ) ); 
		?><span class="detailed-info"><?php 
	
	if ( $fields['new_comments']->raw > 0 )
	{
		print t( '<b>@new new</b> @comments', array(
					'@new'=>$fields['new_comments']->raw,
					'@comments' => 'comment'.($fields['new_comments']->raw > 1 ? 's' : '')
		));
	}
	else if ( $fields['comment_count']->raw > 0 )
	{
	    print t( '@total @comments', array('@total'=>$fields['comment_count']->raw,
		'@comments' => 'comment'.($fields['comment_count']->raw > 1 ? 's' : '')) );
	}
	else
	{
		print t('No comments');
	}
	
		?></span>
 	</span>
 </div>
