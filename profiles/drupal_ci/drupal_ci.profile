<?php

function drupal_ci_profile_modules(){
  $modules = array(
    // Default Drupal modules.
    'devel',
    // CTools
    'ctools'
    );

  return $modules;
}