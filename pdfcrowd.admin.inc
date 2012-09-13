<?php
// $Id$
/**
 * @file
 * Admin functions for pdfcrowd module.
 */

/**
 * Menu callback and form builder for admin/settings/pdfcrowd.
 */
function pdfcrowd_admin_settings() {
  $form['pdfcrowd_username'] = array(
      '#type' => 'textfield',
      '#title' => t('Pdfcrowd Username'),
      '#required' => TRUE,
      '#default_value' => variable_get('pdfcrowd_username', ''),
      '#description' => t('The username used to log into pdfcrowd.com website.')
  );
  $form['pdfcrowd_apikey'] = array(
      '#type' => 'textfield',
      '#title' => t('API Key'),
      '#required' => TRUE,
      '#default_value' => variable_get('pdfcrowd_apikey', ''),
      '#description' => t('The API key for your pdfcrowd.com account.')
  );

  return system_settings_form($form);
}