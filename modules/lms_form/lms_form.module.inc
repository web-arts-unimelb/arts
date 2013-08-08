<?php

//set_error_handler('exceptions_error_handler');

/*
 * Implement hook_form_alter
 */
function lms_form_form_alter(&$form, &$form_state, $form_id)
{
	// When create a new node
	if( $form_id === 'lmsform_node_form' && empty($form['nid']['#value']) )
	{
		$staff_info = _get_staff_info();
	
		$form['field_lms_uni_email']['und'][0]['email']['#default_value'] = $staff_info['uni_email'];
		$form['field_lms_full_name']['und'][0]['value']['#default_value'] = $staff_info['full_name'];
		$form['field_lms_phone']['und'][0]['value']['#default_value'] = $staff_info['phone'];
		
		drupal_set_title(t(_set_lms_form_title()));
		
		// Redirect after submission
		$form['actions']['submit']['#submit'][] = 'lms_form_submit_handler';
	}
	elseif($form_id === 'lms_survey_node_form' && empty($form['nid']['#value']))
	{
		$title = "LMS survey";
		drupal_set_title(t($title));
		
		// Redirect after submission
		$form['actions']['submit']['#submit'][] = 'lms_survey_submit_handler';
	}
}

function _get_staff_info()
{
	$path = dirname(dirname(dirname(__FILE__))). "/misc/confidential/ldap.php";
	if(!file_exists($path))
	{
		return;
	}
	else
	{
		include_once($path);
	}

	$output = array();
	$output["uni_email"] = "";
	$output["full_name"] = "";
	$output["phone"] = "";

	$ldap_username = $arts_ldap["ad1"]["username"];
	$ldap_password = $arts_ldap["ad1"]["password"];
	$ldap_url = $arts_ldap["ad1"]["url"];
	$ldap_port = $arts_ldap["ad1"]["port"];

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

/*
 * hook_url_inbound_alter
 */
function lms_form_url_inbound_alter(&$path, $original_path, $path_language)
{
	if(preg_match('|^node/add/lmsform(/.*)?|', $path, $matches)) 
	{
  	global $user;
  	if(_does_user_complete_survey($user->name))
  	{
 			// Stay
  	}
  	else
  	{
  		// Go to the lms form
  		$path = "node/add/lms-survey";
  		drupal_goto($path);
  	}
  }
}

// lms
function _does_user_complete_survey($username)
{
	$condi = false;
	
	if(_does_user_complete_survey_in_lms_db($username))
	{
		$condi = true;
	}
	else
	{
		if(_does_user_complete_survey_in_drupal_db($username))
		{
			$condi = true;
		}
		else
		{
			$condi = false;
		}
	}
	
	return $condi;
}


function _does_user_complete_survey_in_lms_db($username)
{
	// Back to default db
  db_set_active();

	$condi = false;

	$path = dirname(dirname(dirname(__FILE__))). "/misc/confidential/external_db.php";
	if(file_exists($path))
	{
		include_once($path);
	
		$other_database = array(
      'database' => $external_db['lms']['dbname'],
      'username' => $external_db['lms']['username'],
      'password' => $external_db['lms']['password'],
      'host' => $external_db['lms']['host'],
      'driver' => 'mysql',
		);
		// replace 'YourDatabaseKey' with something that's unique to your module
		Database::addConnectionInfo('lms_database_key', 'default', $other_database);
		db_set_active('lms_database_key');

		$sql = "SELECT COUNT(*) FROM record WHERE username = '$username'";
		$result = db_query($sql);
	
		if($result->rowCount() > 0)
		{
		  $condi = true;
		}
		else
		{
		  $condi = false;
		}
	}
	else
	{
		$condi = false;
	}

	// Back to default db
  db_set_active();

	return $condi;
}

function _does_user_complete_survey_in_drupal_db($username)
{
	$account = user_load_by_name($username);
	if($account)
	{
		$sql = "SELECT * FROM {node} WHERE uid = '$account->uid' AND type = 'lms_survey'";	
		$result = db_query($sql);
		
		if($result->rowCount() > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

function _set_lms_form_title()
{
	$curr_year_display = date("Y");
	$curr_month = date("n");
	
	if($curr_month <= 6)
	{
		$curr_month_display = "Semester One, January - June";
	}
	else
	{
		$curr_month_display = "Semester Two, July - December";
	}
	
	$return_title = "LMS Subject Nomination: $curr_month_display, $curr_year_display";
	
	return $return_title;
}

function lms_survey_submit_handler(&$form, &$form_state) 
{
  $form_state['redirect'] = 'node/add/lmsform';
}

function lms_form_submit_handler(&$form, &$form_state)
{
	$msg = "";
	unset($_SESSION['messages']);
	drupal_set_message($msg);
	
	$form_state['redirect'] = _lms_confirmation_page();
}

function _lms_confirmation_page()
{
	global $base_root;
	$confirmation_uri = "lms-nomination-success";
	$confirmation_page_title = "LMS nomination";
	
	if(_is_node_exist($confirmation_page_title))
	{
		
	}
	else
	{
		_create_lms_confirmation_page($confirmation_uri, $confirmation_page_title);
	}
	
	return $confirmation_uri;
}

function _create_lms_confirmation_page($confirmation_uri, $confirmation_page_title)
{
	//creating a bare node
	$node = new StdClass();
		
	//giving it type
	$node->type = 'page';
	
	//give it a published staus
	$node->status = 1;
	$node->language = LANGUAGE_NONE;	
	$node->uid = 1;
	
	//gives title
	$node->title = $confirmation_page_title;
	
	//gives body
	$page_body = "You have sucessfully submitted a LMS nomination.";
	$node->body[$node->language] = array(0 => array('format'=> 'full_html', 'value' => $page_body));
  $node->path = array('alias' => $confirmation_uri);
	
	//save it and give it the rest of the attributes
	node_save($node);
}

function _is_node_exist($node_title)
{
	$row = db_query('SELECT nid FROM {node} WHERE title = :mytitle', array(':mytitle' => $node_title))->fetchField();
 	
 	if($row) 
 	{
    return true;
 	} 
 	else 
 	{
    return false;
 	}
}
