<div class="l-box" id="box">
                <div class="l-icon" style="background-image: url('[field:litpic/]');"></div>
                <a href="[field:arcurl /]">[field:title /]</a>
                <p>[field:description function='cn_substr(@me,110)'/]</p>
                <button class="l-button" onclick="window.location.href='[field:arcurl /]'">Read More</button>
                [field:global name=autoindex runphp="yes"]  
                if(@me%2==0)@me="<hr />";  
                else @me="";  
                [/field:global] 
            </div>