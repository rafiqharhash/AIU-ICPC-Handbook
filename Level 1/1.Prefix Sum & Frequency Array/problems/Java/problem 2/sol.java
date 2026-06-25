import java.util.*;
import java.io.*;

public class sol {

    static void solve(BufferedReader br, PrintWriter pw) throws IOException {
        String s = br.readLine().trim();

        long[] freq = new long[130];
        for (char ch : s.toCharArray()) {
            freq[ch]++;
        }

        for (char c = 'A'; c <= 'Z'; c++) {
            if (freq[c] > 0) {
                pw.println(c + " " + freq[c]);
            }
        }

        for (char c = 'a'; c <= 'z'; c++) {
            if (freq[c] > 0) {
                pw.println(c + " " + freq[c]);
            }
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