<?php
/**
 * @file
 * dcon-blog-list.tpl.php
 */
?>

<h2><?php print $title ?></h2>
<p><?php print $body ?></p>
<h3>Comentarios</h3>
<?php foreach ($comments as $comment): ?>
<h4><?php print $comment->name ?></h4>
<p><?php print $comment->body ?></p>
<?php endforeach; ?>
