<?php
/**
 * @file
 * lms_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lms_form_default_rules_configuration() {
  $items = array();
  $items['rules_lms_form_email_result'] = entity_import('rules_config', '{ "rules_lms_form_email_result" : {
      "LABEL" : "lms_form_email_result",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "lmsform" : "lmsform" } } } }
      ],
      "DO" : [
        { "mimemail" : {
            "to" : "gliang@unimelb.edu.au,[node:field_lms_uni_email]",
            "from_name" : "Mitch",
            "from_mail" : "mitch.buzza@unimelb.edu.au",
            "subject" : "Your lms nomination: [node:field_lms_subject]",
            "body" : "[node:field_lms_subject]"
          }
        }
      ]
    }
  }');
  return $items;
}
