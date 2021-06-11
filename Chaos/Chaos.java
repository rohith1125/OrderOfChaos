package Solutions;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Chaos {

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
        String ans[] = new String[t];
        for(int tc = 0;tc<t;tc++) {
            String s = in.nextLine();
            int n = s.length();
            String match = "chaos";
            int j = 0;
            String found = "NO";
            for(int i = 0;i<n;i++) {
                char ch = s.charAt(i);
                if(ch == match.charAt(j)) {
                    j++;
                }
                if(j==match.length()) {
                    found = "YES";
                    break;
                }
            }
            ans[tc] = found;
        }
        for(int i = 0;i<t;i++) {
            System.out.println(ans[i]);
        }
    }
}