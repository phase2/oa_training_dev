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
    <?php foreach ($items as $item): ?>
      <div class = "clearfix">
        <h3><?php print $item->name; ?></h3>
        <?php print $item->description; ?>
      </div>
    <?php endforeach; ?>
  <?php endif; ?>
</div>
