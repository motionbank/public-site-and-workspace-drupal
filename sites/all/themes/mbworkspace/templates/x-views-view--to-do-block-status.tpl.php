<?php
/**
 * see sites/all/modules/views/theme/views-view.tpl.php
 */

$total = 0; $todo_list = "";
if ( !empty($views_grouping_field_links) ) 
{
  $item_list = array();

  foreach ( $views_grouping_field_links as $item )
  {
     $item_list[] = l( $item['title'] . " (" . $item['count'] . " items)", $item['path'] );
	 $total += $item['count'];
  }

  $todo_list = theme('item_list',array('items' => $item_list));
}

?>
<div class="<?php print $classes; ?>">

  <?php if ($title): ?>
    <?php 
		// this is not showing .. block title overrides it .. anyways.
		print $title; 
		if ( $total > 0 ) 
			print ' ' . t('(!total) total', array('!total'=>$total));
	?>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php
      	print $todo_list;
      ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

</div> <?php /* class view */ ?>
