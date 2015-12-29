<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="announcement">
	<div class="anndiv">
	<?php if (!empty($title)): ?>
  		<h3 class="ann"><?php print $title; ?></h3>
	<?php endif; ?>

	<?php foreach ($rows as $id => $row): ?>
  		<div>
    		<?php print $row; ?>
 		</div>
<?php endforeach; ?>
</div>
</div>