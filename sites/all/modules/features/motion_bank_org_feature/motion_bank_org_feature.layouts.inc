<?php
/**
 * @file
 * motion_bank_org_feature.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function motion_bank_org_feature_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'basic_page';
  $layout->admin_title = 'basic_page_layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => '02',
          2 => '03',
          3 => '04',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => '01',
        'width' => '35.10663648278327',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      '02' => array(
        'type' => 'region',
        'title' => '02',
        'width' => '23.549861520645873',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      '03' => array(
        'type' => 'region',
        'title' => '03',
        'width' => '28.84350199657085',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      '04' => array(
        'type' => 'region',
        'title' => '04',
        'width' => 12.5,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['basic_page'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'frontpage_layout';
  $layout->admin_title = 'frontpage_layout';
  $layout->admin_description = 'four columns';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
          2 => 2,
          3 => 3,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '25.041706754723815',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => '01',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'column',
        'width' => '25.054284865591374',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.060705347107287',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '24.843303032577527',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '02',
        ),
        'parent' => '1',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '03',
        ),
        'parent' => '2',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '04',
        ),
        'parent' => '3',
        'class' => '',
      ),
      '02' => array(
        'type' => 'region',
        'title' => '02',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      '03' => array(
        'type' => 'region',
        'title' => '03',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      '04' => array(
        'type' => 'region',
        'title' => '04',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
    ),
  );
  $export['frontpage_layout'] = $layout;

  return $export;
}
