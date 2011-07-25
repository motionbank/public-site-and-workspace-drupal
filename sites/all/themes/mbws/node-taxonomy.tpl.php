
<?php
//var_dump( get_defined_vars() );
?>
<div id="node-id-<?php echo $node->nid; ?>" class="node<?php
  if ( $sticky )   echo ' sticky';
  if ( !$status )  echo ' node-unpublished';
  echo ' node-type-'.$node->type;
  echo ' '.$zebra;
  if ( $id == 1 ) echo ' first';
  ?>">
  <div class="taxonomy-node">
      <div class="node-body">
        <a class="node-title" href="<?php echo $node_url ?>" title="<?php echo $title ?>">
          <?php echo $title ?>
        </a>                           
      </div>                
  </div>
</div>
