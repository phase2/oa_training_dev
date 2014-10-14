<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<div class="clearfix oa_device">
  <h4><?php print $title . " (" . strip_tags($field_device_id) . ")"; ?></h4>
  <div class="pull-right">
    <span class="label"><?php print $og_group_ref; ?></span>
    <span class="label"><?php print $oa_section_ref; ?></span>
  </div>
  <div class="pull-left">
    <?php
      if (strip_tags($field_device_status) == 'Working') {
        print '<span style="color:green;"><i class="icon-ok"></i>&nbsp;';
      }
      else {
        print '<span style="color:red;"><i class="icon-exclamation-sign"></i>&nbsp;';
      }
      print strip_tags($field_device_status);
      print '</span>&nbsp;&nbsp;';
    ?>
    <span><?php print strip_tags($field_device_type); ?></span>
  </div>
</div>
