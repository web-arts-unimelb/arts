<?php

set_error_handler('exceptions_error_handler');

/*
 * Implement hook_form_alter
 */
function lms_form_form_alter(&$form, &$form_state, $form_id)
{
	//dsm($form['field_lms_subject']);

	if($form_id === 'lmsform_node_form')
	{
		$staff_info = _get_staff_info();
	
		$form['field_lms_uni_email']['und'][0]['email']['#default_value'] = $staff_info['uni_email'];
		$form['field_lms_full_name']['und'][0]['value']['#default_value'] = $staff_info['full_name'];
		$form['field_lms_phone']['und'][0]['value']['#default_value'] = $staff_info['phone'];
		
		
		
	}
	else
	{
	
	}
}

function _get_staff_info()
{
	$output = array();
	$output["uni_email"] = "";
	$output["full_name"] = "";
	$output["phone"] = "";

	$ldap_username = "100us-WebLDAP";
	$ldap_password = "Fursday...";
	$ldap_url = "ldaps://ad1.unimelb.edu.au";
	$ldap_port = 636;

	global $user;
	$search_cn = $user->name;

	$ldap_conn = ldap_connect($ldap_url, $ldap_port) or die("Could not connect to LDAP server.");
	// If you try to perform the searches on Windows 2003 Server Active Directory or above, 
	// it seems 	that you have to set the LDAP_OPT_REFERRALS option to 0:
	ldap_set_option($ldap_conn, LDAP_OPT_REFERRALS, 0);
	ldap_set_option($ldap_conn, LDAP_OPT_PROTOCOL_VERSION, 3);
	
	// Bind
	$ldap_dn_account = "cn=$ldap_username,ou=Local Accounts,ou=100,ou=Business Units,dc=unimelb,dc=edu,dc=au";	
	//$ldap_dn_search = "dc=staff,dc=unimelb,dc=edu,dc=au";
	$ldap_dn_search = "dc=unimelb,dc=edu,dc=au";
	
	if($ldap_conn)
	{
		try
		{
			$ldap_bind = ldap_bind($ldap_conn, $ldap_dn_account, $ldap_password);
		}
		catch(Exception $e)
		{
			drupal_set_message(t('Fail at ldap_conn'), 'error');
			
			//print_r($e);
			//die;
		}
	
		if($ldap_bind) 
		{
    	try
			{
				$filter = "(cn=$search_cn)";
				$ldap_search_res = ldap_search($ldap_conn, $ldap_dn_search, $filter); 	
				$info = ldap_get_entries($ldap_conn, $ldap_search_res);

				$output["uni_email"] = $info[0]["mail"][0];
				$output["full_name"] = $info[0]["displayname"][0];
				$output["phone"] = $info[0]["telephonenumber"][0];
			}
			catch(Exception $e)
			{
				// Not able to find the user
				// Die silently.
				
				//print_r($e);
				//die;
			}
    } 
    else 
    {

    }
	}
	else
	{
		//print_r($e);
		//die;
	
		drupal_set_message(t('Fail at ldap_conn'), 'error');
	}
	

	return $output;
}

function exceptions_error_handler($severity, $message, $filename, $lineno) 
{
	if(error_reporting() == 0) 
	{
    	return;
	}
	if(error_reporting() & $severity) 
	{
  	throw new ErrorException($message, 0, $severity, $filename, $lineno);
	}
}
