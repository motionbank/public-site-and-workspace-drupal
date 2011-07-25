<?php
/**
 * see views-view-fields.tpl.php
 */
?>
<?php
  $title = $fields['title'];
  $type = strtolower( str_replace( ' ', '-', $fields['type']->content ) );
/*
{ [0]=> string(13) "comment_count" [1]=> string(17) "last_comment_name" [2]=> string(22) "last_comment_timestamp" [3]=> string(3) "nid" [4]=> string(5) "title" [5]=> string(4) "type" }
*/
	$new_comments = $fields['new_comments']->raw;
	$total_comments = $fields['comment_count']->raw;
?>
  <div class="views-field-title content-type-<?php print $type; ?>">
      <span class="field-content">
		<?php
			print l($title->raw, 'node/'.$fields['nid']->raw, array('fragment'=>'comments'));
		?> 
		<?php if ( $new_comments > 0 && $new_comments < $total_comments ) : ?>
      		<?php print t('<b>%new new</b> of %total', 
						  array('%new'=>$new_comments, '%total'=>$total_comments)) ?>
		<?php elseif ( $new_comments == $total_comments ) : ?>
      		<?php print t('<b>%new new</b>', array('%new'=>$new_comments)) ?>
  		<?php else : ?>
      		<?php print t('<b>%total</b> comments', array('%total'=>$total_comments)) ?>
		<?php endif; ?>
        <span class="detailed-info"><?php 
			print t( '@type, @date', 
					 array( '@type' => $fields['type']->content, 
							'@date' => $fields['last_comment_timestamp']->content ) );
		?></span>
      </span>
  </div>
