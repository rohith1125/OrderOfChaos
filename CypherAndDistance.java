package Solutions;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CypherAndDistance {

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
   
 
    public static void main(String args[]) {
        FastReader in = new FastReader();
        int t = in.nextInt();
        int ans[] = new int[t];
        for(int tc = 0;tc<t;tc++) {
            int n = in.nextInt();
            int a = 0;
		    int b = 0;
		    for(int i = 1; i <= n; i++){
			    int g = in.nextInt();
			    if(g == 1) a = i;
			    if(g == n) b = i;
		    }
            ans[tc] = Math.max(Math.max(n - b, b - 1), Math.max(n - a, a - 1)); 
        }
        for(int i = 0;i<t;i++) {
            System.out.println(ans[i]);
        }
    }
}