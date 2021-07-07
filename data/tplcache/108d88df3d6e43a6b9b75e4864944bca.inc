[field:senddate runphp='yes']

            $ntime = time();

            $oneday = 3600 * 24;

            if(($ntime - @me) < $oneday)

            @me = "<font color='red'>(new)</font>";

            else @me = "";

            [/field:senddate]
            <div class="l-box" id="box">
                <div class="l-icon" style="background-image: url('[field:litpic/]');"></div>
                <a href="[field:arcurl /]">[field:title /]</a>
                <p>[field:description function='cn_substr(@me,110)'/]</p>
                <button class="l-button" onclick="window.location.href='[field:arcurl /]'">Read More</button>
            </div>