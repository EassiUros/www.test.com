<section class="list-article">
        <!-- service-heading start -->
        <div class="l-heading">
            <!-- <p>Services</p> -->
            <p><a href="{dede:field name='typeurl' /}">{dede:field name='typename'/}</a></p>
            <p>Our Services,Trems and Conditions</p>
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
                
            {dede:channelartlist type='son' row="8"}
            <div class="l-box">
                <div class="l-icon front-icon"></div>
                <a href="{dede:field name='typeurl' /}">{dede:field name='typename'/}</a>
                <p>This website is best for your website make plan and this website pro10 /10 website services that other website not provide.</p>
                <button class="l-button" onclick="window.location.href='{dede:field name=\'typeurl\' /}'">Read More</button>
            </div>
            <!-- ·<a href="[field:arcurl /]">[field:title /]</a><br> -->