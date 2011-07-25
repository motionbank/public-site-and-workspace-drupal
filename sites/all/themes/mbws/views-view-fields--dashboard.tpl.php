<?php
  /* See views-view-fields.tpl.php */
?>
<?php
  $field = $fields['title'];
  $type = strtolower( str_replace( ' ', '-', $fields['type']->content ) );
?>
  <div class="views-field-title content-type-<?php print $type; ?>">
      <span class="field-content"><?php print $field->content; ?> <span class="content-type-label"><?php print $fields['type']->content; ?> on <?php print $fields['last_updated']->content ?></span></span>
  </div>
