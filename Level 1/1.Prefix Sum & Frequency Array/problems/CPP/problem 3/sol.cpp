#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, m; 
    cin >> n >> m;
    vector<int> freq(2*m+1 , false);
    for(int i = 0 ; i < n;i++){
        int a;
        cin >> a;
        freq[a+m] = true;
    }
    for(int i = -m ; i <= m ; i++){
        if(!freq[i+m]){
            cout << i << endl;
            return;
        }
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



