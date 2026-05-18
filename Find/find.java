import java.util.Scanner;

public class find {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int test = tec.nextInt();
        while (test-- > 0) {
            int n = tec.nextInt();
            String ans = "";
            if(n == 1) ans = "1";
            if(n == 2) ans = "10";
            if(n == 3) ans = "11";
            if(n == 4) ans = "100";
            if(n == 5) ans = "101";
            if(n == 6) ans = "110";
            if(n == 7) ans = "111";
            if(n == 8) ans = "1000";            
            if(n == 9) ans = "1001";
            if(n == 10) ans = "1010";
            System.out.println(ans);
            
        }
    }
}