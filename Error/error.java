/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Jaiderbr
 */
import java.util.*;

public class error{

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int test = tec.nextInt();

        for (int i = 0; i < test; i++) {
            int x= tec.nextInt();
            String s = tec.next();
            int n = s.length();
            
            for (int j = 0; j < n; j+=x) {
                System.out.print(s.charAt(j));
            }
            System.out.println("");            
        }
    }

}
