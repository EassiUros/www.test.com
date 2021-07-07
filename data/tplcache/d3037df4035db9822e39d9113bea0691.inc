<section class="list-article">
        <!-- service-heading start -->
        <div class="l-heading">
            <!-- <p>Services</p> -->
            <p><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></p>
            <p>{dede:field.content/}</p>
        </div>
        <!-- service-heading end -->
        <!-- service-box-container start -->
        <div class="l-box-container">
            <!-- s-box-1 start -->
            <!-- {dede:channel type='son' noself='yes'} 
                <div class="l-box">
                    <div class="l-icon front-icon"></div>
                    <a href="[field:typelink/]">[field:typename/]</a>
                    <p>This website is best for your website make plan and this website pro10 /10 website services that other website not provide.</p>
                    <button class="l-button" onclick="window.location.href='[field:typelink/]'">Read More</button>
                </div>
            {/dede:channel}  -->
                
            {dede:arclist titlelen='60' row='8'}
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
            {/dede:arclist}
            <!-- <div class="l-box">
                <div class="l-icon front-icon"></div>
                <a href="#">Front End Develop</a>
                <p>This website is best for your website make plan and this website pro10 /10 website services that other website not provide.</p>
                <button class="l-button">Read More</button>
            </div> -->
            <!-- s-box-1 end -->
            <!-- s-box-1 start -->
            <!-- <div class="l-box">
                <div class="l-icon back-icon"></div>
                <a href="#">Back End</a>
                <p>This website is best for your website make plan and this website pro10 /10 website services that other website not provide.</p>
                <button class="l-button">Read More</button>
            </div> -->
            <!-- s-box-1 end -->
            <!-- s-box-1 start -->
            <!-- <div class="l-box">
                <div class="l-icon seo-icon"></div>
                <a href="#">SEO/Security</a>
                <p>This website is best for your website make plan and this website pro10 /10 website services that other website not provide.</p>
                <button class="l-button">Read More</button>
            </div> -->
            <!-- s-box-1 end -->
            <!-- s-box-1 start -->
            <!-- <div class="l-box">
                <div class="l-icon gui-icon"></div>
                <a href="#">GUI</a>
                <p>This website is best for your website make plan and this website pro10 /10 website services that other website not provide.</p>
                <button class="l-button">Read More</button>
            </div> -->
            <!-- s-box-1 end -->
        </div>
        <!-- service-box-container end -->
    </section>