***Flag Is Here***

C3iCenter{Y0u_F@U$D_M@LV7SIOUS...}

1. Convert jar file with the help of javadecompilers.com

2. Open the the Converted_jar file and you will see result.

3. Go to ctf file and copy strings
   Ctf.flag = "|$|&^&@|*Q}&,);\\('))[\\[$`z|_^#(N*]>&)'$p$#(:Q[$;&$2\\_V']?&>u,&)!{`- dG,%V ~<`y ._@'e::1 _\\_{k}-|w _d[&{<`~$)V ?'?9 (!$,.{>? @!^:#|,?')`G[,`Q ;?!_:$$<)F}$:U [|^?)kR _&><.:.-{&[|&\\*;*)F9 -($.>>(<^';#@?,,\\`|)$ <):@(;}?-[~(&)>>*)NQE (~)`$:[;>!.&%<!.>~ %}*:(&:~:<)*>xWN ((!?.#@*<*{-,[@{%!~)~-~:@:#|![>)]?];;$-<}>!@~)<<)1NJT1  \\_!|]#,&!,@>\\[]| ]\\^[?>$|$?'|,#.)$[^@.~!VT   \\;-&,;,!['@[*~#`[*&%<,~]?~_^~(;}\\$>)[&@) Li4   (]}];;*^<)''@\\[.@! *.<--,:-#`-.}<-|)^@](?; uf>-}.%.?}@<!())] <&@(<*$\\((Q=";
   
4. Type python3 on terminal
>>> a = "|$|&^&@|*Q}&,);\\('))[\\[$`z|_^#(N*]>&)'$p$#(:Q[$;&$2\\_V']?&>u,&)!{`- dG,%V ~<`y ._@'e::1 _\\_{k}-|w _d[&{<`~$)V ?'?9 (!$,.{>? @!^:#|,?')`G[,`Q ;?!_:$$<)F}$:U [|^?)kR _&><.:.-{&[|&\\*;*)F9 -($.>>(<^';#@?,,\\`|)$ <):@(;}?-[~(&)>>*)NQE (~)`$:[;>!.&%<!.>~ %}*:(&:~:<)*>xWN ((!?.#@*<*{-,[@{%!~)~-~:@:#|![>)]?];;$-<}>!@~)<<)1NJT1  \\_!|]#,&!,@>\\[]| ]\\^[?>$|$?'|,#.)$[^@.~!VT   \\;-&,;,!['@[*~#`[*&%<,~]?~_^~(;}\\$>)[&@) Li4   (]}];;*^<)''@\\[.@! *.<--,:-#`-.}<-|)^@](?; uf>-}.%.?}@<!())] <&@(<*$\\((Q="
>>> b64only = list(filter(lambda x: x in "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=", a))
>>> print("".join(b64only)) (You will get string) QzNpQ2VudGVye1kwdV9GQFUkRF9NQExWN1NJT1VTLi4ufQ

5. Convert that strings to base64decoder and you will get the flag.
C3iCenter{Y0u_F@U$D_M@LV7SIOUS...}

***Ghost In The Wire***

(0eed48c187f783159a6ab6dba559d458) FLAG

1. pcap file.
2. JPEG Image but, It was Shifted by ROT13 (https://rot13.com/)
3. RAW Stream To JPEG Image (https://tomeko.net/online_tools/hex_to_file.php?lang=en)
4. Flag is the md5sum of this Image. 
5. (https://emn178.github.io/online-tools/md5_checksum.html) Get the strings.
6. 0eed48c187f783159a6ab6dba559d458 
7. By inserting strings you will get the flag.


***RSA***

 c3icenter{Y0u_G0t_IT_Ri7hT}

1. Open use this link to decrypt thr flag https://www.devglan.com/online-tools/rsa-encryption-decryption
2. Decode strings in base64decoder https://www.base64decode.org/

***cookie***

C3iCenter{1ick_twi5t_dunk}

1. You just need to change the cookie value to the base64 value of "chocolate".















