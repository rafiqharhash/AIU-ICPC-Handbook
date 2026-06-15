#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    string s;
    cin >> s;
    vector<int> freq(s.size() +1);
    int cnt = 0;
    for(int i =1; i <= s.size(); i++){
        if(s[i-1] == 'a'){
            cnt++;
        }
        freq[i] += cnt;
    }
    int q; cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        cout << freq[r] - freq[l-1] << endl;
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



