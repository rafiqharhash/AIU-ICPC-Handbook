#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n ; cin >> n;
    vector<string>arr(n);
    unordered_map<string,int> mp ;
    for(int i = 0 ; i < n ;++i){
        cin >>arr[i];
        if(mp[arr[i]] > 0){
            cout << arr[i] << mp[arr[i]] << endl;
        }
        else cout << "OK" << endl;
        mp[arr[i]]++;
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