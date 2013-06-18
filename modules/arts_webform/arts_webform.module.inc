<?php
/*
 * Implement hook_form_alter 
*/
function arts_webform_form_alter(&$form, &$form_state, $form_id) {
  //dsm($form_id);  // print form ID to messages
  //dsm($form);  // pretty print array using Krumo to messages

  if($form_id == 'webform_client_form_2457') {
    $form['#validate'][] = 'arts_webform_gsshs_booking_form_validate';
  }
}

function arts_webform_gsshs_booking_form_validate($form, &$form_state) {
  for ($index = 1; $index <= 5; $index++) {
    $fieldset_name = 'booking_fieldset_'. $index;
    $date_name = 'what_date_is_your_event_being_held_'. $index;
    $day = $form_state['values']['submitted'][$fieldset_name][$date_name]['day'];
    $month = $form_state['values']['submitted'][$fieldset_name][$date_name]['month'];
    $year = $form_state['values']['submitted'][$fieldset_name][$date_name]['year'];

    if (!empty($day) && !empty($month) && !empty($year)) {
      $submitted_unix_time = mktime(0, 0, 0, $month, $day, $year);
      $two_weeks_ahead = time() + (2 * 7 * 24 * 60 * 60);

      if ($submitted_unix_time < $two_weeks_ahead) {
        form_set_error($date_name, t('Booking @index: You need to book at least two weeks in advance.', array('@index' => $index)));
      }
    }
  }
}
