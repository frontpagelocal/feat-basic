<?php
/**
 * @file
 * basic_site_package.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_site_package_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article';
  $strongarm->value = '2';
  $export['comment_anonymous_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_product';
  $strongarm->value = '0';
  $export['comment_anonymous_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_service';
  $strongarm->value = '0';
  $export['comment_anonymous_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_article';
  $strongarm->value = '2';
  $export['comment_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_article';
  $strongarm->value = 1;
  $export['comment_default_mode_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_product';
  $strongarm->value = 1;
  $export['comment_default_mode_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_service';
  $strongarm->value = 1;
  $export['comment_default_mode_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_product';
  $strongarm->value = '50';
  $export['comment_default_per_page_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_service';
  $strongarm->value = '50';
  $export['comment_default_per_page_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_article';
  $strongarm->value = 1;
  $export['comment_form_location_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_product';
  $strongarm->value = 1;
  $export['comment_form_location_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_service';
  $strongarm->value = 1;
  $export['comment_form_location_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_article';
  $strongarm->value = '1';
  $export['comment_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_product';
  $strongarm->value = '1';
  $export['comment_preview_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_service';
  $strongarm->value = '1';
  $export['comment_preview_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_product';
  $strongarm->value = '0';
  $export['comment_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_service';
  $strongarm->value = '0';
  $export['comment_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_article';
  $strongarm->value = 0;
  $export['comment_subject_field_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_product';
  $strongarm->value = 1;
  $export['comment_subject_field_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_service';
  $strongarm->value = 1;
  $export['comment_subject_field_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_cW7buHEEH0nvGmRAtvr49Q3hUMrp03xWqHY98WuVffQ.css',
    '13bf9a0709d0dfd93bc1b665328fe4c3c3cd37e81b7266584d046c4bc4941bad' => 'public://css/css_Pao_ThEzq89Ex2SD5EByYt8Jn8QkoO_aCpgIOm4fuoI.css',
    '278926a8e64df2334672cd95141c6876f4aca7c1c0e833fa5816b7aaf9e12c1d' => 'public://css/css__IwiWeiuDCfwmBDFcuWq4AOXJXMbzgrqR-9GpD7_xWs.css',
    '09851ecf02c469cb0155425196af131c966643031b9261d2e2bbb7a726f28ea2' => 'public://css/css_YeqepK0egnUWWOztDWOCiVArtEFK5GoeVrkKYVxMlGo.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_Un37T-KRLGUtNq7U4Z-aGTR8RCkHeF3LCoXid02zOsk.css',
    '421db17cce87b0b7f08b4cc4fc56f4bbe37381f5d525cc27562e879ffe94b0fb' => 'public://css/css_O3iHOToOAtgzevke4gFHXcl2rSTU8VgGiK_p_vdKgcY.css',
    '2f78a9dcc5547d5120b9be37f2f879fcacaa812db9792db1f2577d776f5b3c3d' => 'public://css/css_5BC3_pdRbuxeI_0Xi3PfOS-w5X0-zNE9coqNgpZaDV4.css',
    'fca548565fe418e6be473d1a409c73d6be3eef0bd73772e586a40c962b7856c1' => 'public://css/css_iqj67tPsSh6rkuowYoLVnarDRdGaVveXyZOsWnL3_DI.css',
    'e12831c191728959d20eb5062b1b72345708629e18073e98e309fd8c9eb05e18' => 'public://css/css_oXMgy1AFfq4rprUKaYYRd1t46hL7de291rhtLkIrtnw.css',
    '96d3f040c2ef4c0e91a2bbfdaeb87d17505005aedc05511f8378c3cc6a8160eb' => 'public://css/css_L4DQQQXiJurWOqukl8o2XXBF7ooU7CMqjGLLy8TWzyk.css',
    '37d47c44057295d931f37191e184104c1798f4d9c1c0a3a2a17436a0aa321414' => 'public://css/css_DiKU_UfFkykKgzVhmoJi2d4527HaFYSasxeuLEzkEDg.css',
    '893a4e19fbaa909fe33ca6bfc0288962733da3bdc2d6c1a9ea7509baa2ba2b0d' => 'public://css/css_aNhmPe-wAoMEUFNkekis8FhkZ8bdUTMZyYjeuzrIZes.css',
    '99482059e135515b2b0d717111da5c8cb7b2506e922252b8ceee07860c1d9d80' => 'public://css/css_-48BsCznYQ11XwLk-QSDGUdvg-z5oXK3powsufd0K60.css',
    'd0f903fe1d5293640d1f1f5d95908f9ad4e1174ed9d08d99a4aee76fa669b613' => 'public://css/css_pqFp-po2KLJn_wrxxbpEEE4bW2tQyg5qqGxSPeHtU5A.css',
    '4d3ea856704adab3406a7c662596dad32c0458645dc68b2eda6b25091fd42309' => 'public://css/css_BIbovdiXz4mZFKYQQT6Epzh8z8iR4Uo4tspsBIphlEw.css',
    '0437e2535aa55f5b064a544d9705853403805f34366ff3c43bf1028423390ef9' => 'public://css/css_qsIZj8I_Gx_cpT3VSF3JmeW-Xs5uOagUeI_PKAirm0o.css',
    '404f68c072a424246835918b7e976877eaab232e159e14d2056c29ac463c47ca' => 'public://css/css_zgvIK_mFgtDoWi-kr9Id0ZAgTMkiR_GbNojRfaq6Xyk.css',
    'dcfed7542d6dad3a5c2ae5d1f93facf66a6af341fafa2a850f9e03a4ec130385' => 'public://css/css_Zdl3F8CMF_qFCGeJ0E1XpyDM7xxmg3M3MxZmQoN2c60.css',
    '737a976256dfe6c078c63d8d85292995c94718f8fbfcdfb723fea93af3a1f98c' => 'public://css/css__VY798HSgHQt8ZBR_u3ImKuAVy6ReAtmL_1up75thLM.css',
    '3545ddee451279397a1a8b551d94cc2d6bcaef0071faf1b69c802d2806e7b259' => 'public://css/css_zNjwT1oYu2f4gIOFWongjRttuGm369dqWDVqF2VzhcM.css',
    'fb99f59634ca50e0fba4e84e68023155e5b29a96985d8a76309ce0a0db1009a9' => 'public://css/css_5i0uMWa5p7-wgrG8wwv_lbe1NQKX5DqXrCgd4PLu97U.css',
    'c15a660f42174e5c9b700f5d821f0ee2de214b92da9fba1c0075a721a70a25dc' => 'public://css/css_gqtWbP5mt1vbYRUCXGo3aPfkrPLRmuNxUSJi86NI6xI.css',
    '56062da7a7ca2eb784cc8a394a2e81968b264aa39003dd157da892ff33e79f3f' => 'public://css/css_lpU5z7dBNl6k59_ejDKgyxaL8jk9peKsobWwrayKX14.css',
    '638a3f6fc67b2381b3177011c6d58624c01d9b21a5bebeb53b6623123a6044ff' => 'public://css/css_oMhSsG7GjJWedLZZbvpSNhTBq3Rh-4GHeGwRuBmsGZc.css',
    'cb9f93e666a396bb3eb14c5fd16f7ebd1cdd0067733eb0a2ab1b294b6f14f76f' => 'public://css/css_IFMjbAd4puLh0VAwSGEWGhLVkd-CFpIvq6nsPSBMSDM.css',
    '9eefece0d4d3f03a9f7c19e71f3409e728bb69c215c7f0575a5592a7e23982a5' => 'public://css/css_uj-eFBzumkhGEpu-ZtvdXsZ2ykU7VfBWhqNBZj7C4z4.css',
    '5f78583322f528fab32d74c6b8ffb7d1da45491d60bded3caa3390cb3f4fa17d' => 'public://css/css_CSD4d4ZK-UIF2r46QtajVmEh3ZuEYLVDtGyLMO-Dd50.css',
    '2a51b56820f23c68a593a838bd33bf63dc4ffe4eb080da222a2a7ea961c6b52d' => 'public://css/css_Ye6La0G2kbEbhhGdiz2Bm2i2VWSftZDweeEAghtL7AA.css',
    'c73075d2d2eeab53f5359c502631077944945b1b05d0be42aed10e20a44bf929' => 'public://css/css_6vhNHhNzJeNpHVXjty23XaefogE_YVa1zzqLqOpmxKg.css',
    'd92295cdbf5a94a6f577170373b489213edf5569de174dbe2f43c064fc890092' => 'public://css/css_LJmg7yQoJf_T2-gQohnSoc0De3kDGjR91VAYBe02Iiw.css',
    '88be5d6a4a2dad9ea00bb11d29c82426a328de30a74261e34eb09234012aba71' => 'public://css/css_MuWsLaZw4_NK08qfFLXGLSZG8w0dPIvKt5L_U4yWuDs.css',
    '06415a8fdaf93b396d61cc55f746d0e3843cfbad74d0bb221f81a4a233433d55' => 'public://css/css_nMw0SRPRg4P3u4vGLmxLrqG_drcMOXfwCLkaYq2UcPQ.css',
    'afc213440534efd79010fdee21fc1d98f363bffdbd88ac32a16580bcef7b6b07' => 'public://css/css_FPBBl0L9OT0E-i0vZ7NmpcxV6wfDhDTPki1wmXxa5M8.css',
    '026989d9433ef0e0adff6764a8435d2afc658c5465ee1393e07e05a7efc58c8a' => 'public://css/css_H37WXHWLjjtBWdZ-CYX1Gdz5YA9xnRGRq_zJi26X1Dc.css',
    '4e2294041d3669dbc898f039d42ff858bc982327ec9e00177827b3180b50fe00' => 'public://css/css_Z-2qes2XSt3cwEp4UNGtxKrAE3MCodEjz6CnIo-s5vI.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_3jHghlMLrjr9xXAC0JufqSSch3oAbkZstSqYdc4uuck.js',
    '244049016c7f0db3c6ce48a9156f540e8eb460e73da2e1a029dedc782f24752b' => 'public://js/js_7PTI4C5FmG6l7B8cVYi7LMKDnN_nI5jmybVls2tCpEY.js',
    'cd36a702006f6ea6e5d2081540aa53abf3dd91222b95cca0eebca45f991a6d38' => 'public://js/js_R9UbiVw2xuTUI0GZoaqMDOdX0lrZtgX-ono8RVOUEVc.js',
    '40162d41145db52055480fa424308208e6e9ad89eb6b95f9dcc62b1e1594a92b' => 'public://js/js_BldN_dy0QzO8o-Hi6sWqs0qnktPWUE4M0L15635kQn8.js',
    '81c973297c578c840e7549689db1b2f9a35cf00d7c74a14e1a0e2f29ec7e8451' => 'public://js/js_iFjGpPGPLCozfbUxybFw6ztJ617gVTTZfQBpoXRR-3s.js',
    '7ef86bed662cb2da7917bed428b28a5fd9de92025047ee18f6731427978ff5c0' => 'public://js/js_bQl-mpc-v5S6hBkMQKmyDbVUBt5W3MeUjW-O97msC2I.js',
    '85c66bb720e99c3f800fbea24a1324b058fbce88bffd56bf7b6c489a2e42ed07' => 'public://js/js_9OaCm4CbXl7sixdFke-srNVQzwRQKr5Pv13HIQDCmMA.js',
    '5b87451d8ac78117253df8803353634921a692c30d2d2acc94676fabc669f062' => 'public://js/js_8ZxX6cLE8xT41v-wCe8I1hNe7U6z2XhAYwoc-r08WjE.js',
    'de6f380f11a91884d54ebaf5f788ac3c208b2ed8f8ab9780b0a3f31edf802742' => 'public://js/js_xKYUsCJcF4zoXiFGXt3YFGcZYEOVqzyMpCK4xSAnoT8.js',
    '2bd031332c381c1a4fe3ff2ae4d7a8aafdbaf4150e09e529c8c10ea83fa559a0' => 'public://js/js_R8ykvktItPee1meRsQYmPrnUDwfMFJ4xAWTz9dAHHP4.js',
    '388e1cb7bac27d2d3ef8bd478d5e033927e530aa6b3af20d0c67620f4fac11c5' => 'public://js/js_WLd7Y-RBJTJW9ybppUwdzOJMB9xDFMjNgTxAkvDXlZc.js',
    '73cc53752a55c154a2751c59b7d2607bf50620d57674d26810563b2cf132d18e' => 'public://js/js_XU85qZtvNUHu5NV9pgc6SeYwBRd6ZvLD2kjzutLoCSg.js',
    '7a2a144854763246e49510cf013f427e65d3c9bfe67d4f8b0ff783e8891048b4' => 'public://js/js_iOxv-0JjH_Ob5k0GKM4flqntsKkhK8e0HEVf-xPuPFo.js',
    '8d25055382484b4504e00fa3494b6298f1483c4025dd1b2d35c5b89ddccad926' => 'public://js/js_5seR1RMZ6bVlumGoyq2xrW9-_Y5Foh3iZ_XBGQHTIuE.js',
    '6a211e62983396d69a3fd6b720006977d8764f36efebbdcbcb4070b312a4ccb7' => 'public://js/js_lNKT-8aLpt273w_jI3a6wKj4GbasS4E5A-jUAsAphGs.js',
    '4099816a11bd171d3217cbefc0c2645266af670eb29869d4befc8454386f7dcd' => 'public://js/js_fxEG-ZVeGW1VVs5Yd-4nMdmPcfdp719Krla-h4uy3r8.js',
    '6a8db4a075ac253f466a6b18b9e4830d039c9dfc6c5aabaa0bf5a40bc3dec328' => 'public://js/js_1yluwk16hzx7f9mFk0e_PriSczFBEdgbOe_tCaiBveE.js',
    '5f2e62a28787ac99b6a30d6a46f901a9b6b0a6924be7280d076f944e4dbee891' => 'public://js/js_DwJR708u8GnzSEmc2imGMGUK0K05VinjTUhWwO_Fn8w.js',
    '7acd799ed12bff217d5ab7b6a07792c3df5525a9ee6b00e1cda23b44e6267078' => 'public://js/js_35skA50NrukbDsTiIQ6ixl3OXiLreBEhvSk9myTnIQU.js',
    'dae16e556d071835e5c613081a0de0fdc36912fb6bec97cbe5088611f85b5fac' => 'public://js/js_Fg1DI9MsNFM2RQUjh4pmgl97GPydSKuzbEo_l4iQf5Y.js',
    'cf5311be45070cac1c3d8d40ae1491df76cf244a0d65dfba48e297e6f9c98cf4' => 'public://js/js_8YnKEH2191h1uW2SekzE955HmAgGcbHvObibmduei6w.js',
    'd3615abc676306ee7173b7ebb4576ec7952a8c436a200366d6fd820ded0642a5' => 'public://js/js_PQul5dxMbjCQRM5uAIFU3gEAwgnn9tpI_XxMKbes8UY.js',
    'f7fbdefc1828cff0736d40dc2e37ace91d28ed2aea65d06a021c6d991a33c635' => 'public://js/js_7XPr5u5G2RNnu5dF64ecu37OOAfuAFArAzB5QVVOF_s.js',
    '95817c66901eee9e8e208c99a7e970fe85a5e9488f885abaafecf82d802c2aca' => 'public://js/js_UZzNR_63TDCnKyGuMlfViA7jN8Y_eWN1hbJ5psozNg8.js',
    'e6e577ad1c65b7869160b68286e3ea0d70c95cec567dedde126ffae9e2f97c38' => 'public://js/js_vw98w7TPWSpzt884EINr-wSk61XAYsRPmkENVCOic_Q.js',
    '80ff2054b1a86544b257c183e0495f39f014115a7f34184d3072de75ab4938f2' => 'public://js/js_mnbuJykzPLKRqB0YxCdrZFup48iXwF6yE8D2sTH-qeU.js',
    '457acc7180fe22a0be3d40042237aeed83449c3d6c5867409b500a5cfc0ae5a0' => 'public://js/js_QRjJAjVJsbO6SEB05pmsR4hJXRIG5S7P95Kfdcd5Ke8.js',
    'abd5e9b7ccf4ccbb09a8d67c3d17be33143098254b99f6ece1b85220706f860c' => 'public://js/js_slFYm7EctzjGmO-yxFueICrvXVIPFF-pRSE2RzqHXTM.js',
    '5a5773ec0d4cdd3579c4290589afe4bcd3d023e8db32f5287fdd0fc6ce06c12e' => 'public://js/js_Hi_AG-Wjht3i9fX-IY1HLlK5Rr-bSzXkF3VvJs8XRc8.js',
    'c4694c99d7962904c9a9cf575fd48533a714410e75c219f8f3f11d4bc6a52220' => 'public://js/js_VuXybt-b3lTGUcFAuMF6ham7KGl27o_ym-cj5GO5opE.js',
    'c34a2a0cc871f2b27884b0d1df1229f7abb83d3cc2820522772b76ba88164ed4' => 'public://js/js_aQLZVQYrTuDSIBbC8JxteqIrQZoS3UbJ97ou5I0BpxQ.js',
    'eabe993407371da2ff884691480e78a3d89c240b199b23cc0877943bb4fbf2d6' => 'public://js/js_f2WAabsfquAv0XxnnyQ3CMnM9RkeQA7LvyWPqXAQrZo.js',
    'cb1c8ca05551016f98b2060d8e0d55b4b47bf4c50e7b5f431e6f96a3adb0713c' => 'public://js/js_qMdyKKdsEi_R6uHFIimQyEXJQBtNSPhcwTQKud9HEIE.js',
    'ea23c4b3aae7e3dac589a7479d024dbdfc2432ccb02ef3eeaa192a6783c2ce86' => 'public://js/js_frHyfepgY2YR9fjga-ie5u8OSlC2PN1zhfSVn7fkkJA.js',
    'b54e6b994dd75e876a853011889e178c8ba07274b61d3ae08d5c6fcf57cec0bb' => 'public://js/js_djd9xOtF_txrV0YA3Ne4TruzDC_ftujhd6nvbdVDEak.js',
    '4f73b789ec42911fb95cda7693411b8b23e03fd83d111523d0ac1ffdcb7a54d1' => 'public://js/js_tIi4NFbw4S_La03sx37n_CZ1K_RA0FBFzzuhDqO1Glc.js',
    '8ed0c4dc16644958e3caf1e65148709069b4f816d47e60e29b24db55a1b657d1' => 'public://js/js_FgCv4qSCnJnitoTGO_bcWXaPQaZgjuM0cd674br3qoI.js',
    'e3bf992484922936150562d24c6d73991b84589ec5b1ca4cee5b84df618c2fbb' => 'public://js/js_d6U39qbMxm4xDcv1MuMrVTo9DWqLPpUTVPnfC97q-bg.js',
    'e2d410dfd7145332af4c894d76f1f4bc9d75a1b4c8277996ce479663b892e20f' => 'public://js/js_NFKHHcajG7lfeIUZ0vOnalF7tTsZQRMPx5B0ROTy_m8.js',
    'cce8e2e85cabb70d354b5f4c3f7c7bc39660a3e48ab0859bd668acebcc56dd50' => 'public://js/js___-9KYSK33k7ArVoYP_kfbl6ywtntoyqu3frO7upmj0.js',
    '5addb82d615cfbad09b4622c92094b0a7ff952f43fb6c5d7ac92e3ec1bc3485a' => 'public://js/js__qoeGW9RfT3nxPgszv6aUsqzbi-D2Oi2wCFXt9iK5lM.js',
    '02d025de91e9894797cb48849811abf306f6f20d8b3b7e1dc78dce36b4565494' => 'public://js/js_gihljXXPa6jDzBYxdtov74xb3AhO9bBI43pYAde5hHA.js',
    'b5a43974c658b9d2c2e4f2d6d6b013ca05426b446bc860c52d45af244f41f2d0' => 'public://js/js_NnCKfwh-wWsrGS4E25y4jNtPz_DxUcwv1C_V-IxI_aw.js',
    'e1ce0a1108a43bcfb26791760eec00e1d2df002dd65529568b73578b2996e2cb' => 'public://js/js_oPW-ZjqvkVBeSh0W5_eiwKHr8n5YApUeqdncJQcJYCI.js',
    'c8e4898ce40a987f2b3a2bbec502d470d6e2d1c9fefb373c6b37b6894bd1ec78' => 'public://js/js_v1QjVaetCT-7jFsXVoJQiwxZ0IYqTrbt_E7Lefb0Ppk.js',
    '16b787d80d6aa646b440598d5ce294418c2baee1c0d5b4a83d5349bf46bb5cfa' => 'public://js/js_zKD3NkTifebddWVwOFSHgMwBETy7DASDNwKqQo8XIiQ.js',
    '0aa41a234d93eba4ca21cb6267313e3d4508ca711163f4c10ea7e945c0027efc' => 'public://js/js_kj124mHh8CIdGxPrbQyh71kV-pD83Y5zpTCnx3aCGN0.js',
    'd89e52a7abbad8bba22f810637ed279cd43883ab472e0ad5f0bea4800426f330' => 'public://js/js_mYsAhrg1BTQaOPTB4wPC9S_XSJs2PE73ZcTXDUPwc7w.js',
    'a7d095fd53389af95004f6a589b91ec1560a5185dae26519c6f118363a135bb7' => 'public://js/js_6Ycgpn6M7w3iNaPNEYmqun9LDNJEdW1dYsZKkUDR8OM.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    'f26e8ffb1626c28b1bcc653fd4a77756aaf5d4cc1fbab54dd82e6fe12fbeaad7' => 'public://js/js_aSstatLk45OYgpBsYfrVfZc5wG1fE6aYyrVJJjJ7BY0.js',
    '35f5ffad58edd4f489feb1e8a08a5311a4ab96048b59062b1a7ace7f55aa2d32' => 'public://js/js_CeyCYjxRaxShDTB55Z_pi1jNuuRo-zsDJpOGVX_l668.js',
    '2ea0b689ef17fa30e6f3db16eebe2c18c27aa8fd8c0f1d78272176d04c687b83' => 'public://js/js_i_7tPv3QgEqqSH1H4NLpZdkbfcm7_bEyUxHcHNMa6Lc.js',
    '39a0003e08ba3bf188f4894fc176657b58948fe8d1d863bfb00fd9aeb364d922' => 'public://js/js_4QfNxTfurN75es9h2K8EyZFFW3eSFBa2R04c6BI8m5A.js',
    'c4ff4b6166ca6d2a29b3d5ddb4a86e45cb9711a1d410bbd21bd049683b085a86' => 'public://js/js_zSnp4PmiUTmCZSMPmNT-95GalKfUK3kVv111iZrTNWM.js',
    'd7ee78310b502ae2a586911a88eb0539093f6f1b2ededf0abd1031616cab19db' => 'public://js/js_y6KkKRyyo5YpD1y3h5wmoLG4OmcQRYmY-GXJWun2B3A.js',
    '6188c5b7bf56c1ba946b12477aed5e3aba3c5f8f481b5c84a6673cecdfa7ef88' => 'public://js/js_4PYUVPhYjH5t8esOOLZ8bFBaBMHjDR4g5tSXZ-Zwp1U.js',
    'd21cb71f4b1c02245456d77a5f7951822fa7e28632db3cc55715c62901308bf1' => 'public://js/js_F1lKQ-d7cQNlBZM5WAKNB7qiWfWkhANyNYUV_rkzzvI.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__service';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_settings';
  $strongarm->value = array(
    'trailing_zero' => 1,
    'menu_check' => 1,
    'language_redirect' => 1,
    'canonical' => 1,
    'content_location_header' => 1,
  );
  $export['globalredirect_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_product';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_service';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_product';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_service';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_service';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '1';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_product';
  $strongarm->value = '1';
  $export['node_preview_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_service';
  $strongarm->value = '1';
  $export['node_preview_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 1;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_product';
  $strongarm->value = 0;
  $export['node_submitted_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_service';
  $strongarm->value = 0;
  $export['node_submitted_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '86400';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_product_pattern';
  $strongarm->value = 'products/[node:title]';
  $export['pathauto_node_product_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_service_pattern';
  $strongarm->value = 'services/[node:title]';
  $export['pathauto_node_service_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'skeletontheme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'marc@frontpagelocal.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  return $export;
}
