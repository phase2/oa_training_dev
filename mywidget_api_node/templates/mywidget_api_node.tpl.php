<?php
/**
 * @file
 * Provides the template for the custom widget.
 */
?>
<div class="clearfix">
  <?php if (empty($items)): ?>
    <p><?php print $no_items; ?></p>
  <?php else: ?>
    <ul>
    <?php foreach ($items as $item): ?>
      <li><?php print $item; ?></li>
    <?php endforeach; ?>
    </ul>
  <?php endif; ?>
</div>
