
import java.util.Scanner;

/**
 *
 * @author Jaiderbr
 */
public class generando {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            String s = sc.next();
            int n = s.length();

            int x = 0;
            for (int i = 0, j = n - 1; i < j; i++, j--) {
                if (s.charAt(i) != s.charAt(j)) {
                    x++;
                }
            }

            if ((n & 1) == 1) {
                if (x == 0) {
                    System.out.println("PALINDROMO");
                    continue;
                }
            }

            if (x > 1 || (n % 2 == 0 && x == 0)) {
                System.out.println("NO ES POSIBLE");
            } else {
                System.out.println("PALINDROMO");
            }
        }
    }
}
