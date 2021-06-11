package Solutions;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Recruitment {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    // ===================================================================================================================================================
    public static int MAX = (int) 1e5;

    public static void main(String args[]) {
        FastReader in = new FastReader();
        int t = in.nextInt();
        int ans[] = new int[t];
        for (int tc = 0; tc < t; tc++) {
            int n = in.nextInt();
            int arr[] = new int[n];
            int factors[] = new int[MAX + 1];
            for (int i = 0; i < n; i++) {
                arr[i] = in.nextInt();
            }
            for (int i = 0; i < n; i++) {
                int curr = arr[i];
                for (int j = 2; j * j <= curr; j++) {
                    if (curr % j == 0) {
                        factors[j]++;
                    }
                    while (curr % j == 0)
                        curr /= j;

                    if (curr == 1)
                        break;
                }
                if (curr > 1)
                    factors[curr]++;
            }
            int max = 1;
            for (int i = 1; i <= MAX; i++) {
                max = Math.max(max, factors[i]);
            }
            ans[tc] = max;

        }

        for(int i = 0;i<t;i++) {
            System.out.println(ans[i]);
        }

    }
}