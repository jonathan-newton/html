<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<footer id="footer" class="<?php print $classes; ?>">

<?php if ($content): ?>
   <div style="display:none" class="<?php print $classes; ?>"> 
    <?php print $content; ?>
  </div>
  <div >
  	<img class="logo" src="http://localhost/redesign/sites/all/themes/gcls/images/Logo2015_Web.png">
  </div>

  <div>
  	25 Heritage Green <br>
  	Greenville, SC 29601 <br>
  	(864) 242-5000<br> 
  </div>

  <div>
  	Hughes Main Hours:<br>
  	Mon-Fri: 9am-9pm<br>
  	Sat: 9am-6pm<br>
  	Sun: 2pm-6pm
  </div>

  <div>
  	Branch Hours:<br>
  	Mon-Thurs: 9am-9pm<br>
  	Fri-Sun: 9am-6pm
  	<br> 
  </div>

  <div class="socialmedia">
  	<p>
  		<a href="http://libanswers.greenvillelibrary.org/">Get some help</a> 
  		<a href="http://www.greenvillelibrary.org/index.php/about/locations-hours">Locations/Hours</a>
  		<a href="http://www.greenvillelibrary.org/index.php/about/contact-us"> Contact Us</a>
  	</p>
  	<div class="icons">
		<a href="http://www.facebook.com/greenvillelibrary" target="_blank"><img src="sites/all/themes/gcls/images/face.png"></a>
		<a href="http://twitter.com/GCLSLibrary" target="_blank"><img src="sites/all/themes/gcls/images/twit.png"></a>
		<a href="http://www.youtube.com/user/GreenvilleLibrary" target="_blank"><img src="sites/all/themes/gcls/images/yout.png"></a>
		<a href="http://pinterest.com/gcls/" target="_blank"><img src="sites/all/themes/gcls/images/pin.png"></a>
		<a href="http://instagram.com/greenvillelibrary" target="_blank"><img src="sites/all/themes/gcls/images/insta.png"></a>
	</div>

	<div class="nlink">
		<a href="http://eepurl.com/pYSXf" target="_blank"><button class="newsbutton">Get our newsletter</button></a>
	</div>
  </div>
  </footer>
<?php endif; ?>

