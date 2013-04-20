<?php
/**
 * @file
 * lms_form.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function lms_form_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_lms_staff_collection-field_lms_staff_name'.
  $fields['field_collection_item-field_lms_staff_collection-field_lms_staff_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_staff_name',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'lms_staff_name',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_lms_staff_collection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_lms_staff_name',
      'label' => 'Staff name',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_lms_staff_collection-field_lms_staff_role'.
  $fields['field_collection_item-field_lms_staff_collection-field_lms_staff_role'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_staff_role',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'lms_staff_role',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_lms_staff_collection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_lms_staff_role',
      'label' => 'Staff role',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_full_name'.
  $fields['node-lmsform-field_lms_full_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_full_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_full_name',
      'label' => 'Full name',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'complete_full_html' => 'complete_full_html',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'plain_text' => 'plain_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'complete_full_html' => array(
                'weight' => '0',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '0',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_notice'.
  $fields['node-lmsform-field_lms_notice'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_notice',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'complete_full_html',
          'value' => '<div class="form-item">
Please nominate your subjects for the Learning Management System (LMS). You will receive a confirmation email if your registration was successful.
</div>',
        ),
      ),
      'translatable' => '0',
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'markup',
          'settings' => array(),
          'type' => 'markup_default',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_notice',
      'label' => 'Notice',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_phone'.
  $fields['node-lmsform-field_lms_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_phone',
      'label' => 'Phone',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'complete_full_html' => 'complete_full_html',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'plain_text' => 'plain_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'complete_full_html' => array(
                'weight' => '0',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '0',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_previous_subject'.
  $fields['node-lmsform-field_lms_previous_subject'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_previous_subject',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_previous_subject',
      'label' => 'Previous subject',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'complete_full_html' => 'complete_full_html',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'plain_text' => 'plain_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'complete_full_html' => array(
                'weight' => '0',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '0',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_widgets',
        'settings' => array(
          'autocomplete_case' => '0',
          'autocomplete_match' => 'contains',
          'autocomplete_xss' => '0',
          'i18n_flddata' => 0,
          'order' => 'ASC',
          'size' => '60',
          'suggested_values' => '038AB_2012_MDYI:  Master of Art Curatorship (Coursework and Minor Thesis)
038AB_2012_STYI:  Master of Art Curatorship (Coursework and Minor Thesis)
038AB_2012_SUMI:  Master of Art Curatorship (Coursework and Minor Thesis)
038AB_2013_MDYI:  Master of Art Curatorship (Coursework and Minor Thesis)
038AB_2013_STYI:  Master of Art Curatorship (Coursework and Minor Thesis)
095CM_2012_MDYI:  Postgraduate Diploma in Arts (Cultural Material Conservation)
095CM_2012_STYI:  Postgraduate Diploma in Arts (Cultural Material Conservation)
095CM_2013_STYI:  Postgraduate Diploma in Arts (Cultural Material Conservation)
095EC_2012_MDYI:  Postgraduate Diploma in Arts (Editing and Communications)
095EC_2012_STYI:  Postgraduate Diploma in Arts (Editing and Communications)
095EC_2012_SUMI:  Postgraduate Diploma in Arts (Editing and Communications)
095EC_2013_MDYI:  Postgraduate Diploma in Arts (Editing and Communications)
095EC_2013_STYI:  Postgraduate Diploma in Arts (Editing and Communications)
095MC_2012_STYI:  Postgraduate Diploma in Arts (Media and Communication)
095MC_2012_MDYI:  Postgraduate Diploma in Arts (Media and Communication)
095MC_2012_SUMI:  Postgraduate Diploma in Arts (Media and Communication)
095MC_2013_MDYI:  Postgraduate Diploma in Arts (Media and Communication)
095MC_2013_STYI:  Postgraduate Diploma in Arts (Media and Communication)
097AB_2012_MDYI:  Master of Development Studies(CWT)
097AB_2012_STYI:  Master of Development Studies(CWT)
097AB_2013_MDYI:  Master of Development Studies(CWT)
097AB_2013_STYI:  Master of Development Studies(CWT)
097AB_2013_SUMI:  Master of Development Studies(CWT)
097AB_2013_MDYI:  Master of Development Studies
097AB_2013_STYI:  Master of Development Studies
097GD_2012_MDYI:  Master of Development Studies (Gender & Development)
097GD_2012_STYI:  Master of Development Studies (Gender & Development)
097GD_2013_MDYI:  Master of Development Studies (Gender & Development)
097GD_2013_STYI:  Master of Development Studies (Gender & Development)
101AA_2012_RS1:  Ph.D.- Arts
101AA_2012_RS2:  Ph.D.- Arts
101AA_2013_RS1:  Ph.D.- Arts
101AA_2013_RS2:  Ph.D.- Arts
102AD_2012_RS1:  Master of Arts in Applied Linguistics (Thesis)
102AD_2012_RS2:  Master of Arts in Applied Linguistics (Thesis)
102AE_2012_RS1:  M.A.Applied Linguistics (Advanced Seminars and Shorter Thesis)
102AE_2012_RS2:  M.A.Applied Linguistics (Advanced Seminars and Shorter Thesis)
102AR_2012_RS1:  Master of Arts (Research)
102CD_2012_RS1:  Master of Arts (Screen Studies)
102CD_2012_RS2:  Master of Arts (Screen Studies)
102CD_2013_RS1:  Master of Arts (Screen Studies)
102CE_2012_RS1:  Master of Arts in Classics and Archaeology (Thesis)
102CE_2012_RS2:  Master of Arts in Classics and Archaeology (Thesis)
102CE_2013_RS1:  Master of Arts in Classics and Archaeology (Thesis)
102CS_2013_RS1:  Master of Arts (Cultural Material Conservation)
102CW_2012_RS1:  Master of Arts (Creative Writing) (Research/Creative)
102CW_2012_RS2:  Master of Arts (Creative Writing) (Research/Creative)
102CW_2013_RS1:  Master of Arts (Creative Writing) (Research/Creative)
102DB_2013_RS1:  Master of Arts in Criminology (Thesis)
102DS_2012_RS1:  Master of Arts in Development Studies(Thesis only)
102DS_2012_RS2:  Master of Arts in Development Studies(Thesis only)
102DS_2013_RS1:  Master of Arts in Development Studies(Thesis only)
102DS_2013_RS2:  Master of Arts in Development Studies(Thesis only)
102EA_2012_RS1:  Master of Arts in English Language and Literature (Thesis)
102EA_2012_RS2:  Master of Arts in English Language and Literature (Thesis)
102EA_2013_RS1:  Master of Arts in English Language and Literature (Thesis)
102EE_2012_RS1:  M.A.Cultural Studies (Thesis)
102EE_2012_RS2:  M.A.Cultural Studies (Thesis)
102EE_2013_RS1:  M.A.Cultural Studies (Thesis)
102EU_2012_MDYI:  Master of Arts in Professional and Applied Ethics
102EU_2012_STYI:  Master of Arts in Professional and Applied Ethics
102EU_2013_MDYI:  Master of Arts in Professional and Applied Ethics
102EU_2013_STYI:  Master of Arts in Professional and Applied Ethics
102FC_2012_RS1:  Master of Arts (Art History)(Thesis)
102FC_2013_RS2:  Master of Arts (Art History)(Thesis)
102FD_2012_RS1:  Master of Arts in Art History (Advanced Seminars and Shorter Thesis)
102GB_2012_RS1:  Master of Arts in French Language and Literature (Thesis)
102GB_2013_RS2:  Master of Arts in French Language and Literature (Thesis)
102ID_2012_RS1:  Master of Arts in Russian (Thesis)
102IJ_2012_RS1:  Master of Arts in Philosophy (International Justice)(Adv.Seminars&ShTh)
102IJ_2012_RS2:  Master of Arts in Philosophy (International Justice)(Adv.Seminars&ShTh)
102IN_2012_RS1:  Master of Arts (Indonesian Studies) by Thesis
102IO_2012_RS1:  Master of Arts (International Studies)(Adv. Seminars and Shorter Thesis)
102IP_2012_RS1:  M.A.International Politics (Advanced Seminars and Shorter Thesis)
102IS_2012_RS1:  Master of Arts (Islamic Studies) by Research
102IS_2013_RS1:  Master of Arts (Islamic Studies) by Research
102JB_2012_RS1:  Master of Arts in History (Thesis)
102JB_2012_RS2:  Master of Arts in History (Thesis)
102JB_2013_RS1:  Master of Arts in History (Thesis)
102JB_2013_RS2:  Master of Arts in History (Thesis)
102JD_2012_RS2:  Master of Arts in Gender Studies (Thesis)
102JE_2012_RS1:  Master of Arts in Gender Studies (Advanced Seminars and Shorter Thesis)
102JT_2012_RS1:  M.A Jewish Studies (Thesis)
102JT_2012_RS2:  M.A Jewish Studies (Thesis)
102KB_2012_RS1:  Master of Arts in Anthropology (Thesis)
102KD_2012_RS1:  Master of Arts in History and Philosophy of Science (Thesis)
102KD_2012_RS2:  Master of Arts in History and Philosophy of Science (Thesis)
102KD_2013_RS1:  Master of Arts in History and Philosophy of Science (Thesis)
102KD_2013_RS2:  Master of Arts in History and Philosophy of Science (Thesis)
102KH_2012_RS1:  Master of Arts in Social Theory (Advanced Seminars and Shorter Thesis)
102KH_2013_RS1:  Master of Arts in Social Theory (Advanced Seminars and Shorter Thesis)
102MA_2012_RS1:  Master of Arts in Linguistics (Thesis)
102MA_2012_RS2:  Master of Arts in Linguistics (Thesis)
102MA_2013_RS1:  Master of Arts in Linguistics (Thesis)
102MM_2012_RS1:  Master of Arts (Media and Communication) Adv.Seminar & Shorter Thesis
102MM_2013_RS1:  Master of Arts (Media and Communication) Adv.Seminar & Shorter Thesis
102MT_2012_RS1:  Master of Arts (Media and Communication) Thesis
102NB_2012_RS1:  Master of Arts in Philosophy (Thesis)
102NB_2012_RS2:  Master of Arts in Philosophy (Thesis)
102NB_2013_RS1:  Master of Arts in Philosophy (Thesis)
102NC_2012_RS1:  Master of Arts in Philosophy (Advanced Seminars and Shorter Thesis)
102NC_2012_RS2:  Master of Arts in Philosophy (Advanced Seminars and Shorter Thesis)
102NC_2013_RS1:  Master of Arts in Philosophy (Advanced Seminars and Shorter Thesis)
102OB_2012_RS1:  Master of Arts in Political Science (Thesis)
102OB_2012_RS2:  Master of Arts in Political Science (Thesis)
102OB_2013_RS1:  Master of Arts in Political Science (Thesis)
102OB_2013_RS2:  Master of Arts in Political Science (Thesis)
102PS_2012_RS1:  Master of Arts (Policy Studies)(Advanced Seminars & Shorter Thesis)
102PS_2013_RS1:  Master of Arts (Policy Studies)(Advanced Seminars & Shorter Thesis)
102SR_2012_RS1:  Master of Arts (Sociology) by Research
102SR_2012_RS2:  Master of Arts (Sociology) by Research
102SR_2013_RS1:  Master of Arts (Sociology) by Research
104AA_2012_MDYI:  Bachelor of Arts (Degree with Honours)
104AA_2012_STYI:  Bachelor of Arts (Degree with Honours)
104AA_2012_SUMI:  Bachelor of Arts (Degree with Honours)
104AA_2013_STYI:  Bachelor of Arts (Degree with Honours)
104MC_2012_MDYI:  Bachelor of Arts (Honours)(Media and Communications)
104MC_2012_STYI:  Bachelor of Arts (Honours)(Media and Communications)
104PY_2012_STYI:  Bachelor of Arts (Honours) in Psychology
104PY_2013_STYI:  Bachelor of Arts (Honours) in Psychology
105AA_2012_MDYI:  Bachelor of Arts
105AA_2012_STYI:  Bachelor of Arts
105MC_2012_STYI:  Bachelor of Arts(Media and Communications)
175AA_2012_MDYI:  Master of Arts and Cultural Management
175AA_2012_STYI:  Master of Arts and Cultural Management
175AA_2013_MDYI:  Master of Arts and Cultural Management
175AA_2013_STYI:  Master of Arts and Cultural Management
175AA_2013_SUMI:  Master of Arts and Cultural Management
199AA_2012_MDYI:  Complementary Course - Arts
199AA_2012_STYI:  Complementary Course - Arts
199AA_2012_SUMI:  Complementary Course - Arts
199AA_2013_STYI:  Complementary Course - Arts
199AA_2013_SUMI:  Complementary Course - Arts
274AB_2012_MDYI:  Master of Criminology (CWT)
274AB_2012_STYI:  Master of Criminology (CWT)
274AB_2012_SUMI:  Master of Criminology (CWT)
274AB_2013_MDYI:  Master of Criminology (CWT)
274AB_2013_STYI:  Master of Criminology (CWT)
344AB_2012_MDYI:  Master of Public Policy and Management (Coursework)
344AB_2012_STYI:  Master of Public Policy and Management (Coursework)
344AB_2012_SUMI:  Master of Public Policy and Management (Coursework)
344AB_2013_MDYI:  Master of Public Policy and Management (Coursework)
344AB_2013_STYI:  Master of Public Policy and Management (Coursework)
344AB_2013_MDYI:  Master of Public Policy and Management
344AB_2013_STYI:  Master of Public Policy and Management
344AB_2013_SUMI:  Master of Public Policy and Management
377DS_2012_STYI:  Postgraduate Certificate in Arts (Development Studies)
377EC_2012_MDYI:  Postgraduate Certificate in Arts (Editing and Communications)
377EC_2012_STYI:  Postgraduate Certificate in Arts (Editing and Communications)
377EC_2012_SUMI:  Postgraduate Certificate in Arts (Editing and Communications)
377EC_2013_MDYI:  Postgraduate Certificate in Arts (Editing and Communications)
377EC_2013_STYI:  Postgraduate Certificate in Arts (Editing and Communications)
377EC_2013_SUMI:  Postgraduate Certificate in Arts (Editing and Communications)
377MC_2012_MDYI:  Postgraduate Certificate in Arts (Media and Communication)
467AA_2012_MDYI:  Postgraduate Diploma in Professional Ethics
467AA_2012_STYI:  Postgraduate Diploma in Professional Ethics
467AA_2013_MDYI:  Postgraduate Diploma in Professional Ethics
467AA_2013_STYI:  Postgraduate Diploma in Professional Ethics
469AA_2012_MDYI:  Postgraduate Certificate in Professional Ethics
469AA_2012_STYI:  Postgraduate Certificate in Professional Ethics
469AA_2013_STYI:  Postgraduate Certificate in Professional Ethics
706AA_2012_MDYI:  Master of Social Policy
706AA_2012_STYI:  Master of Social Policy
706AA_2013_MDYI:  Master of Social Policy
706AA_2013_STYI:  Master of Social Policy
721IN_2012_STYI:  Postgraduate Diploma in International Studies
819CA_2012_MDYI:  Bachelor of Creative Arts(Honours)
822AA_2012_MDYI:  Postgraduate Diploma in Arts and Cultural Management
822AA_2012_STYI:  Postgraduate Diploma in Arts and Cultural Management
822AA_2012_SUMI:  Postgraduate Diploma in Arts and Cultural Management
822AA_2013_MDYI:  Postgraduate Diploma in Arts and Cultural Management
822AA_2013_STYI:  Postgraduate Diploma in Arts and Cultural Management
888CH_2012_SUMI:  Diploma in Modern Languages (Chinese)
888JA_2012_STYI:  Diploma in Modern Languages (Japanese)
888SP_2012_STYI:  Diploma in Modern Languages (Spanish)
C98AA_2012_MDYI:  Intensive Academic Program
C98AA_2012_SUMI:  Intensive Academic Program
C98AA_2013_SUMI:  Intensive Academic Program
D01LF_2012_STYI:  Master of Creative Writing, Publishing and Editing
D01LF_2012_MDYI:  Master of Creative Writing, Publishing and Editing
D01LF_2012_SUMI:  Master of Creative Writing, Publishing and Editing
D01LF_2013_MDYI:  Master of Creative Writing, Publishing and Editing
D01LF_2013_STYI:  Master of Creative Writing, Publishing and Editing
MC-IR_2012_MDYI:  Master of International Relations
MC-IR_2012_STYI:  Master of International Relations
MC-IR_2012_SUMI:  Master of International Relations
MC-IR_2013_MDYI:  Master of International Relations
MC-IR_2013_STYI:  Master of International Relations
B-ARTS_2012_STYI:  Bachelor of Arts
B-ARTS_2012_MDYI:  Bachelor of Arts
B-ARTS_2012_SUMI:  Bachelor of Arts
B-ARTS_2013_MDYI:  Bachelor of Arts
B-ARTS_2013_STYI:  Bachelor of Arts
B-ARTS_2013_SUMI:  Bachelor of Arts
D-LANG_2012_STYI:  Diploma in Languages
D-LANG_2012_MDYI:  Diploma in Languages
D-LANG_2012_SUMI:  Diploma in Languages
D-LANG_2013_MDYI:  Diploma in Languages
D-LANG_2013_STYI:  Diploma in Languages
D-LANG_2013_SUMI:  Diploma in Languages
MC-EMA_2012_MDYI:  Executive Master of Arts
MC-EMA_2012_STYI:  Executive Master of Arts
MC-EMA_2012_SUMI:  Executive Master of Arts
MC-EMA_2013_MDYI:  Executive Master of Arts
MC-EMA_2013_STYI:  Executive Master of Arts
NA-U21_2012_MDYI:  U21 Program in Global Issues
NA-U21_2012_STYI:  U21 Program in Global Issues
BH-ARTS_2012_MDYI:  Bachelor of Arts (Degree with Honours)
BH-ARTS_2012_STYI:  Bachelor of Arts (Degree with Honours)
BH-ARTS_2013_MDYI:  Bachelor of Arts (Degree with Honours)
BH-ARTS_2013_STYI:  Bachelor of Arts (Degree with Honours)
GC-ARTS_2012_MDYI:  Graduate Certificate in Arts
GC-ARTS_2012_STYI:  Graduate Certificate in Arts
GC-ARTS_2012_SUMI:  Graduate Certificate in Arts
GC-ARTS_2013_MDYI:  Graduate Certificate in Arts
GC-ARTS_2013_STYI:  Graduate Certificate in Arts
GC-ARTS_2013_SUMI:  Graduate Certificate in Arts
GD-ARTS_2012_MDYI:  Graduate Diploma in Arts
GD-ARTS_2012_STYI:  Graduate Diploma in Arts
GD-ARTS_2012_SUMI:  Graduate Diploma in Arts
GD-ARTS_2013_MDYI:  Graduate Diploma in Arts
GD-ARTS_2013_STYI:  Graduate Diploma in Arts
GD-ARTS_2013_SUMI:  Graduate Diploma in Arts
PC-ARTS_2012_MDYI:  Postgraduate Certificate in Arts
PC-ARTS_2012_STYI:  Postgraduate Certificate in Arts
PC-ARTS_2012_SUMI:  Postgraduate Certificate in Arts
PC-ARTS_2013_MDYI:  Postgraduate Certificate in Arts
PC-ARTS_2013_STYI:  Postgraduate Certificate in Arts
PC-ARTS_2013_SUMI:  Postgraduate Certificate in Arts
PD-ARTS_2012_STYI:  Postgraduate Diploma in Arts
PD-ARTS_2012_MDYI:  Postgraduate Diploma in Arts
PD-ARTS_2013_MDYI:  Postgraduate Diploma in Arts
PD-ARTS_2013_STYI:  Postgraduate Diploma in Arts
PD-ARTS_2013_SUMI:  Postgraduate Diploma in Arts
MC-CULMC_2012_MDYI:  Master of Cultural Material Conservation
MC-CULMC_2012_STYI:  Master of Cultural Material Conservation
MC-CULMC_2012_SUMI:  Master of Cultural Material Conservation
MC-CULMC_2013_MDYI:  Master of Cultural Material Conservation
MC-CULMC_2013_STYI:  Master of Cultural Material Conservation
MC-GMCOM_2012_MDYI:  Master of Global Media Communication
MC-GMCOM_2012_STYI:  Master of Global Media Communication
MC-GMCOM_2013_MDYI:  Master of Global Media Communication
MC-GMCOM_2013_STYI:  Master of Global Media Communication
MC-JOURN_2012_MDYI:  Master of Journalism
MC-JOURN_2012_STYI:  Master of Journalism
MC-JOURN_2013_MDYI:  Master of Journalism
MC-JOURN_2013_STYI:  Master of Journalism
ACUR90001_2012_JUL:  Issues in Art Conservation
ACUR90001_2013_JUL:  Issues in Art Conservation
ACUR90002_2012_SM1:  Art Museums and Curatorship
ACUR90002_2013_SM1:  Art Museums and Curatorship
ACUR90004_2012_SM1:  Minor Thesis - Art Curatorship
ACUR90004_2012_SM2:  Minor Thesis - Art Curatorship
ACUR90004_2013_SM1:  Minor Thesis - Art Curatorship
ACUR90004_2013_SM2:  Minor Thesis - Art Curatorship
ACUR90005_2012_SM2:  Interpreting Exhibitions
ACUR90005_2013_SM2:  Interpreting Exhibitions
ACUR90006_2013_SM2:  Project Management in the Arts
AHIS10001_2012_SM1:  Art History: Theory and Controversy
AHIS10001_2013_SM1:  Art History: Theory and Controversy
AHIS10002_2012_SM2:  Modern Art: The Politics of the New
AHIS10002_2013_SM2:  Modern Art: The Politics of the New
AHIS20002_2012_SM1:  Australian Art
AHIS20002_2013_SM1:  Australian Art
AHIS20011_2012_SM2:  Renaissance Art in Florence and Venice
AHIS20011_2013_SM1:  Renaissance Art in Florence and Venice
AHIS20016_2012_SM1:  Art and Revolution
AHIS20016_2013_SM1:  Art and Revolution
AHIS20018_2012_SM2:  Art, Market and Methods
AHIS20019_2012_SM2:  Art in Medieval Europe
AHIS20019_2013_SM2:  Art in Medieval Europe
AHIS20020_2012_SM2:  Avant-Garde and Postmodern Art
AHIS20020_2013_SM2:  Avant-Garde and Postmodern Art
AHIS30002_2012_JUN:  Art Fieldwork
AHIS30003_2013_SM2:  Baroque Art in Polycentric Europe
AHIS30005_2012_SM2:  Contemporary Aboriginal Art
AHIS30019_2012_SM2:  Art History in the World
AHIS30019_2013_SM2:  Art History in the World
AHIS30020_2012_SM1:  Contemporary Art
AHIS30020_2013_SM1:  Contemporary Art
AHIS30021_2013_SM1:  The Medieval Image: Art and Culture
AHIS40005_2012_SM2:  Trauma & Spectacle: Postwar European Art
AHIS40006_2013_SM1:  Postcolonial Visual Art
AHIS40007_2012_SM1:  The Artist\'s Body
AHIS40008_2013_SM2:  Futurism and Fascist Art in Italy
AHIS40013_2012_JUN:  Advanced Art Fieldwork
AHIS40015_2013_SM2:  Histories and Theories of Conservation
AHIS40016_2012_JUN:  Aboriginal Art in the Northern Territory
AHIS40017_2012_SM1:  Art History Thesis
AHIS40017_2012_SM2:  Art History Thesis
AHIS40017_2013_SM1:  Art History Thesis
AHIS40017_2013_SM2:  Art History Thesis
AHIS40019_2012_SM1:  The Book In Medieval & Renaissance Art
AHIS40019_2013_SM1:  The Book In Medieval & Renaissance Art
AHIS40020_2013_NOV:  Museology in Florence
AHIS40021_2013_SM1:  Art History Thesis
AHIS40021_2013_SM2:  Art History Thesis
AHIS90001_2012_RS1:  Major Thesis - Art History
AHIS90002_2012_RS1:  Shorter Thesis - Art History
AHIS90004_2012_SM2:  The Virtual Print Room
AHIS90005_2012_SM1:  History and Philosophy of Museums
AHIS90005_2013_SM1:  History and Philosophy of Museums
AHIS90006_2012_SM2:  Theories of Art History
AHIS90006_2013_SM1:  Theories of Art History
AHIS90007_2013_SM2:  Biennales, Triennales and Documentas
AHIS90008_2013_SM1:  Writing About Art and the Moving Image
AIND10001_2012_SM1:  Communication and Performance 1
AIND10001_2013_SM1:  Communication and Performance 1
AIND10002_2012_SM2:  Communication and Performance 2
AIND10002_2013_SM2:  Communication and Performance 2
AIND20005_2012_SM2:  Aboriginal Land, Law and Philosophy
AIND20005_2013_SM2:  Aboriginal Land, Law and Philosophy
AIND20007_2012_SM1:  Key Thinkers and Concepts
AIND20007_2013_SM1:  Key Thinkers and Concepts
AIND20008_2012_SM1:  Aboriginal Women and Coloniality
AIND20008_2013_SM1:  Aboriginal Women and Coloniality
AIND20009_2012_SM1:  Racial Literacy: Indigeneity & Whiteness
AIND20009_2013_SM1:  Racial Literacy: Indigeneity & Whiteness
AIND20010_2012_SM2:  Australian Environmental Philosophy
AIND20010_2013_SM2:  Australian Environmental Philosophy
AIND30007_2012_SM2:  Critical Debates in Indigenous Studies
AIND30007_2013_SM2:  Critical Debates in Indigenous Studies
AIND30008_2012_SM1:  Historicising the Colonial Past
AIND30008_2013_SM1:  Historicising the Colonial Past
AIND30010_2012_SM1:  Aboriginal Cultural Studies
AIND30010_2013_SM1:  Aboriginal Cultural Studies
AIND30011_2012_SM2:  Aboriginal Writing
AIND30011_2013_SM2:  Aboriginal Writing
AIND40001_2012_SM2:  First Principles
AIND40001_2013_SM2:  First Principles
AIND40002_2012_SM1:  Australian Indigenous Studies Thesis
AIND40002_2013_SM1:  Australian Indigenous Studies Thesis
AIND40002_2013_SM2:  Australian Indigenous Studies Thesis
AIND40003_2012_SM1:  Activism, Revolution and Social Change
AIND40003_2013_SM1:  Activism, Selves and Histories
AIND40004_2012_SM2:  Selves and History
AIND40005_2012_SM1:  Textual Revelations
AIND40005_2013_SM1:  Textual Revelations
AIND40006_2013_SM1:  Australian Indigenous Studies Thesis
AIND40006_2013_SM2:  Australian Indigenous Studies Thesis
AIND90001_2013_RS1:  Major Thesis (Aust. Indigenous Studies)
AMGT50001_2012_FEB:  Art and Cultural Management in Asia
AMGT50001_2013_FEB:  Art and Cultural Management in Asia
AMGT90001_2012_SM2:  Arts Management
AMGT90001_2013_SM2:  Arts Management
AMGT90002_2012_SM1:  Arts Law
AMGT90002_2013_SM1:  Arts Law
AMGT90004_2012_SM1:  Arts Policy and Issues
AMGT90004_2013_SM1:  Arts Policy and Issues
AMGT90006_2012_SM2:  Audience and the Arts
AMGT90006_2013_SM2:  Audience and the Arts
AMGT90007_2012_SM1:  Advanced Arts Management
AMGT90007_2013_SM1:  Advanced Arts Management
AMGT90008_2012_SM2:  Project Management in the Arts
AMGT90011_2012_SM2:  Advanced Arts Policy
AMGT90011_2013_SM2:  Advanced Arts Policy
AMGT90012_2012_SM2:  Managing Creative Content
AMGT90012_2013_SM2:  Managing Creative Content
AMGT90013_2012_SM1:  Finance and Budgeting
AMGT90013_2013_SM1:  Finance and Budgeting
AMGT90014_2012_SM1:  Directed Reading in Cultural Management
AMGT90014_2012_SM2:  Directed Reading in Cultural Management
AMGT90014_2013_SM1:  Directed Reading in Cultural Management
AMGT90014_2013_SM2:  Directed Reading in Cultural Management
AMGT90015_2012_SM2:  Cultural Management Project (Sem Long)
AMGT90015_2013_SM1:  Cultural Management Project (Sem Long)
AMGT90015_2013_SM2:  Cultural Management Project (Sem Long)
AMGT90016_2012_SM1:  Cultural Management Project (Year Long)
AMGT90016_2012_SM2:  Cultural Management Project (Year Long)
AMGT90016_2013_SM1:  Cultural Management Project (Year Long)
AMGT90016_2013_SM2:  Cultural Management Project (Year Long)
AMGT90017_2012_SM1:  Communicating the Arts
AMGT90017_2013_SM1:  Communicating the Arts
AMGT90018_2012_SM2:  The Economics of Culture
AMGT90018_2013_SM2:  The Economics of Culture
AMGT90019_2012_SM1:  Minor Thesis - Arts Management
AMGT90019_2012_SM2:  Minor Thesis - Arts Management
AMGT90019_2013_SM1:  Minor Thesis - Arts Management
AMGT90019_2013_SM2:  Minor Thesis - Arts Management
AMGT90024_2012_SM1:  Cultural Festivals and Special Events
AMGT90024_2013_SM1:  Cultural Festivals and Special Events
ANCW10001_2012_SM1:  Ancient Egypt and Mesopotamia
ANCW10001_2013_SM1:  Ancient Egypt and Mesopotamia
ANCW10002_2012_SM2:  Myth, Art and Empire: Greece and Rome
ANCW10002_2013_SM2:  Myth, Art and Empire: Greece and Rome
ANCW10003_2012_WIN:  Ancient Near Eastern Language: Akkadian
ANCW10004_2012_SUM:  Ancient Near Eastern Language: Syriac
ANCW10004_2013_JAN:  Ancient Near Eastern Language: Syriac
ANCW10005_2013_FEB:  Ancient Near Eastern Language: Egyptian
ANCW20003_2013_SM1:  Egypt Under the Pharaohs
ANCW20008_2012_SM2:  Augustan Rome
ANCW20010_2012_SM2:  Ancient Greece: Archaic to Classical
ANCW20010_2013_SM2:  Ancient Greece: Archaic to Classical
ANCW20013_2012_SM2:  Egyptian and Near Eastern Mythology
ANCW20013_2013_SM2:  Egyptian and Near Eastern Mythology
ANCW20015_2012_SM1:  Classical Mythology
ANCW20015_2013_SM1:  Classical Mythology
ANCW20017_2012_WIN:  Ancient Near Eastern Language: Akkadian
ANCW20018_2012_SUM:  Ancient Near Eastern Language: Syriac
ANCW20018_2013_JAN:  Ancient Near Eastern Language: Syriac
ANCW20019_2012_SM1:  The Rise and Fall of the Roman Republic
ANCW20019_2013_SM1:  The Rise and Fall of the Roman Republic
ANCW20020_2013_FEB:  Ancient Near Eastern Language: Egyptian
ANCW30001_2012_SM1:  Special Study Research Project
ANCW30001_2012_SM2:  Special Study Research Project
ANCW30001_2013_SM1:  Special Study Research Project
ANCW30004_2012_SM2:  Comparative Civilizations
ANCW30004_2013_SM2:  Comparative Civilizations
ANCW30006_2012_SM1:  Imperial Insanity: Mad Emperors of Rome
ANCW30011_2012_SM1:  Underworld and Afterlife
ANCW30011_2013_SM1:  Underworld and Afterlife
ANCW30016_2012_SM1:  The Age of Alexander the Great
ANCW30016_2013_SM1:  The Age of Alexander the Great
ANCW30017_2012_SM2:  Interpreting the Ancient World
ANCW30017_2013_SM2:  Interpreting the Ancient World
ANCW30018_2012_WIN:  Ancient Near Eastern Language: Akkadian
ANCW30019_2012_SM2:  Greek Pre-history, 3000-1000 BCE
ANCW30019_2013_SM2:  Greek Pre-history, 3000-1000 BCE
ANCW30020_2012_SUM:  Ancient Near Eastern Language: Syriac
ANCW30020_2013_JAN:  Ancient Near Eastern Language: Syriac
ANCW30021_2012_SM2:  Imperial Rome: Mediterranean Superpower
ANCW30021_2013_SM2:  Imperial Rome: Mediterranean Superpower
ANCW30022_2013_FEB:  Ancient Near Eastern Language: Egyptian
ANCW30023_2013_FEB:  Practical Archaeology
ANCW40001_2012_SM2:  Euripides, Seneca, and Mythmaking
ANCW40001_2013_SM2:  Euripides, Seneca, and Mythmaking
ANCW40002_2012_SM2:  Roman Religion: Current Issues
ANCW40003_2012_SM2:  Archaeology of Complex Societies
ANCW40003_2013_SM2:  Archaeology of Complex Societies
ANCW40006_2012_SM1:  Age of Empires: Ancient Anatolia
ANCW40006_2013_SM1:  Age of Empires: Ancient Anatolia
ANCW40007_2012_SM1:  Problems in Greek Prehistory
ANCW40007_2013_SM1:  Problems in Greek Prehistory
ANCW40008_2012_SM1:  Ethnic Identity in the Greco-Roman World
ANCW40010_2012_SM1:  Classical Studies and Archaeology Thesis
ANCW40010_2012_SM2:  Classical Studies and Archaeology Thesis
ANCW40010_2013_SM1:  Classical Studies and Archaeology Thesis
ANCW40011_2012_SM1:  Ancient World Studies Thesis
ANCW40011_2012_SM2:  Ancient World Studies Thesis
ANCW40011_2013_SM1:  Ancient World Studies Thesis
ANCW40011_2013_SM2:  Ancient World Studies Thesis
ANCW40012_2012_SM1:  The Roman Way of Life
ANCW40012_2013_SM1:  The Roman Way of Life
ANCW40013_2013_SM1:  Ancient World Studies Thesis
ANCW40013_2013_SM2:  Ancient World Studies Thesis
ANCW40014_2013_SM1:  Research in Ancient World Studies
ANTH10001_2012_SM2:  Anthropology: Studying Human Diversity
ANTH10001_2013_SM2:  Anthropology: Studying Human Diversity
ANTH20001_2012_SM1:  Keeping the Body in Mind
ANTH20001_2013_SM1:  Keeping the Body in Mind
ANTH20006_2012_SM1:  Culture Change and Protest Movements
ANTH20007_2012_SM2:  Working with Value
ANTH20007_2013_SM2:  Working with Value
ANTH20008_2012_SM2:  Anthropology of Gender and Sexuality
ANTH20011_2012_SM2:  Ethnic Nationalism and the Modern World
ANTH20011_2013_SM2:  Ethnic Nationalism and the Modern World
ANTH20012_2012_SM1:  Engaging the World in Theory & Practice
ANTH20012_2013_SM1:  Engaging the World in Theory & Practice
ANTH30003_2012_SM2:  Myth, Ritual and Performance
ANTH30003_2013_SM2:  Myth, Ritual and Performance
ANTH30004_2012_SM1:  Kinship and Family: A Global Perspective
ANTH30004_2013_SM1:  Kinship and Family: A Global Perspective
ANTH30005_2012_SM1:  Power, Ideology and Inequality
ANTH30005_2013_SM1:  Power, Ideology and Inequality
ANTH30009_2012_SM1:  Anthropology of Nature
ANTH30009_2013_SM2:  Anthropology of Nature
ANTH30013_2012_SM2:  Theory & the Anthropological Imagination
ANTH30013_2013_SM2:  Theory & the Anthropological Imagination
ANTH30015_2013_JUL:  High Points in Theory and Ethnography
ANTH30016_2013_SM1:  Biomedicine, Culture and Society
ANTH40001_2012_MAR:  Philosophy and Scope of Anthropology
ANTH40001_2013_MAR:  Philosophy and Scope of Anthropology
ANTH40007_2012_SM1:  Anthropology & Social Theory Thesis
ANTH40007_2012_SM2:  Anthropology & Social Theory Thesis
ANTH40007_2013_SM1:  Anthropology & Social Theory Thesis
ANTH40007_2013_SM2:  Anthropology & Social Theory Thesis
ANTH40008_2013_SM1:  Anthropology Thesis
ANTH40008_2013_SM2:  Anthropology Thesis
ANTH90003_2012_JUL:  Working the World
ANTH90004_2012_SM1:  Migration and Development
ANTH90004_2013_SM1:  Migration and Development
ARBC10001_2012_SM1:  Arabic 3
ARBC10001_2013_SM1:  Arabic 3
ARBC10002_2012_SM2:  Arabic 4
ARBC10003_2012_SM1:  Arabic 5
ARBC10003_2013_SM1:  Arabic 5
ARBC10004_2012_SM2:  Arabic 6
ARBC10004_2013_SM2:  Arabic 6
ARBC10005_2012_SM1:  Arabic 1
ARBC10005_2013_SM1:  Arabic 1
ARBC10006_2012_SM2:  Arabic 2
ARBC10006_2013_SM2:  Arabic 2
ARBC20001_2012_SM1:  Arabic in Context 1
ARBC20001_2013_SM1:  Arabic in Context 1
ARBC20002_2012_SM1:  Arabic 4A
ARBC20002_2013_SM1:  Arabic 7
ARBC20003_2012_SM2:  Arabic 4B
ARBC20003_2013_SM2:  Arabic 8
ARBC20004_2012_SM1:  Arabic 3
ARBC20004_2013_SM1:  Arabic 3
ARBC20005_2012_SM2:  Arabic 4
ARBC20005_2013_SM2:  Arabic 4
ARBC20006_2012_SM1:  Arabic 5
ARBC20006_2013_SM1:  Arabic 5
ARBC20007_2012_SM2:  Arabic 6
ARBC30001_2012_SM2:  Arabic in Context 2
ARBC30001_2013_SM2:  Arabic in Context 2
ARBC30002_2012_SM1:  Arabic 5A
ARBC30002_2013_SM1:  Arabic 9
ARBC30003_2012_SM2:  Arabic 5B
ARBC30004_2012_SM1:  Arabic 5
ARBC30004_2013_SM1:  Arabic 5
ARBC30005_2012_SM2:  Arabic 6
ARBC30005_2013_SM2:  Arabic 6
ARBC30006_2012_SM1:  Arabic 4A
ARBC30006_2013_SM1:  Arabic 7
ARBC30007_2013_SM2:  Arabic 8
ARBC40001_2013_SM1:  Honours Arabic A
ARBC40002_2012_SM2:  Honours Arabic B
ARBC40002_2013_SM2:  Honours Arabic B
ARBC40005_2012_SM1:  Arabic Studies Thesis
ARBC40005_2012_SM2:  Arabic Studies Thesis
ARBC90002_2012_SM2:  Postgraduate Arabic B
ARBC90002_2013_SM2:  Postgraduate Arabic B
ARBC90003_2012_SM1:  Postgraduate Arabic A
ARBC90003_2013_SM1:  Postgraduate Arabic A
ASIA10001_2012_SM1:  Language and Power in Asian Societies
ASIA10001_2013_SM1:  Language and Power in Asian Societies
ASIA20001_2012_SM1:  Media and Everyday Life in Asia
ASIA20001_2013_SM1:  Media and Everyday Life in Asia
ASIA30002_2012_SM2:  Identity, Ideology & Nationalism in Asia
ASIA30002_2013_SM2:  Identity, Ideology & Nationalism in Asia
ASIA40002_2012_SM1:  Asian Studies Thesis
ASIA40002_2012_SM2:  Asian Studies Thesis
ASIA40002_2013_SM1:  Asian Studies Thesis
ASIA40002_2013_SM2:  Asian Studies Thesis
ASIA40003_2013_SM1:  Asian Studies Thesis
ASIA40003_2013_SM2:  Asian Studies Thesis
ASIA90001_2012_SM2:  Human Rights in Southeast Asia
ASIA90001_2013_SM2:  Human Rights in Southeast Asia
ASIA90004_2012_SM1:  Critical Asian Perspectives
ASIA90004_2013_SM1:  Critical Asian Perspectives
ASIA90005_2012_RS1:  PhD Research
ASIA90005_2012_RS2:  PhD Research
ASIA90005_2013_RS1:  PhD Research
ASIA90007_2012_SM2:  Popular Culture and Contemporary Asia
ASIA90008_2012_SM1:  Asia and the World
ASIA90008_2013_SM1:  Asia and the World
AUST10001_2012_SM1:  Contesting Australia
AUST20001_2012_SM1:  Australia and America
AUST20002_2012_SM2:  Exploring Central Australia: Fieldwork
AUST20005_2012_SM1:  Migrant Nation: Culture and Identity
AUST20005_2013_SM2:  Migrant Nation: Culture and Identity
AUST20007_2012_SM1:  Australia Now
AUST20007_2012_SM2:  Australia Now
AUST30001_2012_SM2:  Researching Australia: Issues, Agendas
AUST30001_2013_SM2:  Researching Australia: Issues, Agendas
AUST30003_2012_SM2:  Exploring Central Australia: Fieldwork
AUST30007_2012_JUN:  Urban Legends: Melbourne Intensive
AUST30007_2013_JUN:  Urban Legends: Melbourne Intensive
AUST90001_2012_SM1:  A Century of Australian Social Policy
AUST90003_2012_SM1:  Australian Studies Thesis
AUST90003_2012_SM2:  Australian Studies Thesis
AUST90003_2013_SM1:  Australian Studies Thesis
AUST90007_2012_SM1:  Imaging Australian Spaces
B-ARTSEXT_2012_MDYI:  Bachelor of Arts (Extended)
B-ARTSEXT_2012_STYI:  Bachelor of Arts (Extended)
B-ARTSEXT_2013_STYI:  Bachelor of Arts (Extended)
CHIN10001_2012_SM1:  Chinese 9
CHIN10001_2013_SM1:  Chinese 9
CHIN10002_2012_SM2:  Chinese 10
CHIN10002_2013_SM2:  Chinese 10
CHIN10003_2012_SM1:  Chinese 7
CHIN10003_2013_SM1:  Chinese 7
CHIN10004_2012_SM2:  Chinese 8
CHIN10004_2013_SM2:  Chinese 8
CHIN10005_2012_SM1:  Chinese 1
CHIN10005_2013_SM1:  Chinese 1
CHIN10006_2012_SM2:  Chinese 2
CHIN10006_2013_SM2:  Chinese 2
CHIN10007_2012_SM1:  Chinese 3 Post VCE
CHIN10007_2013_SM1:  Chinese 3 Post VCE
CHIN10008_2012_SM2:  Chinese 4 Post VCE
CHIN10008_2013_SM2:  Chinese 4 Post VCE
CHIN10009_2012_SM2:  Chinese Cinema
CHIN10009_2013_SM2:  Chinese Cinema
CHIN10010_2012_SM1:  Modern Chinese Literature
CHIN10015_2013_SM1:  Chinese 3A
CHIN10016_2013_SM2:  Chinese 4A
CHIN10017_2013_SM1:  Chinese 5
CHIN10018_2013_SM2:  Chinese 6
CHIN20001_2012_SM1:  Chinese 3A
CHIN20001_2013_SM1:  Chinese 3A
CHIN20002_2012_SM2:  Chinese 4A
CHIN20002_2013_SM2:  Chinese 4A
CHIN20003_2012_SM1:  Chinese 5
CHIN20003_2013_SM1:  Chinese 5
CHIN20004_2012_SM2:  Chinese 6
CHIN20004_2013_SM2:  Chinese 6
CHIN20005_2012_SM1:  Modern Chinese Literature
CHIN20005_2013_SM1:  Modern Chinese Literature
CHIN20006_2012_SM1:  Great Chinese Classics
CHIN20006_2013_SM1:  Great Chinese Classics
CHIN20007_2012_SM1:  Chinese Studies: Culture and Empire
CHIN20007_2013_SM1:  Chinese Studies: Culture and Empire
CHIN20008_2012_SM2:  China Since Mao
CHIN20008_2013_SM2:  China Since Mao
CHIN20009_2012_SM1:  Chinese Economic Documents
CHIN20009_2013_SM1:  Chinese Economic Documents
CHIN20010_2012_SM1:  Chinese 3B
CHIN20010_2013_SM1:  Chinese 3B
CHIN20011_2012_SM2:  Chinese 4B
CHIN20011_2013_SM2:  Chinese 4B
CHIN20012_2012_SM1:  Chinese 9
CHIN20012_2013_SM1:  Chinese 9
CHIN20013_2012_SM2:  Chinese 10
CHIN20013_2013_SM2:  Chinese 10
CHIN20016_2012_SM2:  Chinese Cinema
CHIN20016_2013_SM2:  Chinese Cinema
CHIN20021_2012_SM2:  Analysis of Contemporary Chinese Society
CHIN20021_2013_SM2:  Analysis of Contemporary Chinese Society
CHIN20022_2012_SM1:  Advanced Seminar in Chinese
CHIN20022_2013_SM1:  Advanced Seminar in Chinese
CHIN20025_2012_SM2:  Human Rights in China & East Asia
CHIN20025_2013_SM2:  Human Rights in China & East Asia
CHIN20026_2013_SM2:  Advanced Chinese Translation
CHIN20027_2013_SM1:  Chinese 7
CHIN20028_2013_SM2:  Chinese 8
CHIN30001_2012_SM2:  Classic Chinese Civilisation
CHIN30001_2013_SM2:  Classic Chinese Civilisation
CHIN30002_2012_SM1:  Taiwan & Beyond: Chinese Settler Culture
CHIN30002_2013_SM1:  Taiwan & Beyond: Chinese Settler Culture
CHIN30003_2012_SM2:  Chinese News Analysis
CHIN30003_2013_SM2:  Chinese News Analysis
CHIN30005_2012_SM2:  Advanced Chinese Translation
CHIN30005_2013_SM2:  Advanced Chinese Translation
CHIN30006_2012_SM2:  Analysis of Contemporary Chinese Society
CHIN30006_2013_SM2:  Analysis of Contemporary Chinese Society
CHIN30007_2012_SM1:  Advanced Seminar in Chinese
CHIN30007_2013_SM1:  Advanced Seminar in Chinese
CHIN30008_2012_SM1:  Chinese 5
CHIN30008_2013_SM1:  Chinese 5
CHIN30009_2012_SM2:  Chinese 6
CHIN30009_2013_SM2:  Chinese 6
CHIN30010_2012_SM1:  Modern Chinese Literature
CHIN30010_2013_SM1:  Modern Chinese Literature
CHIN30011_2012_SM1:  Great Chinese Classics
CHIN30011_2013_SM1:  Great Chinese Classics
CHIN30012_2012_SM1:  Chinese Economic Documents
CHIN30012_2013_SM1:  Chinese Economic Documents
CHIN30014_2012_SM2:  Chinese 10
CHIN30018_2012_SM2:  Chinese Cinema
CHIN30018_2013_SM2:  Chinese Cinema
CHIN30023_2012_SM1:  Chinese 9
CHIN40004_2012_SM1:  Chinese Thesis
CHIN40004_2012_SM2:  Chinese Thesis
CHIN90001_2012_SM1:  Honours Chinese A
CHIN90001_2013_SM1:  Honours Chinese A
CHIN90002_2013_SM2:  Honours Chinese B
CHIN90003_2012_SM1:  Topics in Chinese Studies
CHIN90003_2013_SM1:  Topics in Chinese Studies
CHIN90006_2012_SM2:  Postgraduate Chinese B
CICU10001_2012_SM1:  Introduction to Cinema Studies
CICU10002_2012_SM2:  Culture, Media and Everyday Life
CICU20011_2012_SM1:  Screen and Media Histories
CICU20017_2012_SM2:  Lifestyle and Consumer Culture
CICU20018_2012_SM1:  Rock to Rave
CICU30012_2012_SM2:  Contemporary Film and Cultural Theory
CICU30012_2013_SM2:  Contemporary Film and Cultural Theory
CICU30019_2012_SM1:  Cinema and the City
CICU50001_2012_SM2:  Human Rights on Screen
CICU50001_2013_SM1:  Human Rights on Screen
CLAS10003_2012_JAN:  Intensive Beginners Latin
CLAS10003_2013_SUM:  Intensive Beginners Latin
CLAS10004_2012_SM1:  Beginners Ancient Greek A
CLAS10004_2013_SM1:  Ancient Greek 1
CLAS10005_2012_SM2:  Beginners Ancient Greek B
CLAS10005_2013_SM2:  Ancient Greek 2
CLAS10006_2012_SM1:  Beginners Latin A
CLAS10006_2013_SM1:  Latin 1
CLAS10007_2012_SM2:  Beginners Latin B
CLAS10007_2013_SM2:  Latin 2
CLAS10010_2012_SM1:  Intermediate Latin Language
CLAS10012_2012_SM2:  Intermediate Latin: Historiography
CLAS10012_2013_SM1:  Latin 3
CLAS10014_2012_SM1:  Intermediate Latin: Epic
CLAS10014_2013_SM2:  Latin 4
CLAS10020_2012_SM2:  Intermediate Ancient Greek: Koine
CLAS10020_2013_SM1:  Ancient Greek 3
CLAS10021_2012_SM1:  Intermediate Ancient Greek: Homer
CLAS10021_2013_SM2:  Ancient Greek 4
CLAS10022_2012_WIN:  Intensive Beginners Ancient Greek A
CLAS10022_2013_JUN:  Intensive Ancient Greek 1
CLAS20014_2013_SM2:  Ancient Greek 6
CLAS20015_2012_SM2:  Intermediate Ancient Greek: Koine
CLAS20015_2013_SM1:  Ancient Greek 3
CLAS20016_2012_SM1:  Intermediate Ancient Greek: Homer
CLAS20016_2013_SM2:  Ancient Greek 4
CLAS20021_2012_JAN:  Intensive Beginners Latin
CLAS20021_2013_SUM:  Intensive Beginners Latin
CLAS20022_2012_SM1:  Beginners Ancient Greek A
CLAS20023_2012_SM2:  Beginners Ancient Greek B
CLAS20024_2012_SM1:  Beginners Latin A
CLAS20025_2012_SM2:  Beginners Latin B
CLAS20027_2012_SM1:  Intermediate Latin Language
CLAS20029_2012_SM2:  Intermediate Latin: Historiography
CLAS20029_2013_SM1:  Latin 3
CLAS20031_2012_SM1:  Intermediate Latin: Epic
CLAS20031_2013_SM2:  Latin 4
CLAS20035_2012_WIN:  Intensive Beginners Ancient Greek A
CLAS20035_2013_JUN:  Intensive Ancient Greek 1
CLAS30004_2012_JAN:  Intensive Beginners Latin
CLAS30004_2013_SUM:  Intensive Beginners Latin
CLAS30005_2012_SM1:  Beginners Ancient Greek A
CLAS30006_2012_SM2:  Beginners Ancient Greek B
CLAS30007_2012_SM1:  Beginners Latin A
CLAS30008_2012_SM2:  Beginners Latin B
CLAS30009_2013_SM2:  Latin 6
CLAS30010_2012_SM1:  Intermediate Latin Language
CLAS30012_2012_SM2:  Intermediate Latin: Historiography
CLAS30013_2013_SM1:  Latin 5
CLAS30014_2012_SM1:  Intermediate Latin: Epic
CLAS30024_2013_SM1:  Ancient Greek 5
CLAS30025_2013_SM2:  Ancient Greek 6
CLAS30026_2012_SM2:  Intermediate Ancient Greek: Koine
CLAS30027_2012_SM1:  Intermediate Ancient Greek: Homer
CLAS30045_2012_WIN:  Intensive Beginners Ancient Greek A
CLAS30045_2013_JUN:  Intensive Ancient Greek 1
CLAS40013_2012_SM2:  Advanced Latin: Didactic Poetry
CLAS40014_2012_SM1:  Advanced Latin: Novel
CLAS40017_2012_SM1:  Advanced Ancient Greek C
CLAS40018_2012_SM2:  Advanced Ancient Greek D
CLAS40020_2012_SM1:  Classics Thesis
CLAS40020_2012_SM2:  Classics Thesis
CLAS40027_2012_SM1:  Intermediate Latin: Epic
CLAS40028_2012_SM1:  Intermediate Ancient Greek: Homer
CLAS40030_2012_SM2:  Intermediate Latin: Historiography
CLAS40032_2013_SM1:  Classics Thesis
CLAS40032_2013_SM2:  Classics Thesis
CLAS40033_2013_SM1:  Research in Classics
CLAS40034_2013_SM1:  Classics Honours Seminar 1
CLAS40035_2013_SM2:  Classics Honours Seminar 2
CLAS90002_2012_RS1:  Major Thesis - Classics & Archaeology
CLAS90002_2013_RS1:  Major Thesis - Classics & Archaeology
CRIM10001_2012_SM1:  From Graffiti to Terrorism
CRIM10001_2013_SM1:  From Graffiti to Terrorism
CRIM20002_2012_SM1:  Criminal Law and Political Justice
CRIM20002_2013_SM1:  Criminal Law and Political Justice
CRIM20003_2012_SM2:  Policing
CRIM20003_2013_SM2:  Policing
CRIM20004_2012_SM2:  Order, Disorder, Crime, Deviance
CRIM20004_2013_SM2:  Order, Disorder, Crime, Deviance
CRIM20006_2012_SM1:  Punishment and Social Control
CRIM20006_2013_SM2:  Punishment and Social Control
CRIM30001_2012_SM2:  Crime and Public Policy
CRIM30001_2013_SM2:  Crime and Public Policy
CRIM30002_2012_SM2:  Global Criminology
CRIM30002_2013_SM1:  Global Criminology
CRIM30005_2012_SM2:  Crimes of the Powerful
CRIM30005_2013_SM2:  Crimes of the Powerful
CRIM30006_2012_SM1:  Crime and Culture
CRIM30006_2013_SM1:  Crime and Culture
CRIM30009_2012_SM1:  Comparative Criminology
CRIM30009_2013_SM2:  Comparative Criminology
CRIM30010_2012_SM2:  Managing Justice: Agencies and the State
CRIM30010_2013_SM2:  Managing Justice: Agencies and the State
CRIM40002_2012_SM1:  Qualitative Research Methods
CRIM40002_2013_SM1:  Qualitative Research Methods
CRIM40003_2012_SM2:  Drugs and Justice
CRIM40003_2013_SM2:  Drugs and Justice
CRIM40005_2012_SEP:  The New Punitiveness?
CRIM40005_2013_JUL:  The New Punitiveness?
CRIM40006_2012_SM1:  Criminology Thesis
CRIM40006_2012_SM2:  Criminology Thesis
CRIM40006_2013_SM1:  Criminology Thesis
CRIM40006_2013_SM2:  Criminology Thesis
CRIM40007_2013_SM1:  Criminology Thesis
CRIM40007_2013_SM2:  Criminology Thesis
CRIM90001_2013_RS1:  Major Thesis - Criminology
CRIM90004_2012_SM1:  Taming Business? Crime, Law and Politics
CRIM90004_2013_SM1:  Taming Business? Crime, Law and Politics
CRIM90005_2013_SM1:  Minor Thesis - Criminology
CRIM90005_2013_SM2:  Minor Thesis - Criminology
CRIM90006_2012_SM1:  Criminology and Sociology Internship
CRIM90006_2012_SM2:  Criminology and Sociology Internship
CRIM90006_2013_SM1:  Criminology and Sociology Internship
CRIM90006_2013_SM2:  Criminology and Sociology Internship
CRIM90008_2013_SM1:  Sovereignty, Justice, Indigenous Peoples
CRIM90010_2012_AUG:  Crime Prevention: Critical Approaches
CRIM90010_2013_AUG:  Crime Prevention: Critical Approaches
CRIM90011_2012_JUL:  Research and Criminal Justice Governance
CRIM90011_2013_JUL:  Research and Criminal Justice Governance
CRIM90015_2012_SM2:  Terror, Law and War
CRIM90015_2013_SM2:  Terror, Law and War
CRIM90016_2012_SM1:  Global Reconstructions of Justice
CRIM90016_2013_SM1:  Global Reconstructions of Justice
CRIM90017_2012_MAY:  Violence, Trauma and Human Rights
CRIM90017_2013_MAY:  Violence, Trauma and Human Rights
CRIM90018_2012_SM2:  Advances in Criminology: Emerging Theory
CRIM90018_2013_SM2:  Advances in Criminology: Emerging Theory
CRIM90019_2012_SM1:  Advances in Criminological Research
CRIM90019_2013_SM1:  Advances in Criminological Research
CRIM90020_2012_JUN:  Representing Crime
CRIM90020_2013_JUL:  Framing Crime
CRIM90020_2013_JUN:  Framing Crime
CRIM90021_2012_SM1:  Minor Thesis - Criminology
CRIM90021_2012_SM2:  Minor Thesis - Criminology
CRIM90024_2012_SM2:  Minor Thesis - Criminology
CRIM90024_2013_SM1:  Minor Thesis - Criminology
CULS10005_2013_SM2:  Media, Identity and Everyday Life
CULS20010_2012_SM2:  Television and Popular Culture
CULS20013_2012_OCT:  LundU: Globalisation and Culture
CULS20014_2013_SM2:  Television, Lifestyle & Consumer Culture
CULS20015_2013_SM1:  Rock to Rave
CULS20016_2013_SM1:  Media Histories
CULS30001_2012_SM2:  The Digital Mediascape
CULS30002_2013_SM2:  Asian Cinema and Media
CULS30003_2013_SM1:  City Cultures
CULS30004_2013_SM1:  Thinking Sex
CULS40001_2012_SM1:  Cultural Policy and Power
CULS40001_2013_SM1:  Cultural Policy and Power
CULS40002_2012_SM2:  Memory Cultures
CULS40005_2012_SM1:  Subcultural Studies
CULS40005_2013_SM1:  Subcultural Studies
CULS40006_2012_SM2:  Cultural Studies in Asia
CULS40006_2013_SM2:  Cultural Studies in Asia
CULS40009_2012_SM1:  Cultural Studies Thesis
CULS40009_2012_SM2:  Cultural Studies Thesis
CULS40009_2013_SM1:  Cultural Studies Thesis
CULS40009_2013_SM2:  Cultural Studies Thesis
CULS40010_2012_SM1:  Secret Life of Things: Material Culture
CULS40010_2013_SM2:  Secret Life of Things: Material Culture
CULS40011_2013_SM2:  Cultural Studies Now
CULS90001_2012_RS1:  Major Thesis - Cultural Studies
CULS90001_2013_RS1:  Major Thesis - Cultural Studies
CUMC40001_2012_MAR:  Conservation Professional Practices
CUMC40001_2013_MAR:  Conservation Professional Practices
CUMC40002_2012_JUL:  RESPECT
CUMC40002_2013_SEP:  RESPECT
CUMC40003_2012_MAR:  Introduction to Materials and Techniques
CUMC40003_2013_APR:  Introduction to Materials and Techniques
CUMC40004_2012_AUG:  Preventive Conservation
CUMC40004_2013_JUL:  Preventive Conservation
CUMC40005_2012_SEP:  Conservation Assessment and Treatment 1
CUMC40005_2013_AUG:  Conservation Assessment and Treatment 1
CUMC40006_2012_JUN:  Analytical Chemistry in Conservation
CUMC40006_2013_OCT:  Analytical Chemistry in Conservation
CUMC40007_2012_APR:  Technical Examination and Documentation
CUMC40007_2013_MAY:  Technical Examination and Documentation
CUMC40008_2012_MAY:  Conservation Materials Chemistry
CUMC40008_2013_APR:  Conservation Materials Chemistry
CUMC90003_2012_JUN:  Conservation Intensive
CUMC90003_2013_JUL:  Conservation Intensive
CUMC90004_2012_FEB:  Materials and Techniques of Artefacts
CUMC90004_2013_JAN:  Materials and Techniques of Artefacts
CUMC90005_2012_MAR:  Conservation Assessment and Treatment 2
CUMC90005_2013_FEB:  Conservation Assessment and Treatment 2
CUMC90006_2012_SM1:  Conservation Internship
CUMC90006_2012_SM2:  Conservation Internship
CUMC90006_2013_SM1:  Conservation Internship
CUMC90006_2013_SM2:  Conservation Internship
CUMC90007_2012_SM1:  Minor Thesis - Conservation
CUMC90007_2012_SM2:  Minor Thesis - Conservation
CUMC90007_2013_SM1:  Minor Thesis - Conservation
CUMC90007_2013_SM2:  Minor Thesis - Conservation
CUMC90009_2012_JUL:  Conservation of Photographs 1
CUMC90009_2013_JUL:  Conservation of Photographs 1
CUMC90015_2012_JUN:  Duplication, Archiving and Preservation
CUMC90015_2013_JUL:  Duplication, Archiving and Preservation
CWRI10001_2012_SM1:  Creative Writing: Ideas and Practice
CWRI10001_2013_SM1:  Creative Writing: Ideas and Practice
CWRI20002_2012_SM2:  Short Fiction
CWRI20002_2013_SM2:  Short Fiction
CWRI20005_2012_SM1:  Creative Non Fiction
CWRI20005_2013_SM1:  Creative Non Fiction
CWRI20006_2012_SM1:  Script for Performance
CWRI20006_2013_SM1:  Script for Performance
CWRI20007_2012_SM1:  Poetry
CWRI20007_2013_SM1:  Poetry
CWRI20009_2012_SM2:  Writing for Screen
CWRI20009_2013_SM2:  Writing for Screen
CWRI30001_2012_SM1:  Novels
CWRI30001_2013_SM1:  Novels
CWRI30004_2012_SM2:  Encounters with Writing
CWRI30004_2013_SM2:  Encounters with Writing
CWRI30005_2012_SM2:  Writing For Theatre
CWRI30005_2013_SM2:  Writing For Theatre
CWRI30006_2012_SM1:  Poetry and Poetics
CWRI30006_2013_SM1:  Poetry and Poetics
CWRI30013_2012_SM2:  Biography and Autobiography
CWRI30013_2013_SM2:  Biography and Autobiography
CWRI30014_2012_SM1:  Advanced Screenwriting
CWRI30014_2013_SM1:  Advanced Screenwriting
CWRI40004_2012_SM1:  Theory For Writing
CWRI40004_2013_SM1:  Theory For Writing
CWRI40005_2012_SM2:  Poetry and the Avant-garde
CWRI40008_2012_SM1:  Creative Writing Thesis - 50
CWRI40008_2012_SM2:  Creative Writing Thesis - 50
CWRI40008_2013_SM1:  Creative Writing Thesis - 50
CWRI40008_2013_SM2:  Creative Writing Thesis - 50
CWRI40009_2012_SM2:  Genealogies of Place
CWRI40009_2013_SM2:  Genealogies of Place
CWRI40010_2012_SM1:  Contemporary Fictions
CWRI40010_2013_SM1:  Contemporary Fictions
CWRI40011_2012_SM1:  Graphic Narratives
CWRI40011_2013_SM1:  Graphic Narratives
CWRI40012_2012_SM2:  The Dialogic Imagination in Context
CWRI40013_2013_SM1:  New Script
CWRI40014_2013_SM2:  Writing Australia
CWRI50001_2012_SM1:  Freelance Writing
CWRI90002_2012_RS1:  Major Thesis Creative Writing (res/crtv)
CWRI90002_2012_RS2:  Major Thesis Creative Writing (res/crtv)
CWRI90004_2012_JUL:  Creative Writing Advanced Workshop
CWRI90004_2013_JUL:  Creative Writing Advanced Workshop
CWRI90008_2012_SM1:  Minor Thesis - Creative Writing
CWRI90008_2012_SM2:  Minor Thesis - Creative Writing
CWRI90008_2013_SM1:  Minor Thesis - Creative Writing
CWRI90008_2013_SM2:  Minor Thesis - Creative Writing
CWRI90009_2013_SM1:  Young Adult Fiction
CWRI90010_2012_SM1:  Writing for Children
D-GLOBISS_2012_MDYI:  U21 Diploma in Global Issues
D-GLOBISS_2012_STYI:  U21 Diploma in Global Issues
D-GLOBISS_2012_SUMI:  U21 Diploma in Global Issues
D-GLOBISS_2013_MDYI:  U21 Diploma in Global Issues
D-GLOBISS_2013_STYI:  U21 Diploma in Global Issues
D-GLOBISS_2013_SUMI:  U21 Diploma in Global Issues
DEVT10001_2012_SM1:  The Developing World
DEVT10001_2013_SM1:  The Developing World
DEVT20001_2012_SM2:  Anthropology of Policy in Development
DEVT20001_2013_SM2:  Development in the 21st Century
DEVT40004_2012_SM1:  Directed Study in Development
DEVT40004_2012_SM2:  Directed Study in Development
DEVT40004_2013_SM1:  Directed Study in Development
DEVT40004_2013_SM2:  Directed Study in Development
DEVT40007_2012_SM1:  Health and Development
DEVT40007_2013_SM1:  Health and Development
DEVT40008_2012_SM1:  Development Studies Thesis
DEVT40008_2013_SM1:  Development Studies Thesis
DEVT40008_2013_SM2:  Development Studies Thesis
DEVT50002_2012_SM2:  Poverty, Microfinance and Development
DEVT50002_2013_SM2:  Poverty, Microfinance and Development
DEVT90001_2012_SM1:  Project Management & Design
DEVT90001_2013_SM1:  Project Management & Design
DEVT90002_2012_JAN:  Internship in Development
DEVT90002_2012_SM1:  Internship in Development
DEVT90002_2012_SM2:  Internship in Development
DEVT90002_2013_JAN:  Internship in Development
DEVT90002_2013_SM1:  Internship in Development
DEVT90002_2013_SM2:  Internship in Development
DEVT90004_2012_RS1:  Major Thesis - Development Studies
DEVT90005_2012_NOV:  Development Studies Special Topics B
DEVT90005_2013_JUL:  Development Studies Special Topics B
DEVT90007_2012_AUG:  Development Studies Special Topics A
DEVT90008_2012_JAN:  International Internship in Development
DEVT90008_2012_SM1:  International Internship in Development
DEVT90008_2012_SM2:  International Internship in Development
DEVT90008_2013_JAN:  International Internship in Development
DEVT90008_2013_SM1:  International Internship in Development
DEVT90008_2013_SM2:  International Internship in Development
DEVT90009_2012_SM1:  Understanding Development
DEVT90009_2013_SM1:  Development Theories
DEVT90011_2012_SM1:  Minor Thesis - Development Studies
DEVT90011_2012_SM2:  Minor Thesis - Development Studies
DEVT90011_2013_SM1:  Minor Thesis - Development Studies
DEVT90011_2013_SM2:  Minor Thesis - Development Studies
DEVT90035_2012_SM2:  Monitoring and Evaluation in Development
DEVT90035_2013_SM2:  Monitoring and Evaluation in Development
DEVT90039_2012_SM1:  Civil Society, NGOs and the State
DEVT90039_2013_SM1:  Civil Society, NGOs and the State
DEVT90040_2012_SM2:  Gender Issues in Development
DEVT90040_2013_SM2:  Gender Issues in Development
DEVT90041_2012_JUN:  Research Methods for Development
DEVT90041_2013_JUN:  Research Methods for Development
DEVT90043_2013_SM2:  Management in Development B
DEVT90044_2013_APR:  Management in Development A
DEVT90045_2013_SM1:  Socio-Economic Development
DEVT90046_2013_JUL:  Family, Community and Development
DEVT90047_2013_SM2:  Development Strategies
ECON20010_2012_JAN:  TDM International Negotiation
ECON20010_2013_JAN:  TDM International Negotiation
ENGL10001_2012_SM2:  Modern and Contemporary Literature
ENGL10001_2013_SM2:  Modern and Contemporary Literature
ENGL10002_2012_SM1:  Literature and Performance
ENGL10002_2013_SM1:  Literature and Performance
ENGL10004_2012_SM1:  Introduction to Literature
ENGL10004_2013_SM1:  Introduction to Indigenous Literature
ENGL10005_2012_SM1:  English for Academic Purposes
ENGL10005_2013_SM1:  English for Academic Purposes
ENGL20006_2012_SM1:  Postmodernism
ENGL20006_2013_SM1:  Postmodernism
ENGL20009_2012_SM2:  The Australian Imaginary
ENGL20009_2013_SM2:  The Australian Imaginary
ENGL20020_2012_SM2:  Romanticism, Feminism, Revolution
ENGL20020_2013_SM2:  Romanticism, Feminism, Revolution
ENGL20022_2013_SM2:  Modernism and Avant Garde
ENGL20023_2012_SM1:  American Classics
ENGL20023_2013_SM1:  American Classics
ENGL20025_2012_SM2:  Reverberations of Terror: 1789-1900
ENGL20025_2013_SM2:  Reverberations of Terror: 1789-1900
ENGL20030_2012_SM1:  Modern and Contemporary Drama
ENGL20030_2013_SM1:  Modern and Contemporary Drama
ENGL30002_2012_SM2:  Critical Debates
ENGL30002_2013_SM2:  Critical Debates
ENGL30003_2012_SM2:  Backgrounds to English Literature
ENGL30003_2013_SM1:  Backgrounds to English Literature
ENGL30006_2012_SM2:  Travel Writing and Postcolonialism
ENGL30006_2013_SM2:  Travel Writing and Postcolonialism
ENGL30007_2012_SM1:  Genre Fiction/Popular Fiction
ENGL30007_2013_SM1:  Genre Fiction/Popular Fiction
ENGL30012_2012_SM1:  Art/Pornography/Blasphemy/Propaganda
ENGL30012_2013_SM2:  Art/Pornography/Blasphemy/Propaganda
ENGL30013_2012_SM1:  Gothic Fictions
ENGL30013_2013_SM1:  Gothic Fictions
ENGL30016_2013_SM1:  Decadent Literature
ENGL30019_2012_SM2:  The Medieval Image: Art and Culture
ENGL30036_2012_SM2:  Theatre After the Sixties
ENGL30036_2013_SM2:  Theatre After the Sixties
ENGL30046_2012_SM1:  Romancing the Medieval
ENGL30046_2013_SM2:  Romancing the Medieval
ENGL40003_2012_SM2:  Medieval Temporalities
ENGL40003_2013_SM2:  Medieval Temporalities
ENGL40006_2012_SM1:  Poetry: The Versatile Imagination
ENGL40006_2013_SM1:  Poetry: The Versatile Imagination
ENGL40007_2012_SM1:  Romanticism and Modernity
ENGL40007_2013_SM1:  Romanticism and Modernity
ENGL40010_2012_SM2:  Literary Pleasure
ENGL40011_2012_SM1:  Dickens and the Condition of England
ENGL40015_2012_SM2:  American Fiction: Cooper to Cather
ENGL40015_2013_SM1:  American Fiction: Cooper to Cather
ENGL40018_2013_SM1:  The Birth of Literary Celebrity
ENGL40019_2012_SM1:  English Thesis
ENGL40019_2012_SM2:  English Thesis
ENGL40019_2013_SM1:  English Thesis
ENGL40019_2013_SM2:  English Thesis
ENGL40020_2012_SM2:  Australian Theatre and Performance
ENGL40020_2013_SM2:  Australian Theatre and Performance
ENGL40021_2012_SM1:  Contemporary Japan in the Arts
ENGL40022_2012_SM2:  Cosmic Pandemonium in Paradise Lost
ENGL40022_2013_SM2:  Cosmic Pandemonium in Paradise Lost
ENGL40023_2013_SM1:  English & Theatre Studies Thesis
ENGL40023_2013_SM2:  English & Theatre Studies Thesis
ENGL90001_2012_RS1:  Major Thesis - English Language & Lit.
ENGL90001_2012_RS2:  Major Thesis - English Language & Lit.
ENGL90001_2013_RS1:  Major Thesis - English Language & Lit.
ENGL90001_2013_RS2:  Major Thesis - English Language & Lit.
ENST10001_2012_SM2:  Environment and Story
ENST10001_2013_SM2:  Environment and Story
ENST10002_2012_SM1:  Reading Western Literature
ENST10002_2013_SM1:  Reading Western Literature
ESLA10003_2012_SM1:  Academic English 1
ESLA10003_2012_SM2:  Academic English 1
ESLA10003_2013_SM1:  Academic English 1
ESLA10003_2013_SM2:  Academic English 1
ESLA10004_2012_SM1:  Academic English 2
ESLA10004_2012_SM2:  Academic English 2
ESLA10004_2013_SM1:  Academic English 2
ESLA10004_2013_SM2:  Academic English 2
ESLA10005_2012_SM1:  Academic English: Economics and Commerce
ESLA10005_2013_SM1:  Academic English: Economics and Business
EURO10001_2012_SM1:  Europe: Narrating the Nation
EURO10001_2013_SM2:  Europe: Narrating the Nation
EURO20001_2012_SM1:  Language and Society in Europe
EURO20002_2012_SM2:  European Modernism
EURO20003_2013_SM1:  Memory & Memoirs of 20th Century Europe
EURO20005_2013_SM2:  Screening Europe: Image and Identity
EURO30001_2012_SM1:  Language and Society in Europe
EURO30002_2013_SM1:  Memory & Memoirs of 20th Century Europe
EURO30003_2012_SM2:  European Modernism
EURO30004_2013_SM2:  Screening Europe: Image and Identity
EURO40001_2012_SM2:  Introduction to European Critical Theory
EURO40001_2013_SM2:  Introduction to European Critical Theory
EURO40002_2012_SM1:  Seminars in Languages and Linguistics A
EURO40002_2013_SM1:  Seminars in Languages and Linguistics A
EURO40002_2013_SM2:  Seminars in Languages and Linguistics A
EURO40003_2012_SM2:  Seminars in Languages and Linguistics B
FREN10001_2012_SM1:  French 3
FREN10001_2013_SM1:  French 3
FREN10002_2012_SM2:  French Intermediate Cultural Studies
FREN10003_2012_SM2:  French 4
FREN10003_2013_SM2:  French 4
FREN10004_2012_SM1:  French 1
FREN10004_2013_SM1:  French 1
FREN10005_2012_SM2:  French 2
FREN10005_2013_SM2:  French 2
FREN10006_2012_SM1:  French 5
FREN10006_2013_SM1:  French 5
FREN10007_2012_SM2:  French 6
FREN10007_2013_SM2:  French 6
FREN20001_2012_SM1:  French Language and Culture 2A
FREN20001_2013_SM1:  French 5
FREN20002_2012_SM2:  French Language and Culture 2B
FREN20002_2013_SM2:  French 6
FREN20003_2013_SM2:  Romanticism to Decadence: French Novels
FREN20004_2012_SM2:  French Non-Fiction I
FREN20004_2013_SM2:  French Translation
FREN20007_2012_SM1:  French and Francophone Societies I
FREN20009_2013_NOV:  Paris: Ville Lumiere (on site in Paris)
FREN20010_2012_SM2:  French Fictions II
FREN20011_2013_SM1:  French Cinema: The New Wave and Beyond
FREN20012_2012_SM1:  Topics in French Culture I
FREN20013_2013_SM1:  Matters of Taste: French Eating Cultures
FREN20015_2012_SM1:  French 3
FREN20015_2013_SM1:  French 3
FREN20016_2012_SM2:  French Intermediate Cultural Studies
FREN20016_2013_SM2:  French Cultural Studies
FREN20017_2012_SM2:  French 4
FREN20017_2013_SM2:  French 4
FREN20018_2012_JAN:  Intensive Intermediate French
FREN20018_2012_SUM:  Intensive Intermediate French
FREN20018_2013_JAN:  Intensive French 3 and 4
FREN20019_2013_SM1:  French 7
FREN30001_2012_SM1:  French Language and Culture 3A
FREN30001_2013_SM1:  French Language and Culture 3A
FREN30003_2012_SM1:  French Post-Intermediate 3A
FREN30003_2013_SM1:  French 5
FREN30004_2012_SM2:  French Post-Intermediate 3B
FREN30004_2013_SM2:  French Post-Intermediate 3B
FREN30004_2013_SM2:  French 6
FREN30005_2013_SM2:  Romanticism to Decadence: French Novels
FREN30006_2012_SM2:  French Non-Fiction I
FREN30006_2013_SM2:  French Translation
FREN30011_2013_NOV:  Paris: Ville Lumiere (on site in Paris)
FREN30012_2012_SM2:  French Fictions II
FREN30013_2013_SM1:  French Cinema: The New Wave and Beyond
FREN30014_2012_SM1:  Topics in French Culture I
FREN30015_2013_SM1:  Matters of Taste: French Eating Cultures
FREN30017_2012_SM1:  French and Francophone Societies I
FREN40003_2013_SM2:  Medieval and Renaissance French
FREN40004_2012_SM2:  Espaces Francophones
FREN40005_2012_SM1:  French IV: Honours Language I
FREN40005_2013_SM1:  French IV: Honours Language I
FREN40008_2012_SM1:  French Thesis
FREN40008_2012_SM2:  French Thesis
FREN40008_2013_SM1:  French Thesis
FREN40009_2013_SM1:  French Thesis
FREN40009_2013_SM2:  French Thesis
FREN90001_2012_RS1:  Major Thesis - French
GEND10001_2012_SM2:  Introducing Gender: Sex, Sport and Film
GEND10001_2013_SM2:  Introducing Gender: Sex, Sport and Film
GEND20001_2012_SM2:  Sex, Gender and Power
GEND20003_2012_SM1:  Genders, Bodies, Borders
GEND20003_2013_SM1:  Genders, Bodies, Borders
GEND20006_2013_SM2:  Sexing the Canvas: 10 Works in the NGV
GEND20007_2013_SM2:  Hidden Histories: Gender and Testimony
GEND30002_2012_SM2:  The Future of Sex and Gender
GEND30002_2013_SM2:  The Future of Sex and Gender
GEND40001_2013_SM1:  Gender Studies Thesis
GEND40002_2012_SM1:  Gender Studies Reading Course
GEND40002_2013_SM1:  Gender Studies Reading Course
GEND40003_2012_SM1:  Gender in Cross-Cultural Perspective
GEND90003_2012_RS2:  Major Thesis - Gender Studies
GEND90004_2012_SM1:  Minor Thesis - Gender and Development
GEND90004_2012_SM2:  Minor Thesis - Gender and Development
GEND90004_2013_SM1:  Minor Thesis - Gender and Development
GEND90004_2013_SM2:  Minor Thesis - Gender and Development
GEND90006_2012_SM1:  Gender, Globalisation and Development
GEND90006_2013_SM1:  Gender, Globalisation and Development
GEND90007_2012_SM2:  Rethinking Rights and Global Development
GEND90007_2013_SM2:  Rethinking Rights and Global Development
GEND90008_2012_SM1:  Gender Reading Course
GEND90008_2012_SM2:  Gender Reading Course
GEND90008_2013_SM1:  Gender Reading Course
GEND90008_2013_SM2:  Gender Reading Course
GERM10001_2012_SM1:  German 3
GERM10001_2013_SM1:  German 3
GERM10002_2012_SM2:  German 4
GERM10002_2013_SM2:  German 4
GERM10004_2012_SM1:  German 1
GERM10004_2013_SM1:  German 1
GERM10005_2012_SM2:  German 2
GERM10005_2013_SM2:  German 2
GERM10006_2012_SM1:  German 5
GERM10006_2013_SM1:  German 5
GERM10007_2012_SM2:  German 6
GERM10007_2013_SM2:  German 6
GERM10008_2013_SM1:  German 7
GERM20001_2012_SM1:  German Language and Culture 2A
GERM20001_2013_SM1:  German 7
GERM20002_2012_SM2:  German Language and Culture 2B
GERM20002_2013_SM2:  German 8
GERM20003_2012_SM1:  German Cultural Studies 2
GERM20003_2012_SM2:  German Cultural Studies 2
GERM20003_2013_SM1:  German Cultural Studies B
GERM20003_2013_SM2:  German Cultural Studies B
GERM20004_2012_SM1:  German 3
GERM20004_2013_SM1:  German 3
GERM20005_2012_SM2:  German 4
GERM20005_2013_SM2:  German 4
GERM20006_2012_SM1:  German Intermediate Cultural Studies
GERM20006_2013_SM2:  German Cultural Studies A
GERM20007_2013_SM1:  German 5
GERM20008_2013_SM2:  German 6
GERM30001_2012_SM1:  German Post-Inter Cultural Studies
GERM30001_2012_SM2:  German Post-Inter Cultural Studies
GERM30001_2013_SM1:  German Post-Inter Cultural Studies
GERM30001_2013_SM2:  German Post-Inter Cultural Studies
GERM30001_2013_SM1:  German Cultural Studies B
GERM30001_2013_SM2:  German Cultural Studies B
GERM30002_2012_SM1:  German Cultural Studies 3
GERM30002_2012_SM2:  German Cultural Studies 3
GERM30002_2013_SM1:  German Cultural Studies 3
GERM30002_2013_SM2:  German Cultural Studies 3
GERM30003_2012_SM1:  German Language and Culture 3A
GERM30003_2013_SM1:  German Language and Culture 3A
GERM30004_2012_SM2:  German Language and Culture 3B
GERM30004_2013_SM2:  German Language and Culture 3B
GERM30005_2012_SM1:  German Post-Intermediate 3A
GERM30005_2013_SM1:  German 5
GERM30006_2012_SM2:  German Post-Intermediate 3B
GERM30006_2013_SM2:  German 6
GERM40002_2012_SM1:  German 4: Research Project
GERM40002_2013_SM2:  German 4: Research Project
GERM40007_2012_SM1:  Modernity and the Metropolis
GERM40010_2012_SM1:  German Honours Language
GERM40010_2013_SM1:  German Honours Language
GERM40013_2012_SM1:  German Thesis
GERM40013_2012_SM2:  German Thesis
GERM40013_2013_SM1:  German Thesis
GERM40015_2013_SM2:  German Thesis
HEBR10001_2012_SM1:  Beginners Hebrew A
HEBR10001_2013_SM1:  Beginners Hebrew A
HEBR10002_2012_SM2:  Beginners Hebrew B
HEBR10002_2013_SM2:  Beginners Hebrew B
HEBR10003_2013_SM1:  Intermediate Hebrew A
HEBR10005_2012_SM1:  Intermediate Hebrew C
HEBR10006_2012_SM2:  Intermediate Hebrew D
HEBR10011_2012_SM1:  Advanced Hebrew C
HEBR10012_2012_SM2:  Advanced Hebrew D
HEBR10013_2013_SM1:  Advanced Hebrew A
HEBR10014_2013_SM2:  Advanced Hebrew B
HEBR20003_2013_SM1:  Intermediate Hebrew A
HEBR20005_2012_SM1:  Intermediate Hebrew C
HEBR20006_2012_SM2:  Intermediate Hebrew D
HEBR20011_2012_SM1:  Beginners Hebrew A
HEBR20011_2013_SM1:  Beginners Hebrew A
HEBR20012_2012_SM2:  Beginners Hebrew B
HEBR20012_2013_SM2:  Beginners Hebrew B
HEBR30001_2012_SM1:  Intermediate Hebrew C
HEBR30002_2012_SM2:  Intermediate Hebrew D
HEBR30003_2012_SM1:  Advanced Hebrew C
HEBR30006_2012_SM1:  Beginners Hebrew A
HEBR30006_2013_SM1:  Beginners Hebrew A
HEBR30010_2012_SM2:  Beginners Hebrew B
HEBR30013_2013_SM1:  Intermediate Hebrew A
HEBR30014_2013_SM2:  Intermediate Hebrew B
HIST10007_2012_SM1:  Medieval Plague, War and Heresy
HIST10007_2013_SM1:  Medieval Plague, War and Heresy
HIST10010_2012_SM2:  Age of Empires, 1720 - 1914
HIST10010_2013_SM2:  Age of Empires
HIST10011_2012_SM2:  The History of Now
HIST10012_2013_SM2:  The World Since World War II
HIST20010_2012_SM2:  Great Empires of Islamic Civilisation
HIST20010_2013_SM2:  Great Empires of Islamic Civilisation
HIST20013_2012_FEB:  The Holocaust & Genocide
HIST20013_2013_SM1:  The Holocaust & Genocide
HIST20019_2012_SUM:  The Graeco-Roman City in Antiquity
HIST20034_2012_SM2:  Modern Southeast Asia
HIST20034_2013_SM1:  Modern Southeast Asia
HIST20035_2012_SM1:  Modern & Contemporary Ireland Since 1790
HIST20043_2013_SM1:  The USA & the World:Democracy and Empire
HIST20059_2012_SM2:  U.S. History to 1941: Claiming Freedom
HIST20059_2013_SM2:  U.S. History to 1941: Claiming Freedom
HIST20060_2012_SM1:  Total War: World War Two
HIST20060_2013_SM2:  Total War: World War Two
HIST20062_2012_JAN:  UNott:The Contemporary World Since 1945
HIST20062_2013_JAN:  UNott:The Contemporary World Since 1945
HIST20064_2012_SM2:  The Russian Revolution 1890-1924
HIST20065_2012_SM1:  Rebels and Revolutionaries
HIST20065_2013_SM2:  Rebels and Revolutionaries
HIST20066_2012_SM1:  Australian History
HIST20066_2013_SM1:  Australian History
HIST20067_2013_SM2:  Contact, Conflict, New Worlds: 1450-1750
HIST20068_2012_SM2:  The French Revolution
HIST20068_2013_SM1:  The French Revolution
HIST30006_2012_SM1:  The Renaissance in Italy
HIST30006_2013_SM2:  The Renaissance in Italy
HIST30010_2012_SM2:  Hitler\'s Germany
HIST30010_2013_SM1:  Hitler\'s Germany
HIST30014_2012_JAN:  Making China Modern
HIST30014_2013_JAN:  Making China Modern
HIST30015_2012_SM1:  The Modern Middle East
HIST30015_2013_SM2:  The Modern Middle East
HIST30018_2012_JAN:  The Graeco-Roman City in Antiquity
HIST30022_2012_SM1:  Age of Stalin 1924 - 1953
HIST30026_2012_SM2:  The History of the Arab-Israeli Conflict
HIST30059_2012_SM1:  Race in America
HIST30059_2013_SM2:  Race in America
HIST30060_2012_SM2:  Making History
HIST30060_2013_SM2:  Making History
HIST30062_2012_SM2:  (Re) Viewing History: History on Screen
HIST30062_2013_SM1:  (Re) Viewing History: History on Screen
HIST30064_2013_SM1:  Controversies in Australian History
HIST30065_2013_SM1:  The USA & the World:Democracy and Empire
HIST40028_2012_SM1:  History Thesis
HIST40028_2012_SM2:  History Thesis
HIST40028_2013_SM1:  History Thesis
HIST40028_2013_SM2:  History Thesis
HIST40030_2012_SM1:  History for Historians
HIST40030_2013_SM1:  History for Historians
HIST40031_2012_SM1:  Famine in Historical Perspective
HIST40033_2012_SM1:  Major Issues in Modern American History
HIST40033_2013_SM2:  Major Issues in Modern American History
HIST40034_2012_SM1:  Feeling the Past: A History of Emotion
HIST40034_2013_SM1:  Feeling the Past: A History of Emotion
HIST40035_2012_SM2:  Ireland Down Under
HIST40036_2013_SM1:  History Thesis
HIST40036_2013_SM2:  History Thesis
HIST90001_2012_RS1:  Major Thesis - History
HIST90001_2012_RS2:  Major Thesis - History
HIST90001_2013_RS1:  Major Thesis - History
HIST90017_2012_RS1:  PhD Research
HIST90017_2012_RS2:  PhD Research
HIST90017_2013_RS1:  PhD Research
HIST90023_2012_SM2:  The Writing of Australian History
HIST90023_2013_SM1:  The Writing of Australian History
HIST90024_2012_SM1:  International History
HIST90024_2012_SM2:  International History
HIST90024_2013_SM1:  International History
HIST90024_2013_SM2:  International History
HIST90026_2012_SM2:  History, Memory and Violence in Asia
HIST90026_2013_SM2:  History, Memory and Violence in Asia
HIST90027_2012_SM2:  Middle Eastern Wars: Jihad & Resistance
HIST90031_2013_SM1:  International Relations Minor Thesis
HIST90031_2013_SM2:  International Relations Minor Thesis
HPSC10001_2012_SM2:  From Plato to Einstein
HPSC10001_2013_SM2:  From Plato to Einstein
HPSC10002_2012_SM1:  Science and Pseudoscience
HPSC10002_2013_SM1:  Science and Pseudoscience
HPSC20001_2012_SM1:  Darwinism: history of a very big idea
HPSC20001_2013_SM2:  Darwinism: history of a very big idea
HPSC20002_2012_JAN:  A History of Nature
HPSC20002_2013_JAN:  A History of Nature
HPSC20009_2012_SM2:  Cybersociety
HPSC20009_2013_SM1:  iSociety: Technology and Contemporary Life
HPSC20015_2012_JAN:  Astronomy in World History
HPSC20015_2013_FEB:  Astronomy in World History
HPSC20020_2012_SM2:  God and the Natural Sciences
HPSC20020_2013_SM2:  God and the Natural Sciences
HPSC20021_2013_JAN:  Critical Reasoning
HPSC20021_2013_SM1:  Critical Reasoning
HPSC30002_2012_SM2:  Minds&Madness (Science 3)
HPSC30002_2013_SM1:  Minds&Madness (Science 3)
HPSC30004_2012_SM1:  Darwinism: history of a very big idea S3
HPSC30004_2013_SM2:  Darwinism: history of a very big idea S3
HPSC30008_2012_JAN:  Astronomy in World History (Science 3)
HPSC30019_2012_SM2:  Minds and Madness
HPSC30019_2013_SM1:  Minds and Madness
HPSC30023_2012_SM1:  Science and Society
HPSC30023_2013_SM1:  Science and Society
HPSC30025_2013_JUL:  Philosophy of Biology (Science 3)
HPSC30028_2012_JUL:  Philosophy of Biology
HPSC30028_2013_JUL:  Philosophy of Biology
HPSC30032_2012_SM2:  God and the Natural Sciences (Science 3)
HPSC30034_2012_SM1:  The Rise of Modern Science, 1500-1750
HPSC30034_2013_SM1:  The Rise of Modern Science, 1500-1750
HPSC30035_2012_SM2:  Knowledge in the Making
HPSC30035_2013_SM2:  Knowledge in the Making
HPSC40002_2012_SM1:  Directed Study
HPSC40002_2012_SM2:  Directed Study
HPSC40002_2013_SM1:  Directed Study
HPSC40010_2012_SM1:  HPS Thesis
HPSC40010_2012_SM2:  HPS Thesis
HPSC40010_2013_SM1:  HPS Thesis
HPSC40011_2012_SM1:  Medicine and Culture
HPSC40012_2012_SM2:  Beyond the Spin:Technoscientific Failure
HPSC40013_2012_SM2:  The Western Tradition & its Discontents
HPSC40014_2012_SM1:  Science and Ideology in the 20th Century
HPSC40016_2013_SM1:  Classic Texts in HPS
HPSC90001_2012_RS1:  Major Thesis - HPS
HPSC90001_2012_RS2:  Major Thesis - HPS
HPSC90001_2013_RS1:  Major Thesis - HPS
INDO10001_2012_SM1:  Indonesian 3
INDO10001_2013_SM1:  Indonesian 3
INDO10002_2012_SM2:  Indonesian 4
INDO10002_2013_SM2:  Indonesian 4
INDO10003_2012_SM1:  Indonesian 5
INDO10003_2013_SM1:  Indonesian 5
INDO10004_2012_SM2:  Indonesian 6
INDO10004_2013_SM2:  Indonesian 6
INDO10005_2012_SM1:  Indonesian 1
INDO10005_2013_SM1:  Indonesian 1
INDO10006_2012_SM2:  Indonesian 2
INDO10006_2013_SM2:  Indonesian 2
INDO10007_2012_SM1:  Indonesian 4A
INDO10011_2013_SM2:  Diversity: Identities in Indonesia
INDO10013_2013_SM1:  Translation: Intercultural Indonesian
INDO10014_2013_SM1:  Unity: Evolving Indonesian Nationhood
INDO20001_2012_SM1:  Analysing Indonesia: Concepts and Issues
INDO20001_2013_SM1:  Analysing Indonesia: Concepts and Issues
INDO20003_2012_SM2:  Indonesian 4B
INDO20006_2012_SM1:  Indonesian 3
INDO20006_2013_SM1:  Indonesian 3
INDO20007_2012_SM2:  Indonesian 4
INDO20007_2013_SM2:  Indonesian 4
INDO20008_2012_SM1:  Indonesian 5
INDO20008_2013_SM1:  Indonesian 5
INDO20009_2012_SM2:  Indonesian 6
INDO20009_2013_SM2:  Indonesian 6
INDO20016_2013_SM1:  Translation: Intercultural Indonesian
INDO30002_2012_SM2:  Mass Media in Indonesia
INDO30003_2013_SM2:  Popular Cultures in Indonesia
INDO30006_2013_SM2:  Literature: Reading Indonesian Lives
INDO30007_2012_SM2:  Indonesian 6
INDO30007_2013_SM2:  Indonesian 6
INDO30009_2012_SM1:  Indonesian 4A
INDO30010_2012_SM2:  Indonesian 4B
INDO30011_2012_SM1:  Indonesian 5
INDO30011_2013_SM1:  Indonesian 5
INDO30018_2013_SM2:  Diversity: Identities in Indonesia
INDO30019_2013_SM1:  Translation: Intercultural Indonesian
INDO30020_2013_SM1:  Unity: Evolving Indonesian Nationhood
INDO40001_2012_SM1:  Honours Indonesian A
INDO40002_2012_SM2:  Honours Indonesian B
INDO40003_2012_SM1:  Topics in Indonesian Studies
INDO40003_2013_SM1:  Topics in Indonesian Studies
INDO40006_2013_SM2:  Indonesian Thesis
INDO90002_2012_SM1:  Postgraduate Indonesian A
INDO90002_2013_SM1:  Postgraduate Indonesian A
INTS10001_2012_SM2:  International Politics
INTS10001_2013_SM2:  International Politics
INTS90007_2012_SM2:  Globalisation and China
INTS90007_2013_SM2:  Globalisation and China
INTS90008_2012_SM1:  Education and State Power in China
INTS90008_2013_SM1:  Education and State Power in China
ISLM10001_2012_SM1:  Understanding Islam and Muslim Societies
ISLM10001_2013_SM1:  Understanding Islam and Muslim Societies
ISLM10002_2012_SM2:  Islam in the Modern World
ISLM10002_2013_SM2:  Islam in the Modern World
ISLM20003_2012_SM2:  The Qur\'an: An Introduction
ISLM20003_2013_SM2:  The Qur\'an: An Introduction
ISLM20009_2012_SM1:  Islam, Media and Conflict
ISLM20009_2013_SM1:  Islam, Media and Conflict
ISLM20015_2012_SM2:  Crisis Zone: Middle Eastern Politics
ISLM20015_2013_SM1:  Crisis Zone: Middle Eastern Politics
ISLM30001_2012_SM2:  Islam in the West
ISLM30001_2013_SM2:  Islam in the West
ISLM30003_2012_SM2:  Ethical Traditions in Islam
ISLM30003_2013_SM2:  Ethical Traditions in Islam
ISLM30015_2012_SM2:  Crisis Zone: Middle Eastern Politics
ISLM30015_2013_SM1:  Crisis Zone: Middle Eastern Politics
ISLM40001_2012_SM2:  Topics in Arabic & Islamic Studies
ISLM40001_2013_SM1:  Topics in Arabic & Islamic Studies
ISLM40001_2013_SM2:  Topics in Arabic & Islamic Studies
ISLM40002_2012_JUN:  The Qur\'an and its Interpretation
ISLM40003_2012_MAY:  Methodologies of Hadith
ISLM40003_2012_SM1:  Methodologies of Hadith
ISLM40004_2012_SM1:  Islamic Theology: Schools and Methods
ISLM40005_2012_SM2:  Muslim Philosophical Traditions
ISLM40009_2012_SM1:  Islamic Studies Thesis
ISLM40009_2012_SM2:  Islamic Studies Thesis
ISLM40009_2013_SM1:  Islamic Studies Thesis
ISLM40009_2013_SM2:  Islamic Studies Thesis
ISLM40010_2013_SM1:  Islamic Studies Thesis
ISLM40010_2013_SM2:  Islamic Studies Thesis
ISLM90007_2012_FEB:  Contemporary Middle East & Central Asia
ISLM90007_2013_FEB:  Contemporary Middle East & Central Asia
ISLM90008_2012_JUL:  Islam and Politics
ISLM90008_2013_JUL:  Islam and Politics
ISLM90011_2013_SM2:  Reason and Revelation in Islam
ISLM90012_2013_JUL:  The Qur\'an and the Prophet in Islam
ISLM90013_2013_MAY:  Human Rights and Islam
ISLM90014_2013_SM1:  Islamic Studies Thesis
ITAL10001_2012_SM1:  Italian 3
ITAL10001_2013_SM1:  Italian 3
ITAL10002_2012_SM2:  Italian 4
ITAL10002_2013_SM2:  Italian 4
ITAL10004_2012_SM1:  Italian 1
ITAL10004_2013_SM1:  Italian 1
ITAL10005_2012_SM2:  Italian 2
ITAL10005_2013_SM2:  Italian 2
ITAL10006_2012_SM1:  Italian 5
ITAL10006_2013_SM1:  Italian 5
ITAL10007_2012_SM2:  Italian 6
ITAL10007_2013_SM2:  Italian 6
ITAL20001_2012_SM1:  Italian Cultural Studies 2
ITAL20001_2013_SM1:  Italian Cultural Studies B
ITAL20002_2012_SM1:  Italian Language and Culture 2A
ITAL20002_2013_SM1:  Italian 7
ITAL20003_2012_SM2:  Italian Language and Culture 2B
ITAL20003_2013_SM2:  Italian 8
ITAL20004_2012_NOV:  Contemporary Italy Study Abroad
ITAL20007_2012_SM1:  Italian 3
ITAL20007_2013_SM1:  Italian 3
ITAL20008_2012_SM2:  Italian 4
ITAL20008_2013_SM2:  Italian 4
ITAL20009_2012_SM2:  Italian Intermediate Cultural Studies
ITAL20009_2013_SM2:  Italian Cultural Studies A
ITAL20010_2012_SM2:  Italian 6
ITAL20010_2013_SM2:  Italian 6
ITAL20011_2012_SM1:  Italian 5
ITAL20011_2013_SM1:  Italian 5
ITAL30001_2012_SM1:  Italian Language and Culture 3A
ITAL30001_2013_SM1:  Italian Language and Culture 3A
ITAL30003_2012_SM1:  Italian Post-Intermediate 3A
ITAL30003_2013_SM1:  Italian 5A
ITAL30005_2012_NOV:  Contemporary Italy Study Abroad
ITAL30006_2013_SM2:  Italian Fictions
ITAL30007_2012_SM1:  To Hell with Dante
ITAL30007_2013_SM1:  To Hell with Dante
ITAL30010_2012_SM2:  Imaging Italy
ITAL30015_2013_SM1:  Italian 7
ITAL30016_2013_SM2:  Italian 8
ITAL40001_2012_SM1:  Italian Honours Language Seminar 1
ITAL40001_2013_SM1:  Italian Honours Language Seminar 1
ITAL40007_2012_SM2:  Italian Fictions Advanced
ITAL40011_2012_SM1:  Italian Thesis
ITAL40011_2012_SM2:  Italian Thesis
ITAL40011_2013_SM1:  Italian Thesis
ITAL40014_2013_SM1:  Italian Thesis
ITAL40014_2013_SM2:  Italian Thesis
JAPN10001_2012_SM1:  Japanese 1
JAPN10001_2013_SM1:  Japanese 1
JAPN10002_2012_SM2:  Japanese 2
JAPN10002_2013_SM2:  Japanese 2
JAPN10003_2012_SM1:  Japanese 5
JAPN10003_2013_SM1:  Japanese 5
JAPN10004_2012_SM2:  Japanese 6
JAPN10004_2013_SM2:  Japanese 6
JAPN10005_2012_SM1:  Japanese 7
JAPN10005_2013_SM1:  Japanese 7
JAPN10006_2012_SM2:  Japanese 8
JAPN10006_2013_SM2:  Japanese 8
JAPN10007_2012_SM1:  Japanese 3
JAPN10007_2013_SM1:  Japanese 3
JAPN10008_2012_SM2:  Japanese 4
JAPN10008_2013_SM2:  Japanese 4
JAPN10009_2013_SM2:  Reading Japanese Literature
JAPN10010_2013_SM1:  Variation in Japanese Language
JAPN20002_2012_SM2:  Introduction to Japanese Communication
JAPN20002_2013_SM2:  Introduction to Japanese Communication
JAPN20003_2012_SM1:  Japanese 7
JAPN20003_2013_SM1:  Japanese 7
JAPN20004_2012_SM2:  Japanese 8
JAPN20004_2013_SM2:  Japanese 8
JAPN20005_2012_SM2:  Contemporary Japan
JAPN20005_2013_SM1:  Contemporary Japan
JAPN20007_2012_SM1:  Japanese 3
JAPN20007_2013_SM1:  Japanese 3
JAPN20008_2012_SM2:  Japanese 4
JAPN20008_2013_SM2:  Japanese 4
JAPN20009_2012_SM1:  Sign and Symbols in Japanese
JAPN20009_2013_SM1:  Sign and Symbols in Japanese
JAPN20010_2012_SM2:  Japanese Grammar in Action
JAPN20010_2013_SM2:  Japanese Grammar in Action
JAPN20011_2012_SM2:  Reading Japanese Literature
JAPN20011_2013_SM2:  Reading Japanese Literature
JAPN20012_2012_SM1:  Variation in Japanese Language
JAPN20012_2013_SM1:  Variation in Japanese Language
JAPN20013_2012_SM1:  Japanese 5
JAPN20013_2013_SM1:  Japanese 5
JAPN20014_2012_SM2:  Japanese 6
JAPN20014_2013_SM2:  Japanese 6
JAPN20016_2012_SM2:  Japanese Through Translation
JAPN20018_2013_SM1:  Japanese Through the Media
JAPN30002_2012_SM2:  Social Problems in Japan
JAPN30002_2013_SM2:  Social Problems in Japan
JAPN30003_2012_SM2:  Japanese Through Translation
JAPN30003_2013_SM2:  Japanese Through Translation
JAPN30004_2012_SM1:  Japanese through the Media
JAPN30004_2013_SM1:  Japanese through the Media
JAPN30005_2012_SM1:  Japanese 7
JAPN30005_2013_SM1:  Japanese 7
JAPN30006_2012_SM2:  Japanese 8
JAPN30006_2013_SM2:  Japanese 8
JAPN30007_2012_SM1:  Japanese 5
JAPN30007_2013_SM1:  Japanese 5
JAPN30008_2012_SM2:  Japanese 6
JAPN30008_2013_SM2:  Japanese 6
JAPN30010_2012_SM1:  Sign and Symbols in Japanese
JAPN30010_2013_SM1:  Sign and Symbols in Japanese
JAPN30011_2012_SM2:  Reading Japanese Literature
JAPN30011_2013_SM2:  Reading Japanese Literature
JAPN30012_2012_SM1:  Variation in Japanese Language
JAPN30012_2013_SM1:  Variation in Japanese Language
JAPN30013_2012_SM2:  Japanese Grammar in Action
JAPN30013_2013_SM2:  Japanese Grammar in Action
JAPN40001_2012_SM1:  Honours Japanese A
JAPN40001_2013_SM1:  Honours Japanese A
JAPN40002_2012_SM2:  Honours Japanese B
JAPN40002_2013_SM2:  Honours Japanese B
JAPN40006_2012_SM2:  Japanese Thesis
JAPN40007_2013_SM1:  Japanese Thesis
JAPN40007_2013_SM2:  Japanese Thesis
JAPN90002_2012_SM1:  Postgraduate Japanese A
JAPN90002_2013_SM1:  Postgraduate Japanese A
JAPN90003_2013_SM2:  Postgraduate Japanese B
JEWI10001_2012_SM1:  A History of Israel: Good Bad & Disputed
JEWI10001_2013_SM1:  Modern Israel: Good Bad and Disputed
JEWI20005_2012_SM1:  Israel: Conflicts & Culture
JEWI30005_2012_SM2:  Research in Contemporary Jewish Studies
JEWI30005_2013_SM2:  Research in Contemporary Jewish Studies
JOUR90001_2012_SM1:  Researching/Writing Stories
JOUR90001_2013_SM1:  Researching/Writing Stories
JOUR90002_2013_SM2:  Journalism Thesis
JOUR90003_2012_SM1:  Journalism Internship
JOUR90003_2012_SM2:  Journalism Internship
JOUR90003_2013_SM1:  Journalism Internship
JOUR90003_2013_SM2:  Journalism Internship
JOUR90004_2012_SM2:  Journalism Entrepreneurship
JOUR90004_2013_SM2:  Journalism Entrepreneurship in New Media
JOUR90005_2012_MAY:  Journalism Futures
JOUR90005_2013_JUN:  Video and Audio Journalism
JOUR90006_2012_JUN:  Dilemmas in Journalism: Law and Ethics
JOUR90006_2013_JUN:  Dilemmas in Journalism: Law and Ethics
JOUR90007_2012_SM2:  Special Study in Journalism
JOUR90008_2013_SM1:  Advanced Multi Media Journalism
JOUR90009_2013_SM2:  Advanced Non Fiction Writing
JOUR90010_2013_SM1:  Applied Professional Practice/Journalism
JOUR90010_2013_SM2:  Applied Professional Practice/Journalism
JOUR90011_2013_JAN:  Data Journalism
JOUR90012_2013_JAN:  Journalism Project
JOUR90012_2013_SM1:  Journalism Project
JOUR90012_2013_SM2:  Journalism Project
JOUR90013_2013_SM2:  Public Interest Investigations
LING10001_2012_SM1:  The Secret Life of Language
LING10001_2013_SM2:  The Secret Life of Language
LING10002_2012_SM2:  Intercultural Communication
LING10002_2013_SM1:  Intercultural Communication
LING20003_2012_SM2:  Second Language Learning and Teaching
LING20003_2013_SM2:  Second Language Learning and Teaching
LING20005_2012_SM1:  Phonetics
LING20005_2013_SM1:  Phonetics
LING20006_2012_SM2:  Syntax
LING20006_2013_SM2:  Syntax
LING20009_2012_SM1:  Language in Aboriginal Australia
LING20009_2013_SM1:  Language in Aboriginal Australia
LING20010_2012_SM2:  Language, Society and Culture
LING20010_2013_SM2:  Language, Society and Culture
LING20011_2012_SM1:  Grammar of English
LING20011_2013_SM1:  Grammar of English
LING20012_2013_SM2:  Language and Media
LING30001_2012_SM2:  Exploring Linguistic Diversity
LING30001_2013_SM2:  Exploring Linguistic Diversity
LING30002_2012_SM2:  Phonology
LING30002_2013_SM1:  Phonology
LING30003_2013_SM1:  First Language Acquisition
LING30004_2013_SM2:  Discourse & Pragmatics
LING30007_2012_SM1:  Semantics
LING30007_2013_SM1:  Semantics
LING30011_2012_SM2:  Computer Mediated Communication
LING30012_2012_SM1:  Language and Identity
LING30013_2012_SM1:  Morphology
LING40001_2012_SM1:  Directed Reading Project
LING40001_2012_SM2:  Directed Reading Project
LING40001_2013_SM1:  Directed Reading Project
LING40001_2013_SM2:  Directed Reading Project
LING40002_2012_SM1:  Issues in Linguistic Research
LING40002_2013_SM1:  Issues in Linguistic Research
LING40003_2012_SM1:  Discourse Analysis and Representation
LING40004_2012_SM2:  Seminars in Theoretical Linguistics
LING40005_2012_SM1:  Structure of Aboriginal Languages
LING40006_2013_SM2:  Linguistic Field Methods
LING40008_2013_SM1:  Experimental Phonetics
LING40012_2012_SM1:  Linguistics & Applied Linguistics Thesis
LING40012_2012_SM2:  Linguistics & Applied Linguistics Thesis
LING40012_2013_SM1:  Linguistics & Applied Linguistics Thesis
LING40013_2012_SM2:  Methods in Sociolinguistic Research
LING40014_2013_SM1:  Linguistics & Applied Linguistics Thesis
LING40014_2013_SM2:  Linguistics & Applied Linguistics Thesis
LING90002_2012_SM1:  Presenting Academic Discourse
LING90002_2012_SM2:  Presenting Academic Discourse
LING90002_2013_SM1:  Presenting Academic Discourse
LING90002_2013_SM2:  Presenting Academic Discourse
LING90003_2012_SM1:  Research in Applied Linguistics
LING90003_2013_SM1:  Research in Applied Linguistics
LING90005_2012_SM1:  Quantitative Methods in Language Studies
LING90005_2013_SM1:  Quantitative Methods in Language Studies
LING90006_2012_SM2:  Technology and Language Learning
LING90006_2013_SM2:  Technology and Language Learning
LING90009_2012_SM2:  Language Testing
LING90009_2013_SM2:  Language Testing
LING90010_2012_SM1:  Minor Thesis - Applied Linguistics
LING90010_2012_SM2:  Minor Thesis - Applied Linguistics
LING90010_2013_SM1:  Minor Thesis - Applied Linguistics
LING90010_2013_SM2:  Minor Thesis - Applied Linguistics
LING90012_2012_SM2:  Second Language Acquisition
LING90012_2013_SM2:  Second Language Acquisition
LING90013_2012_RS2:  Major Thesis - Linguistics
LING90013_2013_RS1:  Major Thesis - Linguistics
LING90014_2013_RS1:  Shorter Thesis - Applied Linguistics
LING90015_2012_SM2:  English Phonetics and Phonology
LING90015_2013_SM2:  English Phonetics and Phonology
LING90016_2012_SM1:  Grammar & Discourse
LING90016_2013_SM1:  Grammar in Use
LING90018_2012_SM1:  Sociolinguistics and Language Learning
LING90018_2013_SM1:  Sociolinguistics and Language Learning
LING90019_2012_SM2:  English in a Globalised World
LING90019_2013_SM2:  English in a Globalised World
LING90020_2012_SM1:  Second Language Writing
LING90020_2013_SM1:  Second Language Writing
LING90022_2012_JAN:  Intensive Academic Preparation
LING90022_2012_JUN:  Intensive Academic Preparation
LING90022_2013_JAN:  Intensive Academic Program
LING90023_2012_RS1:  PhD Research
LING90023_2012_RS2:  PhD Research
LING90023_2013_RS1:  PhD Research
LING90026_2012_SM2:  Trans-Cultural Communication at Work
LING90026_2013_SM2:  Trans-Cultural Communication at Work
LING90028_2013_SM1:  Discourse and Interaction
MAST10014_2012_SM1:  Foundation Mathematics for Commerce 1
MAST10014_2013_SM1:  Foundation Mathematics for Commerce 1
MAST10015_2012_SM2:  Foundation Mathematics for Commerce 2
MAST10015_2013_SM2:  Foundation Mathematics for Commerce 2
MC-APLING_2013_MDYI:  Master of Applied Linguistics
MC-APLING_2013_STYI:  Master of Applied Linguistics
MC-PUBCOM_2012_MDYI:  Master of Publishing and Communications
MC-PUBCOM_2012_STYI:  Master of Publishing and Communications
MC-PUBCOM_2012_SUMI:  Master of Publishing and Communications
MC-PUBCOM_2013_MDYI:  Master of Publishing and Communications
MC-PUBCOM_2013_STYI:  Master of Publishing and Communications
MECM10003_2012_SM1:  Media and Society
MECM10003_2013_SM1:  Media and Society
MECM20003_2012_SM2:  Net Communications
MECM20003_2013_SM2:  Net Communications
MECM20004_2012_SM2:  Asian Public Relations
MECM20006_2012_SM1:  Understanding Australian Media
MECM20006_2013_SM1:  Understanding Australian Media
MECM20009_2012_SM1:  Introduction to Media Writing
MECM20009_2013_SM1:  Introduction to Media Writing
MECM20010_2012_SM2:  Comparing Media Systems
MECM20010_2013_SM2:  Comparing Media Systems
MECM20011_2013_SM2:  Approaches to Media Research
MECM30002_2012_SM2:  Perspectives in Global Media Cultures
MECM30002_2013_SM2:  Perspectives in Global Media Cultures
MECM30004_2012_SM2:  Media Futures and New Technologies
MECM30004_2013_SM2:  Media Futures and New Technologies
MECM30005_2012_SM2:  Media Law
MECM30005_2013_SM2:  Media Law
MECM30006_2012_SM1:  Media and Communications Internship
MECM30006_2012_SM2:  Media and Communications Internship
MECM30006_2013_SM1:  Media and Communications Internship
MECM30006_2013_SM2:  Media and Communications Internship
MECM30007_2012_SM1:  Media & Communications Research Project
MECM30007_2012_SM2:  Media & Communications Research Project
MECM30007_2013_SM1:  Media & Communications Research Project
MECM30007_2013_SM2:  Media & Communications Research Project
MECM30008_2012_SM2:  Advanced Writing
MECM30008_2013_SM2:  Advanced Writing
MECM30010_2012_SM1:  Writing Journalism
MECM30010_2013_SM1:  Writing Journalism
MECM30013_2012_SM2:  Marketing Communications
MECM30013_2013_SM2:  Marketing Communications
MECM30014_2012_SM1:  Media and Communications Research
MECM30015_2013_SM1:  Media and Communications Project
MECM40003_2012_SM1:  Researching Audiences and Reception
MECM40003_2013_SM1:  Researching Audiences and Reception
MECM40006_2012_JAN:  Public Relations and Communications
MECM40006_2013_SM1:  Public Relations and Communications
MECM40007_2012_SM2:  Journalism Studies
MECM40007_2013_SM2:  Change in Journalism
MECM40011_2012_SM2:  Writing for the Media
MECM40011_2013_SM2:  Writing for the Media
MECM40014_2012_SM2:  Global Media: Theory and Research
MECM40014_2013_SM1:  Global Media: Theory and Research
MECM40016_2012_SM2:  Audiovisual Communication
MECM40016_2013_SM2:  Audiovisual Communication
MECM40017_2013_SM1:  Media & Communications Thesis
MECM40017_2013_SM2:  Media & Communications Thesis
MECM50001_2012_SM1:  Political Economy of the Network Society
MECM50001_2013_SM1:  Political Economy of the Network Society
MECM90002_2012_SM2:  Global Media Governance
MECM90002_2013_SM2:  Global Media Governance
MECM90003_2012_SM1:  Mobility, Culture and Communication
MECM90003_2013_SM1:  Mobility, Culture and Communication
MECM90004_2013_RS1:  Shorter Thesis - Media Communication
MECM90007_2012_SM2:  Media Convergence and Digital Culture
MECM90007_2013_SM2:  Media Convergence and Digital Culture
MECM90009_2012_SM1:  Global Crisis Reporting
MECM90009_2013_SM1:  Global Crisis Reporting
MECM90010_2012_JUL:  Strategic Political Communication
MECM90012_2012_SM1:  Media and Communications Thesis
MECM90012_2012_SM2:  Media and Communications Thesis
MECM90012_2013_SM1:  Media and Communications Thesis
MECM90012_2013_SM2:  Media and Communications Thesis
MECM90015_2012_FEB:  History and Philosophy of Media
MECM90015_2013_FEB:  History of Network Media
MECM90016_2012_JAN:  Representation and Advocacy
MECM90016_2013_FEB:  Representation and Advocacy
MECM90017_2012_SM2:  Media Writing: Rhetoric and Practice
MECM90017_2013_SM2:  Media Writing: Rhetoric and Practice
MGMT90126_2012_AUG:  Budgets and Financial Management
MGMT90126_2013_AUG:  Budgets and Financial Management
MGMT90127_2012_MAR:  Leadership Theory & Practice
MGMT90127_2013_MAR:  Leadership Theory & Practice
MGMT90128_2012_JUN:  Project Management
MGMT90128_2013_SEP:  Project Management
MGMT90129_2013_SM2:  Group Project
MGMT90130_2012_SM2:  Internship I
MGMT90130_2013_SM2:  Internship I
MGMT90131_2012_SM1:  Internship II
MGMT90131_2012_SM2:  Internship II
MGMT90131_2013_SM1:  Internship II
MGMT90131_2013_SM2:  Internship II
MGMT90132_2012_JUN:  Professional Communication
MGMT90132_2013_JUL:  Professional Communication
MGMT90160_2012_SEP:  The Secret Life of Organisations
MGMT90160_2013_JUN:  The Secret Life of Organisations
MGMT90161_2012_SM2:  Internship III
MGMT90161_2013_SM2:  Internship III
MGMT90164_2013_SM1:  EMA Special Project
MGMT90164_2013_SM2:  EMA Special Project
MR-ARTSIS_2013_RS1:  Master of Arts (Australian Indigenous Studies)
MR-ARTSTS_2012_RS1:  Master of Arts (Theatre Studies)
MR-ARTSTS_2012_RS2:  Master of Arts (Theatre Studies)
MR-ARTSTS_2013_RS1:  Master of Arts (Theatre Studies)
MULT10001_2012_SM2:  Aboriginalities
MULT10001_2013_SM2:  Aboriginalities
MULT10014_2012_SM1:  Identity
MULT10014_2013_SM1:  Identity
MULT10015_2012_SM1:  Language
MULT10015_2013_SM1:  Language
MULT10016_2012_SM1:  Reason
MULT10016_2013_SM1:  Reason
MULT10017_2012_SM2:  Representation
MULT10017_2013_SM2:  Representation
MULT10018_2012_SM1:  Power
MULT10018_2013_SM1:  Power
MULT20003_2012_SM1:  Critical Analytical Skills
MULT20003_2013_SM1:  Critical Analytical Skills
MULT20008_2012_SM2:  Australian Indigenous Politics
MULT20008_2013_SM2:  Australian Indigenous Politics
MULT20010_2012_SM1:  Arts Internship
MULT20010_2012_SM2:  Arts Internship
MULT20010_2013_SM1:  Arts Internship
MULT20010_2013_SM2:  Arts Internship
MULT20012_2013_SM1:  Community Volunteering for Change
MULT20012_2013_SM2:  Community Volunteering for Change
MULT20013_2013_SM1:  Australia Now
MULT20013_2013_SM2:  Australia Now
MULT30010_2013_SM1:  Internship
MULT30015_2012_SM2:  Independent Research
MULT30015_2013_SUM:  Independent Research
MULT30017_2012_SM1:  Indigenous People and Social Control
MULT30017_2013_SM1:  Indigenous People and Social Control
MULT30018_2012_SM2:  Applied Research Methods
MULT30018_2013_SM2:  Applied Research Methods
MULT30019_2012_SM1:  Arts Internship
MULT30019_2012_SM2:  Arts Internship
MULT30019_2013_SM1:  Arts Internship
MULT30019_2013_SM2:  Arts Internship
MULT30020_2013_SM1:  Community Volunteering for Change
MULT30020_2013_SM2:  Community Volunteering for Change
MULT40005_2012_SM1:  Special Research Subject A
MULT40005_2013_SM1:  Special Research Subject A
MULT40006_2012_SM2:  Special Research Subject B
MULT40006_2013_SM2:  Special Research Subject B
MULT40007_2012_SM1:  Special Research Topics
MULT40007_2012_SM2:  Special Research Topics
MULT40007_2013_SM1:  Special Research Topics
MULT40007_2013_SM2:  Special Research Topics
MULT40008_2013_SM1:  Special Research Subject A
MULT50001_2012_SM1:  Research Principles and Practices
MULT50001_2012_SM2:  Research Principles and Practices
MULT50001_2013_FEB:  Research Principles and Practices
MULT50001_2013_JUL:  Research Principles and Practices
MULT50002_2012_SM2:  Indigenous Peoples in Global Context
MULT50002_2013_SM2:  Indigenous Peoples in Global Context
MULT90002_2012_SM1:  Supervised Reading (Asia Institute)
MULT90002_2012_SM2:  Supervised Reading (Asia Institute)
MULT90002_2013_SM1:  Supervised Reading (Asia Institute)
MULT90008_2012_RS1:  PhD Research
MULT90008_2012_RS2:  PhD Research
MULT90008_2013_RS1:  PhD Research
MULT90018_2012_SM1:  Internship I (Placement Only)
MULT90018_2012_SM2:  Internship I (Placement Only)
MULT90018_2013_SM1:  Internship I (Placement Only)
MULT90018_2013_SM2:  Internship I (Placement Only)
MULT90019_2012_SM1:  Internship II (Placement & Research)
MULT90019_2012_SM2:  Internship II (Placement & Research)
MULT90019_2013_SM1:  Internship II (Placement & Research)
MULT90019_2013_SM2:  Internship II (Placement & Research)
MULT90023_2012_SM1:  Arts PhD Research Workshop
MULT90023_2012_SM2:  Arts PhD Research Workshop
MULT90023_2013_SM1:  Arts PhD Research Workshop
MULT90023_2013_SM2:  Arts PhD Research Workshop
MULT90025_2012_SM1:  Internship III (Placement & Research)
MULT90025_2012_SM2:  Internship III (Placement & Research)
MULT90025_2013_SM1:  Internship II (Year Long)
MULT90025_2013_SM2:  Internship II (Year Long)
MULT90026_2012_AUG:  PhD Elective 1
MULT90026_2012_OCT:  PhD Elective 1
MULT90026_2012_SM1:  PhD Elective 1
MULT90026_2012_SM2:  PhD Elective 1
MULT90026_2012_WIN:  PhD Elective 1
MULT90026_2013_SM1:  PhD Elective 1
MULT90026_2013_SM2:  PhD Elective 1
MULT90026_2013_WIN:  PhD Elective 1
MULT90027_2012_SM1:  PhD Elective 2
MULT90027_2012_SM2:  PhD Elective 2
MULT90027_2012_WIN:  PhD Elective 2
MULT90027_2013_SM1:  PhD Elective 2
MULT90027_2013_SM2:  PhD Elective 2
MULT90027_2013_WIN:  PhD Elective 2
MULT90028_2012_SM1:  GSHSS Advanced Special Study
MULT90028_2013_SM1:  GSHSS Advanced Special Study
PHIL10002_2012_SM1:  Philosophy: The Big Questions
PHIL10002_2013_SM1:  Philosophy: The Big Questions
PHIL10003_2012_SM2:  Philosophy: The Great Thinkers
PHIL10003_2013_SM2:  Philosophy: The Great Thinkers
PHIL10004_2012_SM2:  Ideas and Society
PHIL10004_2013_SM2:  Ideas and Society
PHIL20001_2012_SM1:  Science, Reason and Reality
PHIL20001_2013_SM1:  Science, Reason and Reality
PHIL20008_2012_SM1:  Ethical Theory
PHIL20008_2013_SM1:  Ethical Theory
PHIL20012_2012_SM2:  Justice, Equality and Human Rights
PHIL20018_2012_SM2:  Ethical Dilemmas in Life and Society
PHIL20018_2013_SM2:  Matters of Life and Death
PHIL20030_2012_SM2:  Meaning, Possibility and Paradox
PHIL20030_2013_SM2:  Meaning, Possibility and Paradox
PHIL20033_2012_SM1:  The Philosophy of Mind
PHIL20033_2013_SM1:  The Philosophy of Mind
PHIL20038_2012_SM1:  Nietzsche and Critics
PHIL20038_2013_SM1:  Nietzsche and Critics
PHIL20039_2012_SM2:  Objects, Events and Knowledge
PHIL20039_2013_SM2:  The Nature of Reality
PHIL20040_2012_SM1:  Greek Philosophy
PHIL20040_2013_SM1:  Greek Philosophy
PHIL20041_2012_SM2:  Phenomenology and Existentialism
PHIL20041_2013_SM2:  Phenomenology and Existentialism
PHIL20042_2013_SM2:  Language, Communication and Representation
PHIL30004_2012_SM1:  Science, Reason and Reality (Science 3)
PHIL30007_2012_SM2:  The Philosophy of Philosophy
PHIL30007_2013_SM2:  The Philosophy of Philosophy
PHIL30016_2012_SM2:  Knowledge and the Nature of Reality
PHIL30016_2013_SM2:  Knowledge and Reality
PHIL30024_2012_SM1:  The Foundations of Interpretation
PHIL30024_2013_SM1:  The Foundations of Interpretation
PHIL30043_2012_SM2:  The Power and Limits of Logic
PHIL30043_2013_SM1:  The Power and Limits of Logic
PHIL30047_2012_SM1:  Objectivity and Value
PHIL30047_2013_SM2:  Objectivity and Value
PHIL30050_2013_SM1:  Asian and Comparative Philosophy
PHIL30051_2012_SM1:  Social Philosophy
PHIL30051_2013_SM1:  Social Philosophy: Ethics and War
PHIL40001_2012_SM2:  Realism, Relativism and Naturalism
PHIL40002_2012_SM2:  Recent European Philosophy
PHIL40002_2013_SM2:  Recent European Philosophy
PHIL40003_2012_SM1:  Topics in Moral Psychology
PHIL40003_2013_SM2:  Topics in Moral Psychology
PHIL40004_2012_SM2:  Value Theory
PHIL40004_2013_SM1:  Value Theory
PHIL40005_2012_SM1:  Metaphysics and Epistemology
PHIL40005_2013_SM1:  Topics in Metaphysics
PHIL40007_2012_SM2:  Philosophy of Language and Mind
PHIL40007_2013_SM2:  Philosophy of Language and Mind
PHIL40011_2012_SM1:  Political Philosophy
PHIL40013_2013_SM2:  Uncertainty, Vagueness and Disagreement
PHIL40014_2012_SM1:  Topics in Asian Philosophy
PHIL40014_2013_SM1:  Topics in Asian Philosophy
PHIL40015_2012_SM1:  Philosophy Thesis
PHIL40015_2012_SM2:  Philosophy Thesis
PHIL40015_2013_SM1:  Philosophy Thesis
PHIL40015_2013_SM2:  Philosophy Thesis
PHIL40016_2012_SM1:  The Ethics of Sex
PHIL40017_2013_SM1:  Early Modern Philosophy
PHIL40018_2013_SM2:  Topics in Contempory Epistemology
PHIL40019_2013_SM1:  Philosophy Thesis
PHIL40019_2013_SM2:  Philosophy Thesis
PHIL40020_2013_SM1:  Reading and Writing Philosophy
PHIL90002_2012_RS1:  Major Thesis - Philosophy
PHIL90002_2013_RS1:  Major Thesis - Philosophy
PHIL90003_2012_RS1:  Shorter Thesis - Philosophy
PHIL90003_2012_RS2:  Shorter Thesis - Philosophy
PHIL90003_2013_RS1:  Shorter Thesis - Philosophy
PHIL90004_2012_SM1:  Ethical Theory and Practice
PHIL90004_2013_SM1:  Ethical Theory and Practice
PHIL90005_2012_SM1:  Applied Ethics: Directed Research
PHIL90005_2012_SM2:  Applied Ethics: Directed Research
PHIL90005_2013_SM1:  Applied Ethics: Directed Research
PHIL90005_2013_SM2:  Applied Ethics: Directed Research
PHIL90007_2012_SM1:  Literature Review
PHIL90007_2012_SM2:  Literature Review
PHIL90007_2013_SM1:  Literature Review
PHIL90009_2012_SM2:  Violence, War and Terrorism
PHIL90009_2013_SM2:  Violence, War and Terrorism
PHIL90010_2012_SM1:  Global Justice
PHIL90010_2013_SM1:  Inequality in Society and the World
PHIL90015_2012_SM2:  Issues in Professional & Applied Ethics
PHIL90015_2013_SM2:  Issues in Professional & Applied Ethics
PHIL90016_2012_SM1:  Shorter Applied Ethics Thesis
PHIL90016_2013_SM1:  Shorter Applied Ethics Thesis
PHIL90016_2013_SM2:  Shorter Applied Ethics Thesis
PHIL90017_2012_SM1:  Longer Applied Ethics Thesis
PHIL90017_2012_SM2:  Longer Applied Ethics Thesis
PHIL90017_2013_SM1:  Longer Applied Ethics Thesis
PHIL90017_2013_SM2:  Longer Applied Ethics Thesis
PHIL90018_2012_SM1:  Professional Ethics Thesis
PHIL90018_2012_SM2:  Professional Ethics Thesis
PHIL90018_2013_SM1:  Professional Ethics Thesis
PHIL90019_2012_RS1:  PhD Research
PHIL90021_2012_MAR:  Creative Thinking & the Power of Ideas
PHIL90021_2013_SM1:  Creative Thinking & the Power of Ideas
PHIL90022_2012_APR:  Thinking and Acting Ethically
PHIL90022_2013_MAY:  Thinking and Acting Ethically
PHIL90024_2012_SM1:  Philosophy Methods
PHIL90024_2012_SM2:  Philosophy Methods
PHIL90024_2013_SM1:  Philosophy Methods
PHIL90024_2013_SM2:  Philosophy Methods
PHIL90025_2013_SM1:  Issues in Bioethics
POLS10001_2012_SM1:  Australian Politics
POLS10001_2013_SM1:  Australian Politics
POLS10003_2012_SM2:  Introduction to Political Ideas
POLS10003_2013_SM2:  Introduction to Political Ideas
POLS20006_2012_SM1:  Contemporary Political Theory
POLS20006_2013_SM1:  Contemporary Political Theory
POLS20008_2012_SM1:  Public Policy Making
POLS20008_2013_SM2:  Public Policy Making
POLS20011_2012_SM1:  Sexual Politics
POLS20011_2013_SM2:  Sexual Politics
POLS20023_2012_SM2:  Comparative Politics
POLS20023_2013_SM2:  Comparative Politics
POLS20025_2012_SM1:  International Relations: Key Questions
POLS20025_2013_SM1:  International Relations: Key Questions
POLS20026_2012_SM2:  Media,Politics and Society
POLS20026_2013_SM1:  Media,Politics and Society
POLS20028_2012_SEP:  UNott:Global Citizenship - Global Issues
POLS20029_2012_JUL:  UQ:Human Rights & International Politics
POLS20029_2013_SM2:  UQ:Human Rights & International Politics
POLS20030_2012_FEB:  UQ: Conceptions of World Politics
POLS20030_2013_SM1:  UQ: Conceptions of World Politics
POLS20031_2012_SM1:  Political Economy
POLS20031_2013_SM1:  Political Economy
POLS30001_2012_SM1:  Parliamentary Internship
POLS30001_2012_SM2:  Parliamentary Internship
POLS30001_2013_SM1:  Parliamentary Internship
POLS30002_2012_SM1:  Public Affairs Internship (Int.Students)
POLS30002_2012_SM2:  Public Affairs Internship (Int.Students)
POLS30002_2013_SM1:  Public Affairs Internship (Int.Students)
POLS30002_2013_SM2:  Public Affairs Internship (Int.Students)
POLS30003_2012_SM1:  Public Affairs Internship
POLS30003_2012_SM2:  Public Affairs Internship
POLS30003_2013_SM1:  Public Affairs Internship
POLS30003_2013_SM2:  Public Affairs Internship
POLS30007_2012_SM2:  Change & Conflict in Australian Society
POLS30007_2013_SM2:  Change & Conflict in Australian Society
POLS30011_2012_SM1:  Chinese Politics and Society
POLS30011_2013_SM1:  Chinese Politics and Society
POLS30015_2012_SM2:  International Gender Politics
POLS30018_2012_SM2:  European Integration: Politics of the EU
POLS30018_2013_SM1:  European Integration: Politics of the EU
POLS30019_2012_SM1:  Australian Foreign Policy
POLS30019_2013_SM2:  Australian Foreign Policy
POLS30022_2012_SM2:  Global Environmental Politics
POLS30022_2013_SM2:  Global Environmental Politics
POLS30027_2012_SM1:  Global Movements: Protest and the Planet
POLS30027_2013_SM2:  Global Movements: Protest and the Planet
POLS30028_2012_FEB:  On Country Learning: Indigenous Studies
POLS30028_2013_FEB:  On Country Learning: Indigenous Studies
POLS30030_2012_SM1:  American Politics
POLS30030_2013_SM1:  American Politics
POLS30031_2012_SM1:  Contemporary India
POLS30031_2013_SM1:  Contemporary India
POLS30032_2013_SM1:  Campaigns and Elections
POLS40002_2013_SM1:  Australian Politics:Democracy & Justice
POLS40004_2012_SM1:  Justice, Democracy and Difference
POLS40004_2013_SM1:  Justice, Democracy and Difference
POLS40005_2012_SM2:  Corruption in Today\'s World
POLS40011_2012_SM1:  Political Science Thesis
POLS40011_2012_SM2:  Political Science Thesis
POLS40011_2013_SM1:  Political Science Thesis
POLS40011_2013_SM2:  Political Science Thesis
POLS40012_2012_SM1:  International Politics Thesis
POLS40012_2012_SM2:  International Politics Thesis
POLS40013_2012_FEB:  Social Science Research Seminar
POLS40013_2013_FEB:  Social Science Research Seminar
POLS40014_2012_SM2:  A Postcolonial International Relations?
POLS40014_2013_SM2:  A Postcolonial International Relations?
POLS40015_2012_SM1:  Women in Global Politics
POLS40015_2013_SM2:  Women in Global Politics
POLS40016_2012_SM2:  Asia-Pacific: Zone of Conflict or Peace?
POLS40016_2013_SM2:  Asia-Pacific: Zone of Conflict or Peace?
POLS40017_2012_APR:  Social Policy and Development
POLS40017_2012_SEP:  Social Policy and Development
POLS40017_2013_APR:  Social Policy and Development
POLS40017_2013_NOV:  Social Policy and Development
POLS40019_2012_SM1:  The Fall of Australian Prime Ministers
POLS40019_2013_SM1:  The Fall of Australian Prime Ministers
POLS40020_2013_SM1:  Politics & International Studies Thesis
POLS40020_2013_SM2:  Politics & International Studies Thesis
POLS90004_2012_RS2:  Major Thesis - Political Science
POLS90007_2012_SM2:  US Foreign Policy
POLS90007_2013_SM2:  US Foreign Policy
POLS90009_2012_SM1:  International Relations Internship
POLS90009_2012_SM2:  International Relations Internship
POLS90009_2013_SM1:  International Relations Internship
POLS90009_2013_SM2:  International Relations Internship
POLS90009_2013_SUM:  International Relations Internship
POLS90011_2012_AUG:  The EU and Globalisation
POLS90012_2012_SM1:  Trade Policy Politics & Governance
POLS90012_2013_SM1:  Trade Policy Politics & Governance
POLS90013_2012_SM2:  Politics and Business in post-Mao China
POLS90013_2013_SM2:  Politics and Business in post-Mao China
POLS90015_2012_SM1:  Business and Government
POLS90015_2013_SM1:  Business and Government
POLS90016_2012_SM1:  The United Nations: Review and Reform
POLS90016_2013_SM1:  The United Nations: Review and Reform
POLS90017_2013_SM1:  Europe and Asia: Competing Hegemons?
POLS90019_2012_RS1:  PhD Research
POLS90019_2012_RS2:  PhD Research
POLS90019_2013_RS1:  PhD Research
POLS90022_2012_SM2:  International Security
POLS90022_2013_SM2:  International Security
POLS90023_2012_SM1:  International Governance and Law
POLS90023_2013_SM1:  International Governance and Law
POLS90024_2012_SM2:  Approaches to Comparative Politics
POLS90024_2013_SM2:  Approaches to Comparative Politics
POLS90026_2012_SM2:  International Political Economy
POLS90026_2013_SM2:  International Political Economy
POLS90027_2012_SM1:  International Relations Minor Thesis
POLS90027_2012_SM2:  International Relations Minor Thesis
POLS90027_2013_SM1:  International Relations Minor Thesis
POLS90027_2013_SM2:  International Relations Minor Thesis
POLS90028_2012_SM1:  International Relations Theory
POLS90028_2013_SM1:  International Relations Theory
POLS90030_2012_SM1:  Nuclear Weapons and Disarmament
POLS90030_2013_SM1:  Nuclear Weapons and Disarmament
POLS90031_2012_SM1:  Special Topics: International Relations
POLS90031_2012_SM2:  Special Topics: International Relations
POLS90031_2013_JUL:  Special Topics: International Relations
POLS90031_2013_SM2:  Special Topics: International Relations
POLS90034_2012_SM1:  International Policymaking in Practice
POLS90034_2013_SM1:  International Policymaking in Practice
POLS90034_2013_SM2:  International Policymaking in Practice
POLS90035_2012_SM1:  Great Power Rivalry: Peace & War in 21C
POLS90036_2012_JAN:  International Project
POLS90037_2013_SEP:  Corruption in Today\'s World
POLS90038_2013_SM2:  Human Rights
PPMN40001_2012_SM1:  Policy Design
PPMN40002_2012_SM2:  Organisations and Management
PPMN40003_2012_SM1:  Executive Internship
PPMN40003_2012_SM2:  Executive Internship
PPMN40003_2013_SM1:  Executive Internship
PPMN40003_2013_SM2:  Executive Internship
PPMN40004_2012_SM1:  Contemporary Issues in Governance
PPMN40005_2012_SM2:  Public Policy & Management Thesis
PPMN50001_2012_FEB:  U21 Advanced International Study
PPMN50001_2013_FEB:  U21 Advanced International Study
PPMN90002_2012_SM1:  Minor Thesis - Public /Social Policy
PPMN90002_2012_SM2:  Minor Thesis - Public /Social Policy
PPMN90002_2013_SM1:  Minor Thesis - Public /Social Policy
PPMN90002_2013_SM2:  Minor Thesis - Public /Social Policy
PPMN90003_2012_MAR:  Social Policy: Special Topics
PPMN90003_2013_MAR:  Social Policy: Special Topics
PPMN90005_2012_SM1:  Individual Research Project
PPMN90006_2012_MAR:  Advanced Public Management
PPMN90006_2013_AUG:  Public Management
PPMN90006_2013_MAR:  Public Management
PPMN90007_2012_AUG:  Advanced Policy Design
PPMN90007_2013_SEP:  Policy Design and Implementation
PPMN90007_2013_SM1:  Policy Design and Implementation
PPMN90010_2012_JUL:  Professional Practice in Policy
PPMN90010_2013_JUL:  Professional Practice in Policy
PPMN90030_2013_SM2:  Public Policy in the Asian Century
PPMN90031_2013_SM2:  Public Policy Lobbying Strategies
PPMN90032_2013_SEP:  Managing Change and Leading Innovation
PPMN90033_2013_SM2:  Public Budgets and Financial Management
PPMN90034_2013_SM1:  Ideas in Politics
PPMN90034_2013_SM2:  Ideas in Politics
PPMN90035_2013_MAR:  Publics, Policy and Public Services
PPMN90037_2013_AUG:  Governance
PPMN90037_2013_MAR:  Governance
PUBL90001_2012_SM2:  Structural Editing
PUBL90001_2013_SM1:  Structural Editing
PUBL90001_2013_SM2:  Structural Editing
PUBL90002_2012_SM1:  Editorial English
PUBL90002_2012_SM2:  Editorial English
PUBL90002_2013_SM1:  Editorial English
PUBL90002_2013_SM2:  Editorial English
PUBL90003_2012_SM1:  The Contemporary Publishing Industry
PUBL90003_2013_SM1:  The Contemporary Publishing Industry
PUBL90004_2012_SM1:  Business and Professional Communications
PUBL90004_2013_SM1:  Business and Professional Communications
PUBL90005_2012_SM2:  Technical Writing and Editing
PUBL90005_2013_SM2:  Technical Writing and Editing
PUBL90006_2012_SM2:  Writing and Editing for Digital Media
PUBL90006_2013_SM2:  Writing and Editing for Digital Media
PUBL90007_2012_SM1:  History of Books and Reading
PUBL90007_2013_SM1:  History of Books and Reading
PUBL90009_2012_SM1:  Advanced Editing for Digital Media
PUBL90009_2013_SM1:  Advanced Editing for Digital Media
PUBL90010_2012_SM1:  Print Production and Design
PUBL90010_2013_SM1:  Print Production and Design
PUBL90012_2012_SM1:  Practicum
PUBL90012_2012_SM2:  Practicum
PUBL90012_2013_SM1:  Practicum
PUBL90012_2013_SM2:  Practicum
PUBL90013_2012_SM1:  Advanced Magazine Editing and Publishing
PUBL90013_2013_SM1:  Advanced Magazine Editing and Publishing
PUBL90014_2012_SM1:  Ethical and Legal Issues in Publishing
PUBL90014_2013_SM1:  Ethical and Legal Issues in Publishing
PUBL90015_2012_SM1:  Publishing and Communications 5A
PUBL90015_2013_SM1:  Publishing and Communications 5A
PUBL90016_2012_SM2:  Publishing and Communications 5B
PUBL90016_2013_SM2:  Publishing and Communications 5B
PUBL90017_2012_SM1:  Publishing and Communications Thesis
PUBL90017_2012_SM2:  Publishing and Communications Thesis
PUBL90017_2013_SM1:  Publishing and Communications Thesis
PUBL90017_2013_SM2:  Publishing and Communications Thesis
PUBL90018_2012_JUL:  Research Methodologies
PUBL90018_2012_MAR:  Research Methodologies
PUBL90018_2013_FEB:  Research Methodologies
PUBL90018_2013_JUL:  Research Methodologies
PUBL90019_2012_SM2:  Print Markets: Structures and Strategies
PUBL90019_2013_SM2:  Print Markets: Structures and Strategies
PUBL90020_2012_SM2:  Advanced Book Publishing
PUBL90020_2013_SM2:  Advanced Book Publishing
PUBL90021_2012_SM2:  Editing Masterclass
PUBL90021_2013_SM2:  Editing Masterclass
RUSS10001_2012_SM1:  Russian 1
RUSS10001_2013_SM1:  Russian 1
RUSS10002_2012_SM2:  Russian 2
RUSS10002_2013_SM2:  Russian 2
RUSS20004_2012_SM1:  Russian 3
RUSS20004_2013_SM1:  Russian 3
RUSS20005_2012_SM2:  Russian 4
RUSS20005_2013_SM2:  Russian 4
RUSS20006_2013_SM1:  Russian 5
RUSS20007_2012_SM2:  Russian 6
RUSS30001_2012_SM1:  Russian 5
RUSS30001_2013_SM1:  Russian 5
RUSS30002_2012_SM2:  Russian 6
RUSS30002_2013_SM2:  Russian 6
RUSS40006_2013_SM1:  Russian Language & Culture 4A
RUSS90001_2012_RS1:  Major Thesis - Russian Studies
SCRN10001_2013_SM1:  Introduction to Cinema Studies
SCRN20011_2012_SM1:  Hollywood and Entertainment
SCRN20011_2013_SM1:  Hollywood and Entertainment
SCRN20013_2013_SM1:  Australian Film and Television
SCRN20014_2013_SM2:  Film Genres and Auteurs
SCRN30001_2012_SM1:  Avant-Garde to Art House
SCRN30001_2013_SM1:  Art Cinema and the Love Story
SCRN30002_2012_SM2:  Film Genres and Media Hybrids
SCRN30002_2013_SM2:  Film Genres and Media Hybrids
SCRN30003_2012_SM1:  Sex and the Screen
SCRN30004_2013_SM2:  Film Noir: History and Sexuality
SCRN30005_2013_SM2:  The Digital Screenscape
SCRN40002_2012_SM1:  Contemporary Film Theory
SCRN40002_2013_SM1:  Contemporary Film Theory
SCRN40003_2012_SM1:  Ethnographic and Documentary Cinema
SCRN40005_2013_SM1:  Melodrama, Class and the Cinema
SCRN40006_2012_SM2:  Film, Art and Exhibition
SCRN40006_2013_SM2:  Film, Art and Exhibition
SCRN40009_2012_SM2:  Screen Media and Mediated Experiences
SCRN40009_2013_SM2:  Screen Media and Mediated Experiences
SCRN40010_2012_SM1:  Dream Screen: Film and Psychoanalysis
SCRN40012_2012_SM1:  Cinema Studies Thesis
SCRN40012_2012_SM2:  Cinema Studies Thesis
SCRN40013_2012_SM2:  Censorship: Film, Art and Media
SCRN40013_2013_SM2:  Censorship: Film, Art and Media
SCRN40014_2012_SM1:  Screen and Cultural Studies Thesis
SCRN40014_2012_SM2:  Screen and Cultural Studies Thesis
SCRN40014_2013_SM1:  Screen and Cultural Studies Thesis
SCRN40015_2012_SM1:  Screen Studies Thesis
SCRN40015_2012_SM2:  Screen Studies Thesis
SCRN40016_2013_SM1:  Screen & Cultural Studies Thesis
SCRN40016_2013_SM2:  Screen & Cultural Studies Thesis
SCRN50001_2013_SM1:  Moving Image Thesis
SCRN90002_2012_SM2:  Film Production: From Script to Screen
SCRN90002_2013_SM2:  Film Production: From Script to Screen
SCRN90003_2012_RS1:  Major Thesis - Screen Studies
SCRN90003_2012_RS2:  Major Thesis - Screen Studies
SCRN90003_2013_RS1:  Major Thesis - Screen Studies
SCRN90004_2012_SM1:  Visual Culture Industries
SCRN90004_2013_SM1:  Visual Culture Industries
SCRN90006_2012_JUL:  Film Festival Cultures
SCRN90006_2013_JUL:  Film Festival Cultures
SOCI10001_2012_SM1:  Understanding Society
SOCI10001_2013_SM1:  Understanding Society
SOCI10002_2013_SM2:  Sociology of Work and Occupations
SOCI20006_2012_SM2:  Sociology of the Body
SOCI20006_2013_SM1:  Sociology of the Body
SOCI20007_2012_SM2:  Terrorism: Shifting Paradigms
SOCI20007_2013_SM1:  Terrorism: Shifting Paradigms
SOCI20009_2012_MAY:  UBC:Global Citizenship
SOCI20009_2012_SEP:  UBC:Global Citizenship
SOCI20009_2013_JAN:  UBC:Global Citizenship
SOCI20010_2012_JAN:  LundU: Globalisation and Social Change
SOCI20010_2013_JAN:  LundU: Globalisation and Social Change
SOCI20011_2012_SM1:  Organisations, Power and Society
SOCI20011_2013_SM2:  Organisations, Power and Society
SOCI20012_2012_SM1:  Community Volunteering for Change
SOCI20012_2012_SM2:  Community Volunteering for Change
SOCI20013_2013_SM2:  Classical Sociological Theory
SOCI20014_2013_SM2:  Sociology of Youth
SOCI30001_2012_SM2:  Contemporary Sociological Theory
SOCI30001_2013_SM1:  Contemporary Sociological Theory
SOCI30003_2012_SM2:  Sociology of Youth
SOCI30003_2013_SM2:  Sociology of Youth
SOCI30005_2012_SM2:  Sociology Internship
SOCI30009_2012_SM2:  Living in a Risk Society
SOCI30009_2013_SM2:  Living in a Risk Society
SOCI30010_2012_SM1:  Social Differences and Inequalities
SOCI30010_2013_SM1:  Social Differences and Inequalities
SOCI30011_2012_SM1:  Community Volunteering for Change
SOCI30011_2012_SM2:  Community Volunteering for Change
SOCI40002_2012_SM1:  Sociology Thesis
SOCI40002_2012_SM2:  Sociology Thesis
SOCI40002_2013_SM1:  Sociology Thesis
SOCI40003_2013_SM1:  Understanding The Life Course
SOCI40005_2013_SM1:  Sociology Thesis
SOCI40005_2013_SM2:  Sociology Thesis
SOCI90001_2012_RS2:  Major Thesis - Sociology
SOCI90001_2013_RS1:  Major Thesis - Sociology
SOCI90002_2012_SM1:  Foundations of Social Policy
SOCI90002_2013_SM1:  Foundations of Social Policy
SOCI90003_2012_SM2:  Comparative Social Policy
SOCI90003_2013_SM2:  Comparative Social Policy
SOCI90004_2012_SM2:  Contemporary Social Problems
SOCI90004_2013_SM2:  Contemporary Social Problems
SOCI90005_2012_SM2:  Social Research Design and Evaluation
SOCI90005_2013_SM2:  Social Research Design and Evaluation
SOCI90006_2012_MAR:  Ageing, Society And Social Policy
SOCI90006_2013_MAR:  Ageing, Society And Social Policy
SOCI90009_2013_SM2:  A Century of Australian Social Policy
SOLS10001_2012_SM2:  Law in Society
SOLS10001_2013_SM2:  Law in Society
SOLS20001_2012_SM2:  Law, Justice and Social Change
SOLS20001_2013_SM2:  Law, Justice and Social Change
SOLS30001_2012_SM1:  Law in Social Theory
SOLS30001_2013_SM1:  Law in Social Theory
SOLS40001_2012_SM1:  Socio-Legal Studies Thesis
SOLS40001_2012_SM2:  Socio-Legal Studies Thesis
SOLS40001_2013_SM1:  Socio-Legal Studies Thesis
SOLS90002_2013_SM1:  Social Theory Thesis
SOLS90002_2013_SM2:  Social Theory Thesis
SOTH20002_2012_SM2:  Modernity Revolution to Social Movements
SOTH20002_2013_SM1:  Modernity Revolution to Social Movements
SOTH20003_2013_SM2:  Social Theory and Political Analysis
SOTH20006_2012_MAR:  LundU: Globalisation and Social Policy
SOTH20006_2013_MAR:  LundU: Globalisation and Social Policy
SOTH30001_2012_SM1:  Critical Theories
SOTH30001_2013_SM2:  Critical Theories
SOTH30004_2012_SM2:  Psychoanalysis and Social Theory
SOTH40001_2012_SM2:  Theories of Modernity
SOTH40002_2012_SM2:  Imagined Societies
SOTH40002_2013_SM2:  Imagined Societies
SOTH40003_2013_SM1:  The Critical Imagination
SOTH40004_2012_SM1:  Social Theory Thesis
SOTH40004_2012_SM2:  Social Theory Thesis
SOTH40004_2013_SM1:  Social Theory Thesis
SOTH40004_2013_SM2:  Social Theory Thesis
SOTH90003_2013_RS1:  Shorter Thesis - Social Theory
SPAN10001_2012_SM1:  Spanish 1
SPAN10001_2013_SM1:  Spanish 1
SPAN10002_2012_SM2:  Spanish 2
SPAN10002_2013_SM2:  Spanish 2
SPAN10003_2012_SM1:  Spanish 3
SPAN10003_2013_SM1:  Spanish 3
SPAN10004_2012_SM2:  Spanish 4
SPAN10004_2013_SM2:  Spanish 4
SPAN10007_2012_SM1:  Spanish 5
SPAN10007_2013_SM1:  Spanish 5
SPAN10008_2012_SM2:  Spanish 6
SPAN10008_2013_SM2:  Spanish 6
SPAN20001_2012_SM2:  Hispanic Cultural Studies 1
SPAN20001_2013_SM2:  Hispanic Cultural Studies 1
SPAN20002_2012_SM1:  Spanish 3
SPAN20002_2013_SM1:  Spanish 3
SPAN20003_2012_SM2:  Spanish 4
SPAN20003_2013_SM2:  Spanish 4
SPAN20016_2013_SM1:  Rock, Pop & Resistance
SPAN20017_2013_SM1:  Don Quijote Against the Universe
SPAN20018_2012_SM1:  Spanish 5
SPAN20018_2013_SM1:  Spanish 5
SPAN20019_2012_SM2:  Spanish 6
SPAN20019_2013_SM2:  Spanish 6
SPAN20020_2012_JAN:  Intensive Intermediate Spanish
SPAN20020_2013_JAN:  Intensive Intermediate Spanish
SPAN20022_2012_SM1:  Spanish 7
SPAN20022_2013_SM1:  Spanish 7
SPAN20023_2012_SM1:  Realities & Fictions in Latin America
SPAN20024_2012_SM1:  Cooking up the Nation
SPAN30001_2013_SM2:  Contemporary Hispanic Studies
SPAN30012_2013_SM1:  Rock, Pop & Resistance
SPAN30013_2013_SM1:  Don Quijote Against the Universe
SPAN30014_2012_SM1:  Spanish 5
SPAN30014_2013_SM1:  Spanish 5
SPAN30015_2012_SM2:  Spanish 6
SPAN30015_2013_SM2:  Spanish 6
SPAN30016_2012_SM1:  Spanish 7
SPAN30016_2013_SM1:  Spanish 7
SPAN30017_2012_SM2:  Hispanic Film Today
SPAN30018_2012_SM1:  Realities & Fictions in Latin America
SPAN30019_2012_SM1:  Cooking up the Nation
SPAN40001_2012_SM1:  Spanish Thesis
SPAN40001_2012_SM2:  Spanish Thesis
SPAN40001_2013_SM1:  Spanish Thesis
SPAN40002_2012_SM1:  Spanish Honours Language Seminar 1
SPAN40002_2013_SM1:  Spanish Honours Language Seminar 1
SPAN40003_2012_SM2:  Spanish Honours Language Seminar 2
SPAN40006_2013_SM2:  Spanish & Latin American Studies Thesis
SWED30001_2012_SM1:  Swedish Language & Culture 3A
SWED30002_2012_SM2:  Swedish Language & Culture 3B
THTR20021_2012_SM2:  Shakespeare
THTR20021_2013_SM1:  Shakespeare in Performance
THTR90002_2012_RS1:  Major Thesis - Theatre Studies
THTR90002_2013_RS1:  Major Thesis - Theatre Studies
UNIB10002_2012_SM1:  Logic: Language and Information
UNIB10002_2013_SM1:  Logic: Language and Information
UNIB10003_2012_SM1:  An Ecological History of Humanity
UNIB10003_2013_SM1:  An Ecological History of Humanity
UNIB10004_2012_SM2:  Seeing: The Whole Picture
UNIB10005_2012_SM2:  Internet Meets Society
UNIB10005_2013_SM2:  Internet Meets Society
UNIB10013_2013_SM2:  Catastrophes as Turning Points
UNIB20004_2012_SM2:  Learning Cultures: Minds, Ideas, Objects
UNIB20004_2013_SM2:  Learning Cultures: Minds, Ideas, Objects
UNIB20013_2012_SM2:  Body, Mind and Medicine: A Dissection
UNIB20013_2013_SM2:  Body, Mind and Medicine: A Dissection
UNIB20016_2012_SM1:  Same-Sex Desire: From God to Genes
UNIB20016_2013_SM1:  Same-Sex Desire: From God to Genes
UNIB30007_2012_SM2:  Sex Race and Social Justice
UNIB30007_2013_SM2:  Sex, Race, Species and Social Justice
VISM40003_2012_SM1:  Critical Studies Culture & Creative Arts
VISM40004_2012_SM1:  Practical Project
VISM40004_2012_SM2:  Practical Project
VISM40004_2013_SM1:  Practical Project
VISM40004_2013_SM2:  Practical Project
VISM90001_2012_SM2:  Text, Time and Space
VISM90001_2013_SM2:  Text, Time and Space
XNTS20035_2012_SM2:  UQLD:International Peacekeeping
XNTS70031_2012_SM2:  ANU-PAAE8002:Global Justice
XNTS70032_2012_SM1:  ANU-PAAE8004:Corruption & Anticorruption
XNTS70034_2012_SM2:  ANU-PAAE8006:Business Ethics
XNTS70035_2012_SM1:  ANU-PAAE8007:Bioethics
MC-APPLING_2012_MDYI:  Master of Applied Linguistics
MC-APPLING_2012_STYI:  Master of Applied Linguistics
MC-APPLING_2013_MDYI:  Master of Applied Linguistics
MC-APPLING_2013_STYI:  Master of Applied Linguistics
MC-ISLMSTU_2012_MDYI:  Master of Islamic Studies
MC-ISLMSTU_2012_STYI:  Master of Islamic Studies
MC-ISLMSTU_2013_MDYI:  Master of Islamic Studies
MC-ISLMSTU_2013_STYI:  Master of Islamic Studies
MR-PHILART_2012_RS1:  Master of Philosophy - Arts
MR-PHILART_2012_RS2:  Master of Philosophy - Arts
PD-ISLMSTU_2012_MDYI:  Postgraduate Diploma in Islamic Studies
PD-ISLMSTU_2012_STYI:  Postgraduate Diploma in Islamic Studies
PD-ISLMSTU_2013_MDYI:  Postgraduate Diploma in Islamic Studies
PD-ISLMSTU_2013_STYI:  Postgraduate Diploma in Islamic Studies',
        ),
        'type' => 'autocomplete_widgets_suggested',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_staff_collection'.
  $fields['node-lmsform-field_lms_staff_collection'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '4',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_staff_collection',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => 0,
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => 13,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_staff_collection',
      'label' => 'Staff collection',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection_table',
        'settings' => array(),
        'type' => 'field_collection_table',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_subject'.
  $fields['node-lmsform-field_lms_subject'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_subject',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_subject',
      'label' => 'Subject',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'complete_full_html' => 'complete_full_html',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'plain_text' => 'plain_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'complete_full_html' => array(
                'weight' => '0',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '0',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_widgets',
        'settings' => array(
          'autocomplete_case' => '0',
          'autocomplete_match' => 'contains',
          'autocomplete_xss' => '0',
          'i18n_flddata' => 0,
          'order' => 'ASC',
          'size' => '60',
          'suggested_values' => '038AB_2013_MDYI:  Master of Art Curatorship (Coursework and Minor Thesis)
095EC_2013_MDYI:  Postgraduate Diploma in Arts (Editing and Communications)
095MC_2013_MDYI:  Postgraduate Diploma in Arts (Media and Communication)
097AB_2013_MDYI:  Master of Development Studies
097AB_2013_MDYI:  Master of Development Studies(CWT)
097GD_2013_MDYI:  Master of Development Studies (Gender & Development)
101AA_2013_RS2:  Ph.D.- Arts
102DS_2013_RS2:  Master of Arts in Development Studies(Thesis only)
102EU_2013_MDYI:  Master of Arts in Professional and Applied Ethics
102FC_2013_RS2:  Master of Arts (Art History)(Thesis)
102GB_2013_RS2:  Master of Arts in French Language and Literature (Thesis)
102JB_2013_RS2:  Master of Arts in History (Thesis)
102KD_2013_RS2:  Master of Arts in History and Philosophy of Science (Thesis)
102OB_2013_RS2:  Master of Arts in Political Science (Thesis)
175AA_2013_MDYI:  Master of Arts and Cultural Management
274AB_2013_MDYI:  Master of Criminology (CWT)
344AB_2013_MDYI:  Master of Public Policy and Management
344AB_2013_MDYI:  Master of Public Policy and Management (Coursework)
377EC_2013_MDYI:  Postgraduate Certificate in Arts (Editing and Communications)
467AA_2013_MDYI:  Postgraduate Diploma in Professional Ethics
706AA_2013_MDYI:  Master of Social Policy
822AA_2013_MDYI:  Postgraduate Diploma in Arts and Cultural Management
ACUR90001_2013_JUL:  Issues in Art Conservation
ACUR90004_2013_SM2:  Minor Thesis - Art Curatorship
ACUR90005_2013_SM2:  Interpreting Exhibitions
ACUR90006_2013_SM2:  Project Management in the Arts
AHIS10002_2013_SM2:  Modern Art: The Politics of the New
AHIS20019_2013_SM2:  Art in Medieval Europe
AHIS20020_2013_SM2:  Avant-Garde and Postmodern Art
AHIS30003_2013_SM2:  Baroque Art in Polycentric Europe
AHIS30019_2013_SM2:  Art History in the World
AHIS40008_2013_SM2:  Futurism and Fascist Art in Italy
AHIS40015_2013_SM2:  Histories and Theories of Conservation
AHIS40017_2013_SM2:  Art History Thesis
AHIS40020_2013_NOV:  Museology in Florence
AHIS40021_2013_SM2:  Art History Thesis
AHIS90007_2013_SM2:  Biennales, Triennales and Documentas
AIND10002_2013_SM2:  Communication and Performance 2
AIND20005_2013_SM2:  Aboriginal Land, Law and Philosophy
AIND20010_2013_SM2:  Australian Environmental Philosophy
AIND30007_2013_SM2:  Critical Debates in Indigenous Studies
AIND30011_2013_SM2:  Aboriginal Writing
AIND40001_2013_SM2:  First Principles
AIND40002_2013_SM2:  Australian Indigenous Studies Thesis
AIND40006_2013_SM2:  Australian Indigenous Studies Thesis
AMGT90001_2013_SM2:  Arts Management
AMGT90006_2013_SM2:  Audience and the Arts
AMGT90011_2013_SM2:  Advanced Arts Policy
AMGT90012_2013_SM2:  Managing Creative Content
AMGT90014_2013_SM2:  Directed Reading in Cultural Management
AMGT90015_2013_SM2:  Cultural Management Project (Sem Long)
AMGT90016_2013_SM2:  Cultural Management Project (Year Long)
AMGT90018_2013_SM2:  The Economics of Culture
AMGT90019_2013_SM2:  Minor Thesis - Arts Management
ANCW10002_2013_SM2:  Myth, Art and Empire: Greece and Rome
ANCW20010_2013_SM2:  Ancient Greece: Archaic to Classical
ANCW20013_2013_SM2:  Egyptian and Near Eastern Mythology
ANCW30004_2013_SM2:  Comparative Civilizations
ANCW30017_2013_SM2:  Interpreting the Ancient World
ANCW30019_2013_SM2:  Greek Pre-history, 3000-1000 BCE
ANCW30021_2013_SM2:  Imperial Rome: Mediterranean Superpower
ANCW40001_2013_SM2:  Euripides, Seneca, and Mythmaking
ANCW40003_2013_SM2:  Archaeology of Complex Societies
ANCW40011_2013_SM2:  Ancient World Studies Thesis
ANCW40013_2013_SM2:  Ancient World Studies Thesis
ANTH10001_2013_SM2:  Anthropology: Studying Human Diversity
ANTH20007_2013_SM2:  Working with Value
ANTH20011_2013_SM2:  Ethnic Nationalism and the Modern World
ANTH30003_2013_SM2:  Myth, Ritual and Performance
ANTH30009_2013_SM2:  Anthropology of Nature
ANTH30013_2013_SM2:  Theory & the Anthropological Imagination
ANTH30015_2013_JUL:  High Points in Theory and Ethnography
ANTH40007_2013_SM2:  Anthropology & Social Theory Thesis
ANTH40008_2013_SM2:  Anthropology Thesis
ARBC10004_2013_SM2:  Arabic 6
ARBC10006_2013_SM2:  Arabic 2
ARBC20003_2013_SM2:  Arabic 8
ARBC20005_2013_SM2:  Arabic 4
ARBC30001_2013_SM2:  Arabic in Context 2
ARBC30005_2013_SM2:  Arabic 6
ARBC30007_2013_SM2:  Arabic 8
ARBC40002_2013_SM2:  Honours Arabic B
ARBC90002_2013_SM2:  Postgraduate Arabic B
ASIA30002_2013_SM2:  Identity, Ideology & Nationalism in Asia
ASIA40002_2013_SM2:  Asian Studies Thesis
ASIA40003_2013_SM2:  Asian Studies Thesis
ASIA90001_2013_SM2:  Human Rights in Southeast Asia
AUST20005_2013_SM2:  Migrant Nation: Culture and Identity
AUST30001_2013_SM2:  Researching Australia: Issues, Agendas
B-ARTS_2013_MDYI:  Bachelor of Arts
BH-ARTS_2013_MDYI:  Bachelor of Arts (Degree with Honours)
CHIN10002_2013_SM2:  Chinese 10
CHIN10004_2013_SM2:  Chinese 8
CHIN10006_2013_SM2:  Chinese 2
CHIN10008_2013_SM2:  Chinese 4 Post VCE
CHIN10009_2013_SM2:  Chinese Cinema
CHIN10016_2013_SM2:  Chinese 4A
CHIN10018_2013_SM2:  Chinese 6
CHIN20002_2013_SM2:  Chinese 4A
CHIN20004_2013_SM2:  Chinese 6
CHIN20008_2013_SM2:  China Since Mao
CHIN20011_2013_SM2:  Chinese 4B
CHIN20013_2013_SM2:  Chinese 10
CHIN20016_2013_SM2:  Chinese Cinema
CHIN20021_2013_SM2:  Analysis of Contemporary Chinese Society
CHIN20025_2013_SM2:  Human Rights in China & East Asia
CHIN20026_2013_SM2:  Advanced Chinese Translation
CHIN20028_2013_SM2:  Chinese 8
CHIN30001_2013_SM2:  Classic Chinese Civilisation
CHIN30003_2013_SM2:  Chinese News Analysis
CHIN30005_2013_SM2:  Advanced Chinese Translation
CHIN30006_2013_SM2:  Analysis of Contemporary Chinese Society
CHIN30009_2013_SM2:  Chinese 6
CHIN30018_2013_SM2:  Chinese Cinema
CHIN90002_2013_SM2:  Honours Chinese B
CICU30012_2013_SM2:  Contemporary Film and Cultural Theory
CLAS10005_2013_SM2:  Ancient Greek 2
CLAS10007_2013_SM2:  Latin 2
CLAS10014_2013_SM2:  Latin 4
CLAS10021_2013_SM2:  Ancient Greek 4
CLAS20014_2013_SM2:  Ancient Greek 6
CLAS20016_2013_SM2:  Ancient Greek 4
CLAS20031_2013_SM2:  Latin 4
CLAS30009_2013_SM2:  Latin 6
CLAS30025_2013_SM2:  Ancient Greek 6
CLAS40032_2013_SM2:  Classics Thesis
CLAS40035_2013_SM2:  Classics Honours Seminar 2
CRIM20003_2013_SM2:  Policing
CRIM20004_2013_SM2:  Order, Disorder, Crime, Deviance
CRIM20006_2013_SM2:  Punishment and Social Control
CRIM30001_2013_SM2:  Crime and Public Policy
CRIM30005_2013_SM2:  Crimes of the Powerful
CRIM30009_2013_SM2:  Comparative Criminology
CRIM30010_2013_SM2:  Managing Justice: Agencies and the State
CRIM40003_2013_SM2:  Drugs and Justice
CRIM40005_2013_JUL:  The New Punitiveness?
CRIM40006_2013_SM2:  Criminology Thesis
CRIM40007_2013_SM2:  Criminology Thesis
CRIM90005_2013_SM2:  Minor Thesis - Criminology
CRIM90006_2013_SM2:  Criminology and Sociology Internship
CRIM90010_2013_AUG:  Crime Prevention: Critical Approaches
CRIM90011_2013_JUL:  Research and Criminal Justice Governance
CRIM90015_2013_SM2:  Terror, Law and War
CRIM90018_2013_SM2:  Advances in Criminology: Emerging Theory
CRIM90020_2013_JUL:  Framing Crime
CULS10005_2013_SM2:  Media, Identity and Everyday Life
CULS20014_2013_SM2:  Television, Lifestyle & Consumer Culture
CULS30002_2013_SM2:  Asian Cinema and Media
CULS40006_2013_SM2:  Cultural Studies in Asia
CULS40009_2013_SM2:  Cultural Studies Thesis
CULS40010_2013_SM2:  Secret Life of Things: Material Culture
CULS40011_2013_SM2:  Cultural Studies Now
CUMC40002_2013_SEP:  RESPECT
CUMC40004_2013_JUL:  Preventive Conservation
CUMC40005_2013_AUG:  Conservation Assessment and Treatment 1
CUMC40006_2013_OCT:  Analytical Chemistry in Conservation
CUMC90003_2013_JUL:  Conservation Intensive
CUMC90006_2013_SM2:  Conservation Internship
CUMC90007_2013_SM2:  Minor Thesis - Conservation
CUMC90009_2013_JUL:  Conservation of Photographs 1
CUMC90015_2013_JUL:  Duplication, Archiving and Preservation
CWRI20002_2013_SM2:  Short Fiction
CWRI20009_2013_SM2:  Writing for Screen
CWRI30004_2013_SM2:  Encounters with Writing
CWRI30005_2013_SM2:  Writing For Theatre
CWRI30013_2013_SM2:  Biography and Autobiography
CWRI40008_2013_SM2:  Creative Writing Thesis - 50
CWRI40009_2013_SM2:  Genealogies of Place
CWRI40014_2013_SM2:  Writing Australia
CWRI90004_2013_JUL:  Creative Writing Advanced Workshop
CWRI90008_2013_SM2:  Minor Thesis - Creative Writing
D01LF_2013_MDYI:  Master of Creative Writing, Publishing and Editing
DEVT20001_2013_SM2:  Development in the 21st Century
DEVT40004_2013_SM2:  Directed Study in Development
DEVT40008_2013_SM2:  Development Studies Thesis
DEVT50002_2013_SM2:  Poverty, Microfinance and Development
DEVT90002_2013_SM2:  Internship in Development
DEVT90005_2013_JUL:  Development Studies Special Topics B
DEVT90008_2013_SM2:  International Internship in Development
DEVT90011_2013_SM2:  Minor Thesis - Development Studies
DEVT90035_2013_SM2:  Monitoring and Evaluation in Development
DEVT90040_2013_SM2:  Gender Issues in Development
DEVT90043_2013_SM2:  Management in Development B
DEVT90046_2013_JUL:  Family, Community and Development
DEVT90047_2013_SM2:  Development Strategies
D-GLOBISS_2013_MDYI:  U21 Diploma in Global Issues
D-LANG_2013_MDYI:  Diploma in Languages
ENGL10001_2013_SM2:  Modern and Contemporary Literature
ENGL20009_2013_SM2:  The Australian Imaginary
ENGL20020_2013_SM2:  Romanticism, Feminism, Revolution
ENGL20022_2013_SM2:  Modernism and Avant Garde
ENGL20025_2013_SM2:  Reverberations of Terror: 1789-1900
ENGL30002_2013_SM2:  Critical Debates
ENGL30006_2013_SM2:  Travel Writing and Postcolonialism
ENGL30012_2013_SM2:  Art/Pornography/Blasphemy/Propaganda
ENGL30036_2013_SM2:  Theatre After the Sixties
ENGL30046_2013_SM2:  Romancing the Medieval
ENGL40003_2013_SM2:  Medieval Temporalities
ENGL40019_2013_SM2:  English Thesis
ENGL40020_2013_SM2:  Australian Theatre and Performance
ENGL40022_2013_SM2:  Cosmic Pandemonium in Paradise Lost
ENGL40023_2013_SM2:  English & Theatre Studies Thesis
ENGL90001_2013_RS2:  Major Thesis - English Language & Lit.
ENST10001_2013_SM2:  Environment and Story
ESLA10003_2013_SM2:  Academic English 1
ESLA10004_2013_SM2:  Academic English 2
EURO10001_2013_SM2:  Europe: Narrating the Nation
EURO20005_2013_SM2:  Screening Europe: Image and Identity
EURO30004_2013_SM2:  Screening Europe: Image and Identity
EURO40001_2013_SM2:  Introduction to European Critical Theory
EURO40002_2013_SM2:  Seminars in Languages and Linguistics A
FREN10003_2013_SM2:  French 4
FREN10005_2013_SM2:  French 2
FREN10007_2013_SM2:  French 6
FREN20002_2013_SM2:  French 6
FREN20003_2013_SM2:  Romanticism to Decadence: French Novels
FREN20004_2013_SM2:  French Translation
FREN20009_2013_NOV:  Paris: Ville Lumiere (on site in Paris)
FREN20016_2013_SM2:  French Cultural Studies
FREN20017_2013_SM2:  French 4
FREN30004_2013_SM2:  French 6
FREN30004_2013_SM2:  French Post-Intermediate 3B
FREN30005_2013_SM2:  Romanticism to Decadence: French Novels
FREN30006_2013_SM2:  French Translation
FREN30011_2013_NOV:  Paris: Ville Lumiere (on site in Paris)
FREN40003_2013_SM2:  Medieval and Renaissance French
FREN40009_2013_SM2:  French Thesis
GC-ARTS_2013_MDYI:  Graduate Certificate in Arts
GD-ARTS_2013_MDYI:  Graduate Diploma in Arts
GEND10001_2013_SM2:  Introducing Gender: Sex, Sport and Film
GEND20006_2013_SM2:  Sexing the Canvas: 10 Works in the NGV
GEND20007_2013_SM2:  Hidden Histories: Gender and Testimony
GEND30002_2013_SM2:  The Future of Sex and Gender
GEND90004_2013_SM2:  Minor Thesis - Gender and Development
GEND90007_2013_SM2:  Rethinking Rights and Global Development
GEND90008_2013_SM2:  Gender Reading Course
GERM10002_2013_SM2:  German 4
GERM10005_2013_SM2:  German 2
GERM10007_2013_SM2:  German 6
GERM20002_2013_SM2:  German 8
GERM20003_2013_SM2:  German Cultural Studies B
GERM20005_2013_SM2:  German 4
GERM20006_2013_SM2:  German Cultural Studies A
GERM20008_2013_SM2:  German 6
GERM30001_2013_SM2:  German Cultural Studies B
GERM30001_2013_SM2:  German Post-Inter Cultural Studies
GERM30002_2013_SM2:  German Cultural Studies 3
GERM30004_2013_SM2:  German Language and Culture 3B
GERM30006_2013_SM2:  German 6
GERM40002_2013_SM2:  German 4: Research Project
GERM40015_2013_SM2:  German Thesis
HEBR10002_2013_SM2:  Beginners Hebrew B
HEBR10014_2013_SM2:  Advanced Hebrew B
HEBR20012_2013_SM2:  Beginners Hebrew B
HEBR30014_2013_SM2:  Intermediate Hebrew B
HIST10010_2013_SM2:  Age of Empires
HIST10012_2013_SM2:  The World Since World War II
HIST20010_2013_SM2:  Great Empires of Islamic Civilisation
HIST20059_2013_SM2:  U.S. History to 1941: Claiming Freedom
HIST20060_2013_SM2:  Total War: World War Two
HIST20065_2013_SM2:  Rebels and Revolutionaries
HIST20067_2013_SM2:  Contact, Conflict, New Worlds: 1450-1750
HIST30006_2013_SM2:  The Renaissance in Italy
HIST30015_2013_SM2:  The Modern Middle East
HIST30059_2013_SM2:  Race in America
HIST30060_2013_SM2:  Making History
HIST40028_2013_SM2:  History Thesis
HIST40033_2013_SM2:  Major Issues in Modern American History
HIST40036_2013_SM2:  History Thesis
HIST90024_2013_SM2:  International History
HIST90026_2013_SM2:  History, Memory and Violence in Asia
HIST90031_2013_SM2:  International Relations Minor Thesis
HPSC10001_2013_SM2:  From Plato to Einstein
HPSC20001_2013_SM2:  Darwinism: history of a very big idea
HPSC20020_2013_SM2:  God and the Natural Sciences
HPSC30004_2013_SM2:  Darwinism: history of a very big idea S3
HPSC30025_2013_JUL:  Philosophy of Biology (Science 3)
HPSC30028_2013_JUL:  Philosophy of Biology
HPSC30035_2013_SM2:  Knowledge in the Making
INDO10002_2013_SM2:  Indonesian 4
INDO10004_2013_SM2:  Indonesian 6
INDO10006_2013_SM2:  Indonesian 2
INDO10011_2013_SM2:  Diversity: Identities in Indonesia
INDO20007_2013_SM2:  Indonesian 4
INDO20009_2013_SM2:  Indonesian 6
INDO30003_2013_SM2:  Popular Cultures in Indonesia
INDO30006_2013_SM2:  Literature: Reading Indonesian Lives
INDO30007_2013_SM2:  Indonesian 6
INDO30018_2013_SM2:  Diversity: Identities in Indonesia
INDO40006_2013_SM2:  Indonesian Thesis
INTS10001_2013_SM2:  International Politics
INTS90007_2013_SM2:  Globalisation and China
ISLM10002_2013_SM2:  Islam in the Modern World
ISLM20003_2013_SM2:  The Qur\'an: An Introduction
ISLM30001_2013_SM2:  Islam in the West
ISLM30003_2013_SM2:  Ethical Traditions in Islam
ISLM40001_2013_SM2:  Topics in Arabic & Islamic Studies
ISLM40009_2013_SM2:  Islamic Studies Thesis
ISLM40010_2013_SM2:  Islamic Studies Thesis
ISLM90008_2013_JUL:  Islam and Politics
ISLM90011_2013_SM2:  Reason and Revelation in Islam
ISLM90012_2013_JUL:  The Qur\'an and the Prophet in Islam
ITAL10002_2013_SM2:  Italian 4
ITAL10005_2013_SM2:  Italian 2
ITAL10007_2013_SM2:  Italian 6
ITAL20003_2013_SM2:  Italian 8
ITAL20008_2013_SM2:  Italian 4
ITAL20009_2013_SM2:  Italian Cultural Studies A
ITAL20010_2013_SM2:  Italian 6
ITAL30006_2013_SM2:  Italian Fictions
ITAL30016_2013_SM2:  Italian 8
ITAL40014_2013_SM2:  Italian Thesis
JAPN10002_2013_SM2:  Japanese 2
JAPN10004_2013_SM2:  Japanese 6
JAPN10006_2013_SM2:  Japanese 8
JAPN10008_2013_SM2:  Japanese 4
JAPN10009_2013_SM2:  Reading Japanese Literature
JAPN20002_2013_SM2:  Introduction to Japanese Communication
JAPN20004_2013_SM2:  Japanese 8
JAPN20008_2013_SM2:  Japanese 4
JAPN20010_2013_SM2:  Japanese Grammar in Action
JAPN20011_2013_SM2:  Reading Japanese Literature
JAPN20014_2013_SM2:  Japanese 6
JAPN30002_2013_SM2:  Social Problems in Japan
JAPN30003_2013_SM2:  Japanese Through Translation
JAPN30006_2013_SM2:  Japanese 8
JAPN30008_2013_SM2:  Japanese 6
JAPN30011_2013_SM2:  Reading Japanese Literature
JAPN30013_2013_SM2:  Japanese Grammar in Action
JAPN40002_2013_SM2:  Honours Japanese B
JAPN40007_2013_SM2:  Japanese Thesis
JAPN90003_2013_SM2:  Postgraduate Japanese B
JEWI30005_2013_SM2:  Research in Contemporary Jewish Studies
JOUR90002_2013_SM2:  Journalism Thesis
JOUR90003_2013_SM2:  Journalism Internship
JOUR90004_2013_SM2:  Journalism Entrepreneurship in New Media
JOUR90009_2013_SM2:  Advanced Non Fiction Writing
JOUR90010_2013_SM2:  Applied Professional Practice/Journalism
JOUR90012_2013_SM2:  Journalism Project
JOUR90013_2013_SM2:  Public Interest Investigations
LING10001_2013_SM2:  The Secret Life of Language
LING20003_2013_SM2:  Second Language Learning and Teaching
LING20006_2013_SM2:  Syntax
LING20010_2013_SM2:  Language, Society and Culture
LING20012_2013_SM2:  Language and Media
LING30001_2013_SM2:  Exploring Linguistic Diversity
LING30004_2013_SM2:  Discourse & Pragmatics
LING40001_2013_SM2:  Directed Reading Project
LING40006_2013_SM2:  Linguistic Field Methods
LING40014_2013_SM2:  Linguistics & Applied Linguistics Thesis
LING90002_2013_SM2:  Presenting Academic Discourse
LING90006_2013_SM2:  Technology and Language Learning
LING90009_2013_SM2:  Language Testing
LING90010_2013_SM2:  Minor Thesis - Applied Linguistics
LING90012_2013_SM2:  Second Language Acquisition
LING90015_2013_SM2:  English Phonetics and Phonology
LING90019_2013_SM2:  English in a Globalised World
LING90026_2013_SM2:  Trans-Cultural Communication at Work
MAST10015_2013_SM2:  Foundation Mathematics for Commerce 2
MC-APLING_2013_MDYI:  Master of Applied Linguistics
MC-APPLING_2013_MDYI:  Master of Applied Linguistics
MC-CULMC_2013_MDYI:  Master of Cultural Material Conservation
MC-EMA_2013_MDYI:  Executive Master of Arts
MC-GMCOM_2013_MDYI:  Master of Global Media Communication
MC-IR_2013_MDYI:  Master of International Relations
MC-ISLMSTU_2013_MDYI:  Master of Islamic Studies
MC-JOURN_2013_MDYI:  Master of Journalism
MC-PUBCOM_2013_MDYI:  Master of Publishing and Communications
MECM20003_2013_SM2:  Net Communications
MECM20010_2013_SM2:  Comparing Media Systems
MECM20011_2013_SM2:  Approaches to Media Research
MECM30002_2013_SM2:  Perspectives in Global Media Cultures
MECM30004_2013_SM2:  Media Futures and New Technologies
MECM30005_2013_SM2:  Media Law
MECM30006_2013_SM2:  Media and Communications Internship
MECM30007_2013_SM2:  Media & Communications Research Project
MECM30008_2013_SM2:  Advanced Writing
MECM30013_2013_SM2:  Marketing Communications
MECM40007_2013_SM2:  Change in Journalism
MECM40011_2013_SM2:  Writing for the Media
MECM40016_2013_SM2:  Audiovisual Communication
MECM40017_2013_SM2:  Media & Communications Thesis
MECM90002_2013_SM2:  Global Media Governance
MECM90007_2013_SM2:  Media Convergence and Digital Culture
MECM90012_2013_SM2:  Media and Communications Thesis
MECM90017_2013_SM2:  Media Writing: Rhetoric and Practice
MGMT90126_2013_AUG:  Budgets and Financial Management
MGMT90128_2013_SEP:  Project Management
MGMT90129_2013_SM2:  Group Project
MGMT90130_2013_SM2:  Internship I
MGMT90131_2013_SM2:  Internship II
MGMT90132_2013_JUL:  Professional Communication
MGMT90161_2013_SM2:  Internship III
MGMT90164_2013_SM2:  EMA Special Project
MULT10001_2013_SM2:  Aboriginalities
MULT10017_2013_SM2:  Representation
MULT20008_2013_SM2:  Australian Indigenous Politics
MULT20010_2013_SM2:  Arts Internship
MULT20012_2013_SM2:  Community Volunteering for Change
MULT20013_2013_SM2:  Australia Now
MULT30018_2013_SM2:  Applied Research Methods
MULT30019_2013_SM2:  Arts Internship
MULT30020_2013_SM2:  Community Volunteering for Change
MULT40006_2013_SM2:  Special Research Subject B
MULT40007_2013_SM2:  Special Research Topics
MULT50001_2013_JUL:  Research Principles and Practices
MULT50002_2013_SM2:  Indigenous Peoples in Global Context
MULT90018_2013_SM2:  Internship I (Placement Only)
MULT90019_2013_SM2:  Internship II (Placement & Research)
MULT90023_2013_SM2:  Arts PhD Research Workshop
MULT90025_2013_SM2:  Internship II (Year Long)
MULT90026_2013_SM2:  PhD Elective 1
MULT90026_2013_WIN:  PhD Elective 1
MULT90027_2013_SM2:  PhD Elective 2
MULT90027_2013_WIN:  PhD Elective 2
PC-ARTS_2013_MDYI:  Postgraduate Certificate in Arts
PD-ARTS_2013_MDYI:  Postgraduate Diploma in Arts
PD-ISLMSTU_2013_MDYI:  Postgraduate Diploma in Islamic Studies
PHIL10003_2013_SM2:  Philosophy: The Great Thinkers
PHIL10004_2013_SM2:  Ideas and Society
PHIL20018_2013_SM2:  Matters of Life and Death
PHIL20030_2013_SM2:  Meaning, Possibility and Paradox
PHIL20039_2013_SM2:  The Nature of Reality
PHIL20041_2013_SM2:  Phenomenology and Existentialism
PHIL20042_2013_SM2:  Language, Communication and Representation
PHIL30007_2013_SM2:  The Philosophy of Philosophy
PHIL30016_2013_SM2:  Knowledge and Reality
PHIL30047_2013_SM2:  Objectivity and Value
PHIL40002_2013_SM2:  Recent European Philosophy
PHIL40003_2013_SM2:  Topics in Moral Psychology
PHIL40007_2013_SM2:  Philosophy of Language and Mind
PHIL40013_2013_SM2:  Uncertainty, Vagueness and Disagreement
PHIL40015_2013_SM2:  Philosophy Thesis
PHIL40018_2013_SM2:  Topics in Contempory Epistemology
PHIL40019_2013_SM2:  Philosophy Thesis
PHIL90005_2013_SM2:  Applied Ethics: Directed Research
PHIL90009_2013_SM2:  Violence, War and Terrorism
PHIL90015_2013_SM2:  Issues in Professional & Applied Ethics
PHIL90016_2013_SM2:  Shorter Applied Ethics Thesis
PHIL90017_2013_SM2:  Longer Applied Ethics Thesis
PHIL90024_2013_SM2:  Philosophy Methods
POLS10003_2013_SM2:  Introduction to Political Ideas
POLS20008_2013_SM2:  Public Policy Making
POLS20011_2013_SM2:  Sexual Politics
POLS20023_2013_SM2:  Comparative Politics
POLS20029_2013_SM2:  UQ:Human Rights & International Politics
POLS30002_2013_SM2:  Public Affairs Internship (Int.Students)
POLS30003_2013_SM2:  Public Affairs Internship
POLS30007_2013_SM2:  Change & Conflict in Australian Society
POLS30019_2013_SM2:  Australian Foreign Policy
POLS30022_2013_SM2:  Global Environmental Politics
POLS30027_2013_SM2:  Global Movements: Protest and the Planet
POLS40011_2013_SM2:  Political Science Thesis
POLS40014_2013_SM2:  A Postcolonial International Relations?
POLS40015_2013_SM2:  Women in Global Politics
POLS40016_2013_SM2:  Asia-Pacific: Zone of Conflict or Peace?
POLS40017_2013_NOV:  Social Policy and Development
POLS40020_2013_SM2:  Politics & International Studies Thesis
POLS90007_2013_SM2:  US Foreign Policy
POLS90009_2013_SM2:  International Relations Internship
POLS90013_2013_SM2:  Politics and Business in post-Mao China
POLS90022_2013_SM2:  International Security
POLS90024_2013_SM2:  Approaches to Comparative Politics
POLS90026_2013_SM2:  International Political Economy
POLS90027_2013_SM2:  International Relations Minor Thesis
POLS90031_2013_JUL:  Special Topics: International Relations
POLS90031_2013_SM2:  Special Topics: International Relations
POLS90034_2013_SM2:  International Policymaking in Practice
POLS90037_2013_SEP:  Corruption in Today\'s World
POLS90038_2013_SM2:  Human Rights
PPMN40003_2013_SM2:  Executive Internship
PPMN90002_2013_SM2:  Minor Thesis - Public /Social Policy
PPMN90006_2013_AUG:  Public Management
PPMN90007_2013_SEP:  Policy Design and Implementation
PPMN90010_2013_JUL:  Professional Practice in Policy
PPMN90030_2013_SM2:  Public Policy in the Asian Century
PPMN90031_2013_SM2:  Public Policy Lobbying Strategies
PPMN90032_2013_SEP:  Managing Change and Leading Innovation
PPMN90033_2013_SM2:  Public Budgets and Financial Management
PPMN90034_2013_SM2:  Ideas in Politics
PPMN90037_2013_AUG:  Governance
PUBL90001_2013_SM2:  Structural Editing
PUBL90002_2013_SM2:  Editorial English
PUBL90005_2013_SM2:  Technical Writing and Editing
PUBL90006_2013_SM2:  Writing and Editing for Digital Media
PUBL90012_2013_SM2:  Practicum
PUBL90016_2013_SM2:  Publishing and Communications 5B
PUBL90017_2013_SM2:  Publishing and Communications Thesis
PUBL90018_2013_JUL:  Research Methodologies
PUBL90019_2013_SM2:  Print Markets: Structures and Strategies
PUBL90020_2013_SM2:  Advanced Book Publishing
PUBL90021_2013_SM2:  Editing Masterclass
RUSS10002_2013_SM2:  Russian 2
RUSS20005_2013_SM2:  Russian 4
RUSS30002_2013_SM2:  Russian 6
SCRN20014_2013_SM2:  Film Genres and Auteurs
SCRN30002_2013_SM2:  Film Genres and Media Hybrids
SCRN30004_2013_SM2:  Film Noir: History and Sexuality
SCRN30005_2013_SM2:  The Digital Screenscape
SCRN40006_2013_SM2:  Film, Art and Exhibition
SCRN40009_2013_SM2:  Screen Media and Mediated Experiences
SCRN40013_2013_SM2:  Censorship: Film, Art and Media
SCRN40016_2013_SM2:  Screen & Cultural Studies Thesis
SCRN90002_2013_SM2:  Film Production: From Script to Screen
SCRN90006_2013_JUL:  Film Festival Cultures
SOCI10002_2013_SM2:  Sociology of Work and Occupations
SOCI20011_2013_SM2:  Organisations, Power and Society
SOCI20013_2013_SM2:  Classical Sociological Theory
SOCI20014_2013_SM2:  Sociology of Youth
SOCI30003_2013_SM2:  Sociology of Youth
SOCI30009_2013_SM2:  Living in a Risk Society
SOCI40005_2013_SM2:  Sociology Thesis
SOCI90003_2013_SM2:  Comparative Social Policy
SOCI90004_2013_SM2:  Contemporary Social Problems
SOCI90005_2013_SM2:  Social Research Design and Evaluation
SOCI90009_2013_SM2:  A Century of Australian Social Policy
SOLS10001_2013_SM2:  Law in Society
SOLS20001_2013_SM2:  Law, Justice and Social Change
SOLS90002_2013_SM2:  Social Theory Thesis
SOTH20003_2013_SM2:  Social Theory and Political Analysis
SOTH30001_2013_SM2:  Critical Theories
SOTH40002_2013_SM2:  Imagined Societies
SOTH40004_2013_SM2:  Social Theory Thesis
SPAN10002_2013_SM2:  Spanish 2
SPAN10004_2013_SM2:  Spanish 4
SPAN10008_2013_SM2:  Spanish 6
SPAN20001_2013_SM2:  Hispanic Cultural Studies 1
SPAN20003_2013_SM2:  Spanish 4
SPAN20019_2013_SM2:  Spanish 6
SPAN30001_2013_SM2:  Contemporary Hispanic Studies
SPAN30015_2013_SM2:  Spanish 6
SPAN40006_2013_SM2:  Spanish & Latin American Studies Thesis
UNIB10005_2013_SM2:  Internet Meets Society
UNIB10013_2013_SM2:  Catastrophes as Turning Points
UNIB20004_2013_SM2:  Learning Cultures: Minds, Ideas, Objects
UNIB20013_2013_SM2:  Body, Mind and Medicine: A Dissection
UNIB30007_2013_SM2:  Sex, Race, Species and Social Justice
VISM40004_2013_SM2:  Practical Project
VISM90001_2013_SM2:  Text, Time and Space',
        ),
        'type' => 'autocomplete_widgets_suggested',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-lmsform-field_lms_uni_email'.
  $fields['node-lmsform-field_lms_uni_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lms_uni_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'lmsform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lms_uni_email',
      'label' => 'Uni email',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-webform-body'.
  $fields['node-webform-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'webform',
      'default_value' => array(
        0 => array(
          'summary' => array(
            'format' => 'filtered_html',
            'value' => '',
          ),
          'value' => '',
          'format' => 'filtered_html',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 0,
            'full_html' => 'full_html',
            'plain_text' => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '0',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
        'wysiwyg_fields' => array(
          'settings' => array(
            'advanced' => array(
              'delete' => 1,
              'hide' => 1,
            ),
            'formatters' => array(),
            'icon' => '6f7621a02161e347e66d99d8ace540a3',
            'label' => 'Body',
          ),
          'status' => 0,
        ),
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Full name');
  t('Notice');
  t('Phone');
  t('Previous subject');
  t('Staff collection');
  t('Staff name');
  t('Staff role');
  t('Subject');
  t('Uni email');

  return $fields;
}
