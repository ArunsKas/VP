<?php
/**
 * @file
 * vp_core.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function vp_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer';
  $fe_block_boxes->body = '<p>Kretingos rajono savivaldybės administracija. Savivaldybės biudžetinė įstaiga. Duomenys kaupiami ir saugomi Juridinių asmenų registre. Kodas 188715222.<br />
Savanorių g. 29A, LT-97111 Kretinga. Tel. (8 445) 53141. Faks. (8 445) 52448. El. paštas savivaldybe@kretinga.lt<br />
© Kretingos rajono savivaldybės administracija, 2015&nbsp;<br />
<a href="/user"><img alt="" src="/sites/vp.kretinga.lt.dd/files/pictures/login-ico.png" /></a></p>
';

  $export['footer'] = $fe_block_boxes;

  return $export;
}
