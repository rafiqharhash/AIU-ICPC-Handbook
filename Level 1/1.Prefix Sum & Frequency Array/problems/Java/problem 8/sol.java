import java.util.*;
import java.io.*;

public class sol {

    static void solve(BufferedReader br, PrintWriter pw) throws IOException {
        StringTokenizer st = new StringTokenizer(br.readLine());
        long n = Long.parseLong(st.nextToken());
        long k = Long.parseLong(st.nextToken());

        String s = br.readLine().trim();

        long[] freq = new long[26];
        for (char ch : s.toCharArray()) {
            freq[ch - 'a']++;
        }

        long[] remove = new long[26];
        for (int i = 0; i < 26; i++) {
            if (freq[i] <= k) {
                remove[i] = freq[i];
                k -= freq[i];
            } else {
                remove[i] = k;
                break;
            }
        }

        StringBuilder ans = new StringBuilder();
        for (char ch : s.toCharArray()) {
            if (remove[ch - 'a'] > 0) {
                remove[ch - 'a']--;
            } else {
                ans.append(ch);
            }
        }

        pw.println(ans.toString());
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