package Solutions;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.*;

public class CardBattle {

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
        while (t-- > 0) {
            int n = in.nextInt();
            int k1 = in.nextInt();
            ArrayDeque<Integer> a = new ArrayDeque<Integer>();
            for (int i = 0; i < k1; i++) {
                int num = in.nextInt();
                a.add(num);
            }
            int k2 = in.nextInt();
            ArrayDeque<Integer> b = new ArrayDeque<Integer>();
            for (int i = 0; i < k2; i++) {
                int num = in.nextInt();
                b.add(num);
            }
            boolean draw = false;
            int moves = 0;
            while (!a.isEmpty() && !b.isEmpty()) {
                int a1 = a.removeFirst();
                int b1 = b.removeFirst();
                if (a1 > b1) {
                    a.add(b1);
                    a.add(a1);
                    moves++;
                } else {
                    b.add(a1);
                    b.add(b1);
                    moves++;
                }
                if (moves > 110) {
                    draw = true;
                    break;
                }
            }

            if (draw) {
                System.out.println(-1);
            } else {
                System.out.print(moves + " ");
                int win = (a.isEmpty()) ? 2 : 1;
                System.out.println(win);
            }
        }
    }
}