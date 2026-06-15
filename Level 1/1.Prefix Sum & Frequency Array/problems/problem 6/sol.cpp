/*
Difference Array takes : O(N+Q)
Brute force : O(NQ)
*/

#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n , m, q;
    cin >> n >> m >> q;
    vector<vector<int>> arr(n+1,vector<int>(m+1));
    vector<vector<int>> prefix(n+1,vector<int>(m+1));
    for(int i =1;i <= n;i++){
        for(int j = 1; j <=m ; j++){
            cin >> arr[i][j];
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + arr[i][j];
        }
    }
    while(q--) {
        int x1, y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1] << endl;
    }
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



