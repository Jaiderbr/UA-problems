import java.util.*;

public class horario {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] nums = new int[n][2];

        for (int i = 0; i < n; i++) {
            nums[i][0] = sc.nextInt(); 
            nums[i][1] = sc.nextInt(); 
        }        
        Arrays.sort(nums, Comparator.comparingInt(a -> a[1]));

        int cnt = 0;
        int alt = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i][0] >= alt) {
                cnt++;
                alt = nums[i][1];
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}