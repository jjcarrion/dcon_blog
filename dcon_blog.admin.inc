<?php

/**
 * @file
 * dcon_blog.admin.inc
 *
 * Administrative functions for blog.
 */

/**
 * Admin settings form for the origin resources.
 */
function dcon_blog_admin_settings($form = array(), &$form_state = array()) {

  $form['dcon_blog_post_list'] = array(
    '#type' => 'textfield',
    '#title' => 'Post list URL',
    '#description' => t('URL where we get the list of post'),
    '#default_value' => variable_get('dcon_blog_post_list', 'http://jsonplaceholder.typicode.com/posts'),
    '#size' => 40,
    '#maxlength' => 256,
  );

  return system_settings_form($form);
}