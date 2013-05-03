<?php
/*
 * Implement hook_form_alter 
*/
function arts_webform_form_alter(&$form, &$form_state, $form_id) {

	//dsm($form_id);  // print form ID to messages
  //dsm($form);  // pretty print array using Krumo to messages

	if($form_id == 'webform_client_form_2457')
	{
		$form['#validate'][] = 'arts_webform_gsshs_booking_form_validate';
	}
}

function arts_webform_gsshs_booking_form_validate($form, &$form_state) {
  
  _set_date_error(1, $form_state);
  _set_date_error(2, $form_state);
  _set_date_error(3, $form_state);
  _set_date_error(4, $form_state);
  _set_date_error(5, $form_state);
  
}

function _set_date_error($index = null, &$form_state) {
  $fieldset_name = 'booking_fieldset'. '_'. $index;
  $date_name = 'what_date_is_your_event_being_held'. '_'. $index;
  $day = $form_state['values']['submitted'][$fieldset_name][$date_name]['day'];
  $month = $form_state['values']['submitted'][$fieldset_name][$date_name]['month'];
  $year = $form_state['values']['submitted'][$fieldset_name][$date_name]['year'];
  
  if( !empty($day) && !empty($month) && !empty($year) )	
  {	
		$submitted_unix_time = mktime(0, 0, 0, $month, $day, $year);
		$two_weeks_aheard = time() + (2 * 7 * 24 * 60 * 60);
	
		if($submitted_unix_time >= $two_weeks_aheard)
		{
			// Good
		}
		else
		{
			$msg = "Booking ". $index. ": You need to book 2 weeks aheard.";
			form_set_error($date_name, $msg);
		}
	}	
}
