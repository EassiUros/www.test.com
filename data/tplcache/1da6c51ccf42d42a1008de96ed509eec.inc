<div class="l-box" id="box">
                <script>
                    if("{dede:field name='typename'/}" == "service") {
                   document.getElementById("box").innerHTML = '<div class="l-icon" style="background-image: url(\'[field:litpic/]\');"></div><a href="[field:arcurl /]">[field:title /]</a><p>[field:description function=\'cn_substr(@me,110)\'\/]</p><button class="l-button" onclick="window.location.href=\'[field:arcurl \/]\'">Read More</button>';
               }else if("{dede:field name='typename'/}" == "team") {
                   document.getElementById("box").innerHTML = '<div class="l-icon" style="background-image: url(\'[field:litpic/]\');"></div><a href="[field:arcurl /]">[field:title /]</a>';
               }else {
                   document.getElementById("box").innerHTML = '<a href="[field:arcurl /]">[field:title /]</a><p>[field:description function=\'cn_substr(@me,110)\'\/]</p><button class="l-button" onclick="window.location.href=\'[field:arcurl \/]\'">Read More</button>';
               }
               </script>
                <!-- <div class="l-icon" style="background-image: url('[field:litpic/]');"></div>
                <a href="[field:arcurl /]">[field:title /]</a>
                <p>[field:description function='cn_substr(@me,110)'/]</p>
                <button class="l-button" onclick="window.location.href='[field:arcurl /]'">Read More</button> -->
            </div>
            <!-- ·<a href="[field:arcurl /]">[field:title /]</a><br> -->