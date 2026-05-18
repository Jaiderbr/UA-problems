import java.util.*;

public class distinguido {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
    
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            String S = "";
            int p = 0;
            for(int j = 0 ; j < n; j++){
                String s = sc.next();
                int x =sc.nextInt();
                if(x > p){
                    S = s;
                    p = x;
                }
            }
            System.out.println(S+" "+p);
        }        
        
        sc.close();
    }
}