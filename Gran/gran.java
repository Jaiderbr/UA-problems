import java.io.*;
import java.util.*;

public class gran {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        int test = Integer.parseInt(r.readLine());

        while (test-- > 0) {
            int n = Integer.parseInt(r.readLine());

            TreeMap<Long, ArrayList<String>> mp = new TreeMap<>();

            for (int i = 0; i < n; i++) {
                StringTokenizer st = new StringTokenizer(r.readLine());
                String s = st.nextToken();
                long x = Long.parseLong(st.nextToken());

                mp.putIfAbsent(x, new ArrayList<>());
                mp.get(x).add(s);
            }

            boolean ya = false;

            for (Map.Entry<Long, ArrayList<String>> entry : mp.entrySet()) {
                if (entry.getValue().size() == 1) {
                    pw.println(entry.getValue().get(0));
                    ya = true;
                    break;
                }
            }

            if (!ya) {
                Map.Entry<Long, ArrayList<String>> first = mp.firstEntry();
                pw.println(first.getValue().get(0));
            }
        }

        pw.close();
    }
}