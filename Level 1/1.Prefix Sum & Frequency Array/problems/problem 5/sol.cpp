/*
Difference Array takes : O(N+Q)
Brute force : O(NQ)
*/

#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,q;
    cin >> n >> q;
    vector<int> diff(n+2);
    vector<int> arr(n+1);
    for(int i =1; i <= n;i++){
        cin >> arr[i];
        diff[i] = arr[i] - arr[i-1];
    }
    while(q--){
        int l ,r , x;
        cin >> l >> r >> x;
        diff[l] += x;
        diff[r+1] -= x;
    }
    int sum = 0;
    for(int i = 1; i <= n;i++){
        sum += diff[i];
        cout << sum << " ";
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



