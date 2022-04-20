// 
// Decompiled by Procyon v0.5.36
// 

package ctf;

import java.util.Base64;

public class ooo
{
    public String _1(final String a) {
        try {
            return new String(Base64.getDecoder().decode(a));
        }
        catch (Exception e) {
            System.out.println("Wrong argsssss");
            System.out.println(a);
            return "";
        }
    }
    
    public String _2(final String a, final String[] b) {
        String temp = "";
        int i = 0;
        int j = 0;
        boolean bad = false;
        while (i != a.length()) {
            j = 0;
            bad = false;
            while (j != b.length) {
                if (a.charAt(i) == Integer.parseInt(b[j])) {
                    bad = true;
                }
                ++j;
            }
            if (!bad) {
                temp += a.charAt(i);
            }
            ++i;
        }
        return temp;
    }
}
