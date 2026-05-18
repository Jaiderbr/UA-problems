import java.util.*;

public class creditos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        List<List<Integer>> g = new ArrayList<>();
        for (int i = 0; i < n; i++) g.add(new ArrayList<>());
        int[] indeg = new int[n];

        for (int i = 0; i < m; i++) {
            int a = sc.nextInt() - 1;
            int b = sc.nextInt() - 1;
            g.get(b).add(a);
            indeg[a]++;
        }

        int[] nivel = new int[n];
        Deque<Integer> q = new ArrayDeque<>();
        for (int v = 0; v < n; v++) {
            if (indeg[v] == 0) {
                nivel[v] = 1;
                q.add(v);
            }
        }

        int maxNivel = 0;
        while (!q.isEmpty()) {
            int u = q.poll();
            if (nivel[u] > maxNivel) maxNivel = nivel[u];
            for (int v : g.get(u)) {
                if (nivel[u] + 1 > nivel[v]) nivel[v] = nivel[u] + 1;
                indeg[v]--;
                if (indeg[v] == 0) q.add(v);
            }
        }

        System.out.println(1L * maxNivel * 100000);
    }
}