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
  $fe_block_boxes->info = 'motionbank_footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'motionbank_footer';
  $fe_block_boxes->body = '<div id="footer-lvl0">
	<ul id="footer-links">
		<li>
			<a href="/de/content/impressum">IMPRESSUM</a></li>
		<li>
			<a href="/de/content/team">TEAM</a></li>
		<li>
			<a href="/de/content/kontakt">KONTAKT</a></li>
	</ul>
	<div id="footer-wrapper-01">
		<div id="project-of">
			<h3>
				A PROJECT OF:</h3>
			<img alt="The Forsythe Company" id="tfc-img" src="/sites/all/themes/mborg/images/footer-logos/TFC.png" /></div>
		<div id="education-partners">
			<h3>
				MOTION BANK<br />
				EDUCATION PARTNERS:</h3>
			<span class="img-wrapper"><img alt="Hochschule für Musik und Darstellende Kunst Frankfurt am Main" id="hfmdk-img" src="/sites/all/themes/mborg/images/footer-logos/HFMDK.png" /></span>
			<p>Hochschule f&uuml;r Musik<br />
				und Darstellende Kunst<br />
				Frankfurt am Main</p>
			<br />
			<span class="img-wrapper"><img alt="Palucca Hochschule für Tanz Dresden" id="palucca-img" src="/sites/all/themes/mborg/images/footer-logos/palucca.png" /></span>
			<p>Palucca Hoschule<br />
				f&uuml;r Tanz Dresden</p>
		</div>
	</div>
	<div id="score-partners">
		<h3>
			MOTION BANK SCORE PARTNERS:</h3>
		<span class="img-wrapper"><img alt="The Ohio State University" id="ohio-img" src="/sites/all/themes/mborg/images/footer-logos/ohio.png" /></span>
		<p>Advanced Computing Center for the<br />
			Arts and Design and Department of<br />
			Dance at The Ohio State University</p>
		<span class="img-wrapper"><img alt="Fraunhofer-Institut für Graphische Datenverarbeitung" id="fraunhofer-img" src="/sites/all/themes/mborg/images/footer-logos/fraunhofer.png" /></span>
		<p>Fraunhofer-Institut f&uuml;r<br />
			Graphische Datenverarbeitung</p>
		<span class="img-wrapper"><img alt="Hochschule Darstadt - University of applied Sciences" id="darmstadt-img" src="/sites/all/themes/mborg/images/footer-logos/Darmstadt.png" /></span>
		<p>Hochschule Darmstadt-<br />
			University of applied sciences</p>
		<span class="img-wrapper"><img alt="Hochschule für Gestaltung Offenbach" id="hfg-img" src="/sites/all/themes/mborg/images/footer-logos/hfg.png" /></span>
		<p>Hochschule f&uuml;r Gestaltung Offenbach</p>
	</div>
	<div id="footer-wrapper-02">
		<div id="engaging-science">
			<h3>
				DANCE ENGAGING SCIENCE<br />
				WORKSHOPS SUPPORTED BY:</h3>
			<img alt="VolkswagenStiftung" class="partners-img" id="vw-img" src="/sites/all/themes/mborg/images/footer-logos/vw-vorab.png" /></div>
		<div id="workshop-partners">
			<h3>
				WORKSHOP PARTNERS:</h3>
			<span class="img-wrapper"><img alt="Berlin School of Mind and Brain - Humboldt-Universität Berlin" id="berlin-img" src="/sites/all/themes/mborg/images/footer-logos/Berlin.png" /></span>
			<p>Berlin School of Mind<br />
				and Brain - Humboldt-<br />
				Universit&auml;t Berlin</p>
			<br />
			<span class="img-wrapper"><img alt="Max-Planck-Institut für Hirnforschung Frankfurt am Main" id="maxplanck-img" src="/sites/all/themes/mborg/images/footer-logos/MaxPlanck.png" /></span>
			<p>Max-Planck-Institut<br />
				f&uuml;r Hirnforschung<br />
				Frankfurt am Main</p>
		</div>
	</div>
	<div id="footer-text">
		<p><span>The Forsythe Company</span> wird gef&ouml;rdert durch die <span>Landes-<br />
			hauptstadt Dresden</span> und den <span>Freistaat Sachsen</span> sowie<br />
			die <span>Stadt Frankfurt am Main</span> und das <span>Land Hessen</span>. Sie ist<br />
			Company-in-Residence in <span>HELLERAU &ndash; Europ&auml;isches Zent-<br />
			rum der K&uuml;nste</span> in Dresden und im <span>Bockenheimer Depot</span> in<br />
			Frankfurt am Main. Mit besonderem Dank an die <span>ALTANA<br />
			Kulturstiftung</span> f&uuml;r die Unterst&uuml;tzung der Forsythe Compa-<br />
			ny. <span>Motion Bank</span> wird gef&ouml;rdert durch die <span>Kulturstiftung<br />
			des Bundes</span>, das <span>Hessische Ministerium f&uuml;r Wissenschaft<br />
			und Kunst</span>, den <span>Kulturfonds Frankfurt RheinMain</span> und die<br />
			<span>ALTANA Kulturstiftung</span>. Das <span>Frankfurt LAB</span> wird erm&ouml;glicht<br />
			durch den <span>Kulturfonds Frankfurt RheinMain</span>, die <span>Stiftung<br />
			Polytechnische Gesellschaft</span> und die <span>BHF-BANK-Stiftung</span>.</p>
	</div>
</div>
<div id="footer-lvl1">
	<div id="partners">
		<h3>
			PARTNERS:</h3>
		<br />
		<img alt="" class="partners-img" id="dresden-img" src="/sites/all/themes/mborg/images/footer-logos/Amtsmarke_gelbhl_SW_weiss.png" /> <img alt="" class="partners-img" id="sachsen-img" src="/sites/all/themes/mborg/images/footer-logos/FS_150_SW_weiss.png" /> <img alt="" class="partners-img" id="hmwk-img" src="/sites/all/themes/mborg/images/footer-logos/HessischesMinisteriumWissenschaftundKunst_weiss.png" /> <img alt="" class="partners-img" id="kfffm-img" src="/sites/all/themes/mborg/images/footer-logos/kffrm-logo-quer-sw_weiss.png" /> <img alt="" class="partners-img" id="ksb-img" src="/sites/all/themes/mborg/images/footer-logos/ksb_SW_weiss.png" /> <img alt="" class="partners-img" id="poly-img" src="/sites/all/themes/mborg/images/footer-logos/stiftung-polytechnische-gesellschaft-ffm_weiss.png" /> <img alt="" class="partners-img" id="ffm-img" src="/sites/all/themes/mborg/images/footer-logos/Logo_StadtFFM_bw_weiss.png" /> <img alt="" class="partners-img" id="altana-img" src="/sites/all/themes/mborg/images/footer-logos/altana_kulturstiftung.png" /> <img alt="" class="partners-img" id="hellerau-img" src="/sites/all/themes/mborg/images/footer-logos/Logo_Hellerau_weiss.png" /> <img alt="" class="partners-img" id="flab-img" src="/sites/all/themes/mborg/images/footer-logos/flab_logo_weiss.png" /> <img alt="" class="partners-img" id="bhf-img" src="/sites/all/themes/mborg/images/footer-logos/bhf-bank-stiftung_bw_weiss.png" /></div>
</div>
';

  $export['motionbank_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for Newsletter Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'newsletter_link_block';
  $fe_block_boxes->body = '<p><a href="/de/newsletter">Newsletter</a></p>
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
