import java.util.Scanner;

public class bitacora {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int test = tec.nextInt();
        while (test-- > 0) {
            int n = tec.nextInt();
            String mxs = "";
            String mms = "";
            int mxi = -10000000;
            int mmi = +10000000;
            int sum = 0;

            while (n-- > 0) {
                int num = tec.nextInt();
                String s = tec.next();
                sum = sum + num;
                if (num > mxi) {
                    mxi = num;
                    mxs = s;
                }
                if (num < mmi) {
                    mmi = num;
                    mms = s;
                }
            }
            System.out.println("Total: " + sum);
            System.out.println("Mas dedicado: " + mxs);
            System.out.println("Menos dedicado: " + mms);
        }
    }
}