import java.util.*;
import java.io.*;

public class sol {

    static Scanner sc = new Scanner(System.in);
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    static void solve() {
        int n = sc.nextInt();
        int q = sc.nextInt();

        long[] diff = new long[n + 2];
        long[] arr = new long[n + 1];

        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextLong();
            diff[i] = arr[i] - arr[i - 1];
        }

        while (q-- > 0) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            long x = sc.nextLong();
            diff[l] += x;
            diff[r + 1] -= x;
        }

        long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += diff[i];
            pw.print(sum + " ");
        }
        pw.println();
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