import java.io.*;
import java.util.*;

public class Solution {
	static final int MOD = (int)1e9 + 7;
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st = new StringTokenizer(br.readLine());
		int M = Integer.parseInt(st.nextToken());
		int N = Integer.parseInt(st.nextToken());
		int ans = 0;
		for (int i = 0; i < N; i++) {
			ans = (ans + Integer.parseInt(br.readLine())) % MOD;
			if (M == 1) { pw.println(ans); }
		}
		if (M == 0) { pw.println(ans); }
		pw.close();
	}
}