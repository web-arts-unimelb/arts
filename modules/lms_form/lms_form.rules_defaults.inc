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
            "to" : "gliang@unimelb.edu.au,[node:field-lms-uni-email]",
            "from_name" : "Mitch Buzzar",
            "from_mail" : "mitch.buzza@unimelb.edu.au",
            "subject" : "LMS, [node:field-lms-subject], [node:field-lms-full-name]",
            "body" : "\\u003Cp\\u003EUni email: [node:field-lms-uni-email]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EFull name: [node:field-lms-full-name]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPhone: [node:field-lms-phone]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESubject: [node:field-lms-subject]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EHow to create: [node:field-lms-how-create]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPrevious subject: [node:field-lms-previous-subject]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EStaff: [node:field-lms-staff-collection]\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
