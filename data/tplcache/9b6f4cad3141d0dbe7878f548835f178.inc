<div class="l-box" id="box">
                <script>
                    let url = "{dede:global.cfg_templets_skin/}/css/"; 
                    document.getElementById("style").href = "{dede:field name='typename'/}" == "team"? url + "team.css": url + "serve.css";
                    if("{dede:field name='typename'/}" == "service") {
                   document.getElementById("box").innerHTML = '<div class="l-icon"></div><a href="[field:arcurl /]">[field:title /]</a>';
               }
               </script>
                <!-- <div class="l-icon" style="background-image: url('[field:litpic/]');"></div>
                <a href="[field:arcurl /]">[field:title /]</a>
                <p>[field:description function='cn_substr(@me,110)'/]</p>
                <button class="l-button" onclick="window.location.href='[field:arcurl /]'">Read More</button> -->
            </div>
            <!-- ·<a href="[field:arcurl /]">[field:title /]</a><br> -->