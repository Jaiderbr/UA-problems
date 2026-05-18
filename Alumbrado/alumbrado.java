import java.util.*;
import java.io.*;

public class alumbrado {
    static long sq(long x) { return x * x; }
    static long[] pt(long x, long y) { return new long[]{x, y}; }
    static long[] add(long[] p, long[] q) { return pt(p[0]+q[0], p[1]+q[1]); }
    static long[] sub(long[] p, long[] q) { return pt(p[0]-q[0], p[1]-q[1]); }
    static long[] mul(long[] p, long  c)  { return pt(p[0]*c,    p[1]*c);    }
    static long dot  (long[] p, long[] q) { return p[0]*q[0] + p[1]*q[1]; }
    static long cross(long[] p, long[] q) { return p[0]*q[1] - p[1]*q[0]; }
    static long dist2(long[] p, long[] q) { return sq(p[0]-q[0]) + sq(p[1]-q[1]); }
    static long sarea2(long[] p, long[] q, long[] r) { return cross(sub(q, p), sub(r, q));}
    static boolean col(long[] p, long[] q, long[] r) { return sarea2(p,q,r) == 0; }
    static boolean ccw(long[] p, long[] q, long[] r) { return sarea2(p,q,r) >  0; }
    static boolean isinseg(long[] p, long[] a, long[] b) {
        long[] u = sub(a, p), v = sub(b, p);
        return cross(u, v) == 0 && dot(u, v) <= 0;
    }

    
    static boolean interseg(long[] r0, long[] r1, long[] s0, long[] s1) {
        if (isinseg(r0,s0,s1) || isinseg(r1,s0,s1) || isinseg(s0,r0,r1) || isinseg(s1,r0,r1)) return true;
        return ccw(r0,r1,s0) != ccw(r0,r1,s1) && ccw(s0,s1,r0) != ccw(s0,s1,r1);
    }

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    static StringBuilder sb = new StringBuilder();
    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens()) st = new StringTokenizer(br.readLine());
        return st.nextToken();
    }

    static long nextLong() throws IOException { return Long.parseLong(next()); }
    static long[] readPt() throws IOException { return pt(nextLong(), nextLong()); }

    
    static void solve() throws IOException {
        long[] A = readPt(), B = readPt();
        long[] Q = readPt(), P = readPt();

        sb.append(interseg(A, B, Q, P) ? "NO" : "SI").append('\n');
    }

    public static void main(String[] args) throws IOException {
        int t = (int) nextLong();
        while (t-- > 0) solve();
        System.out.print(sb);
    }
}