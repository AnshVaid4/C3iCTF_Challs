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
