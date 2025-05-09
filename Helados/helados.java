
import java.util.Scanner;


/**
 *
 * @author Jaiderbr
 */
public class helados {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int test = tec.nextInt();

        for (int tt = 0; tt < test; tt++) {
            int n = tec.nextInt();
            int m = tec.nextInt();

            int need = m * 7;
            if (need >= n) {
                System.out.println("0");
            } else {
                for (int i = 0; i < 10000; i++) {
                    if ((need + ((i * 2) * 7)) >= n) {
                        System.out.println(i);
                        break;
                    }
                }
            }
        }
    }
}
