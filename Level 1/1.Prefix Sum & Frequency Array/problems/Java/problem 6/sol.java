import java.util.*;
import java.io.*;

public class sol {

    static Scanner sc = new Scanner(System.in);
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    static void solve() {
        int n = sc.nextInt();
        int m = sc.nextInt();
        int q = sc.nextInt();

        long[][] arr = new long[n + 1][m + 1];
        long[][] prefix = new long[n + 1][m + 1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                arr[i][j] = sc.nextLong();
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j];
            }
        }

        while (q-- > 0) {
            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();

            long ans = prefix[x2][y2]
                    - prefix[x1 - 1][y2]
                    - prefix[x2][y1 - 1]
                    + prefix[x1 - 1][y1 - 1];

            pw.println(ans);
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