<?php
/**
 * @file
 * The rules implementation for the To Do module.
 */

/**
 * Implementation of hook_rules_event_info().
 * The To do events information.
 */
function to_do_rules_event_info() {
  global $user;

  $params = array(
    'node' => array('type' => 'node', 'label' => 'to do task'),
    'assigned_user' => array('type' => 'user', 'label' => 'assigned user'),
    'author' => array('type' => 'user', 'label' => 'to do author', 'handler' => 'rules_events_argument_node_author'),
  );
  $params = $params + rules_events_global_user_argument();
  return array(
    'to_do_started' => array(
      'label' => t('To do event started'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('A user clicked on the Started button.'),
    ),
    'to_do_reminder' => array(
      'label' => t('To do event reminder'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('CRON detected that a reminder should be sent.'),
    ),
    'to_do_deadline_reached' => array(
      'label' => t('To do event deadline reached'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('CRON detected that a deadline was reached.'),
    ),
    'to_do_past_deadline' => array(
      'label' => t('To do event past deadline'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('CRON detected that To do task is past its deadline.'),
    ),
    'to_do_finished' => array(
      'label' => t('To do event was completed'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('The current user clicked the Finished button of this To do task.'),
    ),
    'to_do_unpublished' => array(
      'label' => t('To do event was unpublished automatically'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('The system determined that this task was completed and could automatically be unpublished.'),
    ),
    'to_do_deleting' => array(
      'label' => t('To do event is being deleted automatically'),
      'module' => 'To do tasks',
      'arguments' => $params,
      'help' => t('The system determined that this task was completed a while back and could automatically be deleted.'),
    ),
  );
}

// vim: ts=2 sw=2 et syntax=php
