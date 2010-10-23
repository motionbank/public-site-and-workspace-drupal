<?php
/* See zen/templates/comment.tpl.php */
/* fjenett - 2010-10-23 */
?>
<div class="<?php print $classes; ?> clearfix">
  <?php print $picture; ?>

  <?php if ($title): ?>
    <h3 class="title">
      <?php print $title; ?>
      <?php if ($new): ?>
        <span class="new"><?php print $new; ?></span>
      <?php endif; ?>
    </h3>
  <?php elseif ($new): ?>
    <div class="new"><?php print $new; ?></div>
  <?php endif; ?>

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <div class="submitted">
    <?php
      print t('Submitted by !username on !datetime.',
        array('!username' => $author, '!datetime' => $created));
    ?>
  </div>

  <div class="content">
    <?php print $content; ?>
    <?php if ($signature): ?>
      <div class="user-signature clearfix">
        <?php print $signature; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php print $links; ?>
</div> <!-- /.comment -->
