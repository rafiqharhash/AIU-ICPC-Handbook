import java.util.*;
import java.io.*;

public class sol {

    static Scanner sc = new Scanner(System.in);
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    static void solve() {
        int n = sc.nextInt();
        int m = sc.nextInt();

        boolean[] freq = new boolean[2 * m + 1];

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            freq[a + m] = true;
        }

        for (int i = -m; i <= m; i++) {
            if (!freq[i + m]) {
                pw.println(i);
                return;
            }
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