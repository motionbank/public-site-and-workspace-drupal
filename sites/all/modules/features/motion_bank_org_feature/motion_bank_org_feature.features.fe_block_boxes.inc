<?php
/**
 * @file
 * motion_bank_org_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function motion_bank_org_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block: Motionbank Trailer 2012';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mborg_video_trailer_block';
  $fe_block_boxes->body = '<p><iframe allowfullscreen="" frameborder="0" height="172" mozallowfullscreen="" src="http://player.vimeo.com/video/58463008?title=0&amp;byline=0&amp;portrait=0&amp;color=ffffff" webkitallowfullscreen="" width="306"></iframe></p>
';

  $export['mborg_video_trailer_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'motionbank_footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'motionbank_footer';
  $fe_block_boxes->body = '<div id="footer-lvl0">
	<ul id="footer-links">
		<li>
			<a href="/en/content/imprint">IMPRINT</a></li>
		<li>
			<a href="/en/content/team">TEAM</a></li>
		<li>
			<a href="/en/content/contact">CONTACT</a></li>
	</ul>
	<div id="partners">
		<h3>
			PARTNERS:</h3>
		<br />
		<img alt="" class="partners-img" id="dresden-img" src="/sites/all/themes/mborg/images/footer-logos/Amtsmarke_gelbhl_SW_weiss.png" /><img alt="" class="partners-img" id="sachsen-img" src="/sites/all/themes/mborg/images/footer-logos/FS_150_SW_weiss.png" /><img alt="" class="partners-img" id="hmwk-img" src="/sites/all/themes/mborg/images/footer-logos/HessischesMinisteriumWissenschaftundKunst_weiss.png" /> <img alt="" class="partners-img" id="kfffm-img" src="/sites/all/themes/mborg/images/footer-logos/kffrm-logo-quer-sw_weiss.png" /> <img alt="" class="partners-img" id="ksb-img" src="/sites/all/themes/mborg/images/footer-logos/ksb_SW_weiss.png" /> <img alt="" class="partners-img" id="poly-img" src="/sites/all/themes/mborg/images/footer-logos/stiftung-polytechnische-gesellschaft-ffm_weiss.png" /> <img alt="" class="partners-img" id="ffm-img" src="/sites/all/themes/mborg/images/footer-logos/Logo_StadtFFM_bw_weiss.png" /> <img alt="" class="partners-img" id="altana-img" src="/sites/all/themes/mborg/images/footer-logos/altana_kulturstiftung.png" /> <img alt="" class="partners-img" id="hellerau-img" src="/sites/all/themes/mborg/images/footer-logos/Logo_Hellerau_weiss.png" /> <img alt="" class="partners-img" id="flab-img" src="/sites/all/themes/mborg/images/footer-logos/flab_logo_weiss.png" /> <img alt="" class="partners-img" id="bhf-img" src="/sites/all/themes/mborg/images/footer-logos/bhf-bank-stiftung_bw_weiss.png" /></div>
</div>
<div id="footer-lvl1">
	<div id="project-of">
		<h3>
			A PROJECT OF:</h3>
		<p>THE FORSYTHE COMPANY</p>
	</div>
	<div id="score-partners">
		<h3>
			MOTION BANK SCORE PARTNERS:</h3>
		<p>Advanced Computing Center for the<br />
			Arts and Design Department of<br />
			Dance at The Ohio State University<br />
			<br />
			Fraunhofer-Institut f&uuml;r Graphische<br />
			Datenverarbeitung<br />
			<br />
			Hochschule Darmstadt-<br />
			University of applied sciences<br />
			<br />
			Hochschule f&uuml;r Gestaltung Offenbach</p>
	</div>
	<div id="footer-wrapper">
		<div id="workshop-partners">
			<h3>
				WORKSHOP PARTNERS:</h3>
			<p>Berlin School of Mind and Brain -<br />
				Humboldt-Universit&auml;t Berlin<br />
				<br />
				Max-Planck-Institut f&uuml;r Hirnforschung<br />
				Frankfurt am Main</p>
		</div>
		<div id="engaging-science">
			<h3>
				DANCE ENGAGING SCIENCE<br />
				WORKSHOPS SUPPORTED BY:</h3>
			<img alt="" class="partners-img" id="vw-img" src="/sites/all/themes/mborg/images/footer-logos/vw-vorab.png" /></div>
	</div>
	<div id="footer-text">
		<p>The Forsythe Company wird gef&ouml;rdert durch die Landes-<br />
			hauptstadt Dresden und den Freistaat Sachsen sowie<br />
			die Stadt Frankfurt am Main und das Land Hessen. Sie ist<br />
			Company-in-Residence in HELLERAU &ndash; Europ&auml;isches Zent-<br />
			rum der K&uuml;nste in Dresden und im Bockenheimer Depot in<br />
			Frankfurt am Main. Mit besonderem Dank an die ALTANA<br />
			Kulturstiftung f&uuml;r die Unterst&uuml;tzung der Forsythe Compa-<br />
			ny. Motion Bank wird gef&ouml;rdert durch die Kulturstiftung<br />
			des Bundes, das Hessische Ministerium f&uuml;r Wissenschaft<br />
			und Kunst, den Kulturfonds Frankfurt RheinMain und die<br />
			ALTANA Kulturstiftung. Das Frankfurt LAB wird erm&ouml;glicht<br />
			durch den Kulturfonds Frankfurt RheinMain, die Stiftung<br />
			Polytechnische Gesellschaft und die BHF-BANK-Stiftung.</p>
	</div>
</div>
';

  $export['motionbank_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for Newsletter Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'newsletter_link_block';
  $fe_block_boxes->body = '<p><a href="">Newsletter</a></p>
';

  $export['newsletter_link_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for Social Media Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_media_link_block';
  $fe_block_boxes->body = '<p id="follow">Follow:</p>
<p><a href="https://de-de.facebook.com/motionbank"><img src="/sites/all/themes/mborg/images/facebook-icon.jpg" /></a> <a href="https://twitter.com/motionbank"><img src="/sites/all/themes/mborg/images/twitter-icon.jpg" /></a></p>
';

  $export['social_media_link_block'] = $fe_block_boxes;

  return $export;
}
