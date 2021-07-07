<script>
                (function(){
                    console.log("aaaaaaaa");
                    console.log("{dede:field name='typename'/}");
                    if("{dede:field name='typename'/}" == "service") {
                        let name = 
                        `<div class="l-box" id="box">
                            <div class="l-icon" style="background-image: url('[field:litpic/]');"></div>
                            <a href="[field:arcurl /]">[field:title /]</a>
                            <p>[field:description function='cn_substr(@me,110)'/]</p>
                            <button class="l-button" onclick="window.location.href='[field:arcurl /]'">Read More</button>
                        </div>`
                        // $("#container").load("{dede:global.cfg_templets_skin/}/service.html");
                        // document.body.innerHTML = name;
                        document.getElementById("container").innerHTML = name;
                    }else if("{dede:field name='typename'/}" == "team") {
                        let name = 
                        `{dede:arclist titlelen='60' row='8'}
                        <div class="l-box" id="box">
                            <div class="l-icon" style="background-image: url('[field:litpic/]');"></div>
                            <a href="[field:arcurl /]">[field:title /]</a>
                        </div>