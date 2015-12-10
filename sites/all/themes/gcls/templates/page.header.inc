<?php
/**
 * @file
 * Returns the HTML for the header region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */

global $base_url;
?>

<script>
function searchweb(){
var web = "<?php print $base_url; ?>/sites/all/themes/gcls/templates/googlesearch.html?cx=006515734472246122058:9strqy7k3he-g&q=";
var sbox1 = document.form1.encoreSearchInput.value;

var result1 = web + sbox1;

window.location.href = result1;
return false;
}
</script>

<div class="bluebar">
  <?php print render($page['header']); ?>
  <button class="myaccount">My Account</button>
</div>

<header id="header" class="<?php print $classes; ?>">

<div >
  	<a href="#"><img class="logo" alt="GCLS logo" src= "<?php print $base_url; ?>/sites/all/themes/gcls/images/Logo2016.png"></a>
</div>

<div>

  <?php include('catsearch.js'); ?>

<form name="form1">
    
  <!-- REQUIRED with id="encoreSearchInput" -->
  <label for="encoreSearchInput" class="nodisplay">Search</label>
  <input id="encoreSearchInput" name="search" type="text" />

  <!-- REQUIRED INPUT with id="encoreBase": <ENCORE_FQDN> fully qualified domain name such as "encore.greenvillelibrary.org"  -->
  <input type="hidden" id="encoreBase" name="search" value="http://encore.greenvillelibrary.org/iii/encore/search/" />

  
  <input class="button" type="submit" name="Search Catalog" value ="Catalog" onClick = "return searchEncore();">
  <input class="button" type="submit" name="Search Site" value ="Website" onClick = "return searchweb();">
</form>
  
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