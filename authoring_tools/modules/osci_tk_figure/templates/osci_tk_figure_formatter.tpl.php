<figure id="<?php print $item['fig_id']; ?>" title="<?=$item['number_template']?>" data-position="<?php print $item['position']; ?>" data-columns="<?php print $item['columns']; ?>" data-figure_type="<?php print $item['type']; ?>" data-aspect="<?php print $item['aspect']; ?>" data-options="<?php print htmlspecialchars($item['options']); ?>">
	<div class='figure_content'><?= $figure_content ?></div>
	<figcaption><p><?php print $item['number_template'] . ' ' . $item['caption']; ?></p></figcaption>
</figure>