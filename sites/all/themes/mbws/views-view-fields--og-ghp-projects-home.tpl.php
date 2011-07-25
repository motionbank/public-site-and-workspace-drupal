<?php
  /* See views-view-fields.tpl.php */
?>
<?php 
  $field = $fields['title'];
  $comments = $fields['comment_count'];
  $author = $fields['name'];
?>
  <div class="views-field-title content-type-<?php print $type; ?>">
      <span class="field-content">
        <?php print $field->content; ?>
        <span class="node-info">
          by <span class="node-author"><?php print $author->content; ?></span>
          <?php if ($comments->content !== '0') : ?>
          , comments <span class="comment-count"><?php print $comments->content; ?></span>
          <?php endif; ?>
        </span>
      </span>
  </div>
