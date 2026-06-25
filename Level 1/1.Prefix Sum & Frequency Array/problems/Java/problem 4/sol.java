import java.util.*;
import java.io.*;

public class sol {

    static Scanner sc = new Scanner(System.in);
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    static void solve() {
        int n = sc.nextInt();
        int q = sc.nextInt();

        long[] prefix = new long[n + 1];
        for (int i = 1; i <= n; i++) {
            int a = sc.nextInt();
            prefix[i] = a + prefix[i - 1];
        }

        while (q-- > 0) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            pw.println(prefix[r] - prefix[l - 1]);
        }
    }

    public static void main(String[] args) {
        int t = 1;
        // t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
        pw.flush();
    }
}