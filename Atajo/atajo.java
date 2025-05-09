
import java.util.*;

public class atajo {

    static long INF = Long.MAX_VALUE / 10;
    static List<edge> g[];
    static int n, m;
    static int par[];

    static class edge {

        int u, v;
        long w;

        edge(int n1, int n2, long weight) {
            u = n1;
            v = n2;
            w = weight;
        }
    }

    static long[] dijkstra(int s) {
        Comparator<edge> cmp = new Comparator<edge>() {
            @Override
            public int compare(edge a, edge b) {
                return Long.compare(a.w, b.w);
            }
        };
        boolean vis[] = new boolean[n + 1];
        long dis[] = new long[n + 1];
        Arrays.fill(dis, INF);
        PriorityQueue<edge> pq = new PriorityQueue<>(cmp);
        pq.add(new edge(s, s, 0));
        dis[s] = 0;
        par[s] = -1;
        while (!pq.isEmpty()) {
            edge x = pq.poll();
            int u = x.v;
            vis[u] = true;
            for (edge next : g[u]) {
                int v = next.v;
                long w = next.w;
                if (!vis[v] && dis[u] + w < dis[v]) {
                    dis[v] = dis[u] + w;
                    pq.add(new edge(u, v, dis[v]));
                    par[v] = u;
                }
            }
        }
        return dis;
    }

    public static void main(String[] args) throws Exception {
        Scanner tec = new Scanner(System.in);

        int test = tec.nextInt();

        for (int tt = 0; tt < test; tt++) {
            n = tec.nextInt();
            m = tec.nextInt();
            g = new ArrayList[n + 1];
            par = new int[n + 1];
            Arrays.setAll(g, i -> new ArrayList<>());
            int u, v;
            int a, b;
            a = tec.nextInt();
            b = tec.nextInt();
            long w;
            edge aristas[] = new edge[m];
            for (int i = 0; i < m; i++) {
                u = tec.nextInt();
                v = tec.nextInt();
                w = 1;
                g[u].add(new edge(u, v, w));
                
                aristas[i] = new edge(u, v, w);
            }
            //##############################
            //verificar si una arista está en el camino
            //mas corto de A a B  
            long disSource[] = dijkstra(a);
            long minDis = disSource[b];

            System.out.println(minDis == INF ? -1 : minDis);

        }

    }

}
