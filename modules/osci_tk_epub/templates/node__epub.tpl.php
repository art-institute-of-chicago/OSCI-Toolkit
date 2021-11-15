<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml"
         xmlns:epub="http://www.idpf.org/2007/ops">
<head>
       <meta name="robots" content="noindex" />
       <title>
         <?php
         $navTitle = null;
         if (is_array($node->field_navigation_title) && !empty($node->field_navigation_title)) {
             foreach ($node->field_navigation_title as $field_language => $delta_array) {
                 foreach ($delta_array as $index => $value) {
                     $navTitle = strip_tags($value['value']);
                 }
             }
         }
         print $navTitle ? $navTitle : $title;
         ?>
       </title>
       <?php print drupal_get_css(); ?>
</head>
<body class="<?php print $classes; ?> node-<?php print $node->nid; ?>">
       <?php print drupal_render($content); ?>
</body>
</html>