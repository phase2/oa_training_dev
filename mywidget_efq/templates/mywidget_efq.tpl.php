<?php
/**
 * @file
 * Provides the template for the custom widget.
 */
?>
<div class="clearfix">
  <?php if (empty($tasks)): ?>
    <p><?php print $no_tasks; ?></p>
  <?php else: ?>
    <?php foreach ($tasks as $task): ?>
      <div class = "clearfix">
        <h3><?php print $task['link']; ?></h3>
        <?php print $task['body']; ?>
      </div>
    <?php endforeach; ?>
  <?php endif; ?>
</div>
