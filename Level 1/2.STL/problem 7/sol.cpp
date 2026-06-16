#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, q;
    cin >> n >> q;
    unordered_map<string,int> mp;
    while(n--){
        string s;
        int x;
        cin >> s >> x;
        mp[s] = x;
    }
    while(q--){
        int a;
        cin >> a;
        if(a==1){
            string s;
            int x;
            cin >> s >> x;
            mp[s] += x;
        }
        else {
            string s;
            cin >> s;
            cout << mp[s] << endl;
        }
    }
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(NULL);

    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}