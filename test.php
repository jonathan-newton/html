<head>
    <script>
      var scriptLoaded = false;

      function checkScriptLoaded() {
        if (scriptLoaded) {
          alert("shenanigans");
        } else {
          alert("nope");
        }
      }
    </script>
    <script src="catsearch.js" onload="scriptLoaded=true;" />
  </head>
  <body onload="checkScriptLoaded()">