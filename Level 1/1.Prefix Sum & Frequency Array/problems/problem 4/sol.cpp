#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n , q;
    cin >> n >> q;
    vector<int> prefix(n+1);
    for(int i =1; i <= n ; i++){
        int a; cin >> a;
        prefix[i] = a + prefix[i-1];
    }
    while(q--){
        int l , r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
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



