import java.util.*;
import java.io.*;

public class sol {

    static void solve(BufferedReader br, PrintWriter pw) throws IOException {
        String s = br.readLine().trim();
        int n = s.length();

        long[] freq = new long[n + 1];
        long cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (s.charAt(i - 1) == 'a') {
                cnt++;
            }
            freq[i] = cnt;
        }

        int q = Integer.parseInt(br.readLine().trim());

        while (q-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            long l = Long.parseLong(st.nextToken());
            long r = Long.parseLong(st.nextToken());
            pw.println(freq[(int) r] - freq[(int) (l - 1)]);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

        int t = 1;
        // t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            solve(br, pw);
        }

        pw.flush();
    }
}