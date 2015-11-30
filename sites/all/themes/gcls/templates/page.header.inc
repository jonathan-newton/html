<?php
/**
 * @file
 * Returns the HTML for the header region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>

<script>
function searchweb(){
var web = "sites/all/themes/gcls/templates/googlesearch.html?cx=007642714936430497779:o72wnea07-g&q=";
var sbox1 = document.form1.encoreSearchInput.value;

var result1 = web + sbox1;

window.location.href = result1;
return false;
}
</script>

<header id="header" class="<?php print $classes; ?>">
  
<div >
  	<a href="#"><img class="logo" alt="GCLS logo" src="sites/all/themes/gcls/images/Logo2016.png"></a>
</div>

<div>

  <?php include('catsearch.js'); ?>

<form name="form1">
    
  <!-- REQUIRED with id="encoreSearchInput" -->
  <label for="encoreSearchInput" class="nodisplay">Search</label>
  <input id="encoreSearchInput" name="search" type="text" />

  <!-- REQUIRED INPUT with id="encoreBase": <ENCORE_FQDN> fully qualified domain name such as "encore.greenvillelibrary.org"  -->
  <input type="hidden" id="encoreBase" name="search" value="http://encore.greenvillelibrary.org/iii/encore/search/" />

  
  <input class="button" type="submit" name="Search Catalog" value ="Search Catalog" onClick = "return searchEncore();">
  <input class="button" type="submit" name="Search Site" value ="Search Website" onClick = "return searchweb();">
</form>

<button>My Account</button>
<button>Ask Us</button>
  
</div>

<div>
<?php print render($page['header']); ?>
</div>

<?php if ($secondary_menu): ?>
  <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
    <?php print theme('links__system_secondary_menu', array(
      'links' => $secondary_menu,
      'attributes' => array(
        'class' => array('links', 'inline', 'clearfix'),
      ),
      'heading' => array(
        'text' => $secondary_menu_heading,
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    )); ?>
  </nav>
<?php endif; ?>
</header>