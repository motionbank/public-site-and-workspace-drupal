<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */
?>

<div id="page-wrapper"><div id="page">

  <div id="header"><div class="section clearfix">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div id="name-and-slogan">
        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name"><strong>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </strong></div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div><!-- /#name-and-slogan -->
    <?php endif; ?>

    <?php print render($page['header']); ?>

  </div></div><!-- /.section, /#header -->
	

  <div id="main-wrapper"><div id="main" class="clearfix<?php if ($main_menu || $page['navigation']) { print ' with-navigation'; } ?>">

    <div id="content" class="column"><div class="section">
      <div id="content-header">
        <?php print render($page['highlighted']); ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php if ($tabs = render($tabs)): ?>
          <div class="tabs"><?php print $tabs; ?></div>
        <?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content_header']); ?>
      </div><!-- /#content-header -->
      <?php print render($page['content']); ?>
    </div></div><!-- /.section, /#content -->

    <?php if ($page['navigation'] || $main_menu): ?>
      <div id="navigation"><div class="section clearfix">

        <?php print theme('links__system_main_menu', array(
          'links' => $main_menu,
          'attributes' => array(
            'id' => 'main-menu',
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => t('Main menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>

        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'id' => 'secondary-menu',
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>

        <?php print render($page['navigation']); ?>

      </div></div><!-- /.section, /#navigation -->
    <?php endif; ?>

    <?php print render($page['sidebar_first']); ?>

    <?php print render($page['sidebar_second']); ?>

  </div></div><!-- /#main, /#main-wrapper -->

  <?php print render($page['footer']); ?>

  <div id="footer">
    <div id="footer-lvl0">
      <ul id="footer-links">
        <li><a href="content/imprint">IMPRINT</a></li>
        <li><a href="content/team">TEAM</a></li>
        <li><a href="content/contact">CONTACT</a></li>
      </ul>

      <div id="footer-spacer"></div>

      <div id="partners">
        <h3>PARTNERS:</h3>

        <br />
        
        <img class="partners-img" id="dresden-img" src="/sites/all/themes/mborg/images/footer-logos/Amtsmarke_gelbhl_SW_weiss.png" alt="" />
        <img class="partners-img" id="sachsen-img" src="/sites/all/themes/mborg/images/footer-logos/FS_150_SW_weiss.png" alt="" />
        <img class="partners-img" id="hmwk-img" src="/sites/all/themes/mborg/images/footer-logos/HessischesMinisteriumWissenschaftundKunst_weiss.png" alt="" />
        <img class="partners-img" id="kfffm-img" src="/sites/all/themes/mborg/images/footer-logos/kffrm-logo-quer-sw_weiss.png" alt="" />
        <img class="partners-img" id="ksb-img" src="/sites/all/themes/mborg/images/footer-logos/ksb_SW_weiss.png" alt="" />
        <img class="partners-img" id="poly-img" src="/sites/all/themes/mborg/images/footer-logos/stiftung-polytechnische-gesellschaft-ffm_weiss.png" alt="" />
        <img class="partners-img" id="ffm-img" src="/sites/all/themes/mborg/images/footer-logos/Logo_StadtFFM_bw_weiss.png" alt="" />
        <img class="partners-img" id="altana-img" src="/sites/all/themes/mborg/images/footer-logos/altana_kulturstiftung.png" alt="" />
        <img class="partners-img" id="hellerau-img" src="/sites/all/themes/mborg/images/footer-logos/Logo_Hellerau_weiss.png" alt="" />
        <img class="partners-img" id="flab-img" src="/sites/all/themes/mborg/images/footer-logos/flab_logo_weiss.png" alt="" />        
        <img class="partners-img" id="bhf-img" src="/sites/all/themes/mborg/images/footer-logos/bhf-bank-stiftung_bw_weiss.png" alt="" />
      </div>
    </div>

    

    <div id="footer-lvl1">
      <div id="project-of">
        <h3>A PROJECT OF:</h3>
        <p>THE FORSYTHE COMPANY</p>
      </div>
      <div id="score-partners">
        <h3>MOTION BANK SCORE PARTNERS:</h3>
        <p>
        Advanced Computing Center for the<br />
        Arts and Design Department of<br />
        Dance at The Ohio State University<br />
        <br />
        Fraunhofer-Institut für Graphische<br />
        Datenverarbeitung<br />
        <br />
        Hochschule Darmstadt-<br />
        University of applied sciences<br />
        <br />
        Hochschule für Gestaltung Offenbach
        </p>
      </div>

      <div id="footer-wrapper">
        <div id="workshop-partners">
          <h3>WORKSHOP PARTNERS:</h3>
          <p>
          Berlin School of Mind and Brain -<br />
          Humboldt-Universität Berlin<br />
          <br />
          Max-Planck-Institut für Hirnforschung<br />
          Frankfurt am Main 
          </p>
        </div>
        <div id="engaging-science">
          <h3>DANCE ENGAGING SCIENCE<br />
          WORKSHOPS SUPPORTED BY:</h3>
          <img class="partners-img" id="vw-img" src="/sites/all/themes/mborg/images/footer-logos/vw-vorab.png" alt="" />
        </div>
      </div>
      <div id="footer-text">
        <p>
        The Forsythe Company wird gefördert durch die Landes-<br />
        hauptstadt Dresden und den Freistaat Sachsen sowie<br />
        die Stadt Frankfurt am Main und das Land Hessen. Sie ist<br />
        Company-in-Residence in HELLERAU – Europäisches Zent-<br />
        rum der Künste in Dresden und im Bockenheimer Depot in<br />
        Frankfurt am Main. Mit besonderem Dank an die ALTANA<br />
        Kulturstiftung für die Unterstützung der Forsythe Compa-<br />
        ny. Motion Bank wird gefördert durch die Kulturstiftung<br />
        des Bundes, das Hessische Ministerium für Wissenschaft<br />
        und Kunst, den Kulturfonds Frankfurt RheinMain und die<br />
        ALTANA Kulturstiftung. Das Frankfurt LAB wird ermöglicht<br />
        durch den Kulturfonds Frankfurt RheinMain, die Stiftung<br />
        Polytechnische Gesellschaft und die BHF-BANK-Stiftung.
        </p>
      </div>
  </div>
<!--
  <div id="footer">
    <div id="footer-up">
      
      <ul id="footer-links">
        <li><a class="headline" href="">IMPRINT</a></li>
        <li><a class="headline" href="">TEAM</a></li>
        <li><a class="headline" href="">CONTACT</a></li>
      </ul>

      <div id="footer-spacer">
      </div>

      <div id="footer-wrapper-01">
        <div id="project-of">
          <span class="headline">A PROJECT OF:</span><br />
          THE FORSYTHE COMPANY
        </div>

      
        <div id="score-partners">
          <span class="headline">SCORE PARTNERS:</span>
          <p>
            Advanced Computing Center for the Arts and Design Department of Dance at The Ohio State University<br />
            <br />
            Fraunhofer-Institut f&uuml;r Graphische Datenverarbeitung<br />
            <br />
            Hochschule Darmstadt-<br />
            University of applied sciences<br />
            <br />
            Hochschule f&uuml;r Gestaltung Offenbach
          </p>
        </div>
      </div>

      <div id="footer-wrapper-02">
        <div id="workshop-partners">
          <span class="headline">WORKSHOP PARTNERS:</span>
          <br />
          Berlin School of Mind and Brain -<br />
          Humboldt-Universit&auml;t Berlin<br />
          <br />
          Max-Planck-Institut f&uuml;r Hirnforschung<br />
          Frankfurt am Main
        </div>

        <div id="supported">
          <span class="headline">DANCE ENGAGING SCIENCE WORKSHOPS SUPPORTED BY:</span><br />
          <img src="/sites/motionbank.org/files/logos/vw-stiftung.png" alt="Volkswagen Stiftung" />
        </div>
      </div>
    </div>

    <div style="float:none; clear:both"></div>

    <div id="footer-down">
      <div id="partners">
        <span class="headline">PARTNERS:</span>
      </div>
    </div>
  </div>
-->
</div></div><!-- /#page, /#page-wrapper -->

<?php print render($page['bottom']); ?>
