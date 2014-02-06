<?php

/**
 * @file
 * Bulk export of default_flexslider_presets objects generated by Bulk export module.
 */

/**
 * Implementation of hook_flexslider_default_presets()
 */
function flexslider_flexslider_default_presets() {
  $presets = array();

  $preset = new stdClass;
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'default';
  $preset->title = 'Default';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->options = array(
    'height' => 300,
    'width' => 450,
  );
  $presets['default'] = $preset;

  return $presets;
}