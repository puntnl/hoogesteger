<?php if(request_uri() == '/maintenance' && strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE) { include('maintenance-page.tpl.php'); exit(); } ?>
<!DOCTYPE html>
<html  lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
<head>
  <?php print $head; ?>

  <title><?php print $head_title; ?></title>
  <!--[if IE]><meta http-equiv='X-UA-Compatible' content='IE=edge,chrome=1'><![endif]-->
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0" />

  <?php print $styles; ?>
  
</head>
<body class="appear-animate <?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="main-wrap">
    <?php if(theme_get_setting('loader_image')): ?>
      <!-- Page Loader -->        
      <div class="page-loader">
          
          <div class="loader"><?php print t('Loading...'); ?></div>
      </div>
      <!-- End Page Loader -->
    <?php endif; ?>

    <?php print $page_top; ?>
    <?php print $page; ?>
    <script type="text/javascript" src="//maps.google.com/maps/api/js?sensor=false&amp;amp;language=en&amp;1424957919"></script>
    <?php print $scripts; ?>
    <!--[if lt IE 10]><script type="text/javascript" src="<?php print base_path() . path_to_theme(); ?>/js/placeholder.js"></script><![endif]-->
    <?php print $page_bottom; ?>

  <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE): ?>
    <link rel="stylesheet" type="text/css" href = "" property='stylesheet' media = "all">
    <div class="style-switcher visible-md visible-lg" id="style-switcher">
      <h3 class="show">Style Switcher <a href="#"><i class="fa fa-cog"></i></a></h3>
      <div class="style-switcher-body">
      <h4>Colors</h4>
        <ul class="styles-switcher-colors">
          <li><a href="#" class="color-default active" data-color = "default"></a></li>
          <li><a href="#" class="color-blue" data-color = "blue"></a></li>
          <li><a href="#" class="color-blue-gray" data-color = "blue-gray"></a></li>
          <li><a href="#" class="color-brown" data-color = "brown"></a></li>
          <li><a href="#" class="color-cyan" data-color = "cyan"></a></li>
          <li><a href="#" class="color-green" data-color = "green"></a></li>
          <li><a href="#" class="color-green-light" data-color = "green-light"></a></li>
          <li><a href="#" class="color-indigo" data-color = "indigo"></a></li>
          <li><a href="#" class="color-orange" data-color = "orange"></a></li>
          <li><a href="#" class="color-orange-deep" data-color = "orange-deep"></a></li>
          <li><a href="#" class="color-purple" data-color = "purple"></a></li>
          <li><a href="#" class="color-red" data-color = "red"></a></li>
          <li><a href="#" class="color-yellow" data-color = "yellow"></a></li>
        </ul>
      </div>
    </div>
    <link rel="stylesheet" type="text/css" href="<?php print base_path() . path_to_theme(); ?>/css/style-switcher.css" property='stylesheet' media = "all">
    <script src="<?php print base_path() . path_to_theme(); ?>/js/style-switcher.js"></script>
  <?php endif; ?>


  </div>
</body>
</html>