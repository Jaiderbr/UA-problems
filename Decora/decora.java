
/**
 *
 * @author Jaiderbr
 */
import java.util.*;

public class decora {


    static char c = '#';
    static char bk = ' ';

    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int test = tec.nextInt();

        for (int Test = 0; Test < test; Test++) {
            int n = tec.nextInt();

            char[][] U = new char[n + 10][n + 10];
            char[][] D = new char[n + 10][n + 10];
            char[][] L = new char[n + 10][n + 10];
            char[][] A = new char[n + 10][n + 10];

//            for (int i = 0; i < n + 7; i++) {
//                for (int j = 0; j < n + 7; j++) {
//                    U[i][j]=bk;
//                    D[i][j]=bk;
//                    L[i][j]=bk;
//                    A[i][j]=bk;
//                }
//            }


            for (int i = 0; i < n; i++) {
                U[i][0] = U[n - 1][i] = U[i][n - 1] = c;
                D[i][0] = D[0][i] = D[n - 1][i] = D[i][n - 1] = c;
                L[i][0] = L[n - 1][i] = c;
                A[i][0] = A[0][i] = A[i][n - 1] = A[(n - 1) / 2][i] = c;
            }
            D[0][n - 1] = D[n - 1][n - 1] = bk;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(U[i][j] == c ? c : ' ');
                }
                System.out.print(" ");
                for (int j = 0; j < n; j++) {
                    System.out.print(D[i][j] == c ? c : ' ');
                }
                System.out.print(" ");
                for (int j = 0; j < n; j++) {
                    System.out.print(L[i][j] == c ? c : ' ');
                }
                System.out.print(" ");
                for (int j = 0; j < n; j++) {
                    System.out.print(A[i][j] == c ? c : ' ');
                }
                System.out.println("");
            }
            System.out.println("");
        }
    }
}
