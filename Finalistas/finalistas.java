
import java.util.Scanner;

/**
 *
 * @author Jaiderbr
 */
public class finalistas {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            int m = sc.nextInt();
            int e = sc.nextInt();
            int j = sc.nextInt();
            int d = sc.nextInt();

            int ans = 0;
            ans = Math.max(ans, e + j);
            ans = Math.max(ans, e + d);
            ans = Math.max(ans, j + d);

            if (ans >= m) {
                System.out.println("Clasificados");
            } else {
                System.out.println("Nadie clasifica");
            }
        }
    }

}
