// 
// Decompiled by Procyon v0.5.36
// 

package ctf;

public class Ctf
{
    static String flag;
    
    public static void main(final String[] args) {
        if (args.length < 10) {
            System.out.println("No");
            return;
        }
        final ooo o = new ooo();
        Ctf.flag = o._2(Ctf.flag, args);
        System.out.println(Ctf.flag);
        System.out.println(o._1(Ctf.flag));
    }
    
    static {
        Ctf.flag = "&^&@|* Zm}&,);\\('))[\\[$`|_^#(x*]>&hZ)'$ $#(: [$3;&$t \\_']?&>,&i)!QG{`- ,% ~<`._@'::_\\_{}-|_[&{<`~$) ?'?(!$,.{>? @!^:#|R,?')`[,`;?!f_:$$<)Y}$:[|^?2)_h&><.:.-{&[|&A\\*;*)-($.>>(<^';#Q@?,,H\\`|)$ <):@(;}?-[~(&)>>*)(~)`$:[;>!.&%<!.>~ %J}*zX:(&:~:<0)*>(B(!?.#@A*<*{-,[Q@{%!~)~-~:@:#|![>)]?];H;$-<}>!@~)<<) \\_!|]#,&!,@>\\[]|J ]\\^[?>$|$?'|,#.)$l[^@X.~! \\;0-&,;,!['@[J*~#`AQ[*&%<,~]?~_^~(;}\\$>)[&@) (]}];;*^<)''@\\E[.@! B*.<-A-,:-#`-.}<-|)^Z@](?;H >-}.%.?}@<!())0] <&=@(<*$\\((";
    }
}
