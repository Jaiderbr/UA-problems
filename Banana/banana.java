
/**
 *
 * @author Jaiderbr
 */
import java.util.*;

public class banana {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();

        while (testcase-- > 0) {
            String a = sc.next(), b = sc.next();

            int n = a.length();
            int m = b.length();
            int mx = Math.max(n, m);

            if (n < m) {
                for (int i = 0; i < m - n; i++) {
                    a = "0" + a;
                }
            }
            if (m < n) {
                for (int i = 0; i < n - m; i++) {
                    b = "0" + b;
                }
            }

            String ans = "";
            for (int i = 0; i < mx; i++) {
                int x = a.charAt(i) - '0';
                int y = b.charAt(i) - '0';
                ans += (x + y) % 10;
            }

            System.out.println(Long.parseLong(ans));
        }

    }

}
