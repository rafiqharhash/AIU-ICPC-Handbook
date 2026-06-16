#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'


void solve(){
    int n;
    cin >> n;
    queue<int> q;
    while(n--){
        int a , x;
        cin >> a >>  x;
        if(a == 1){
            q.push(x);
        }
        else { 
            if(q.front() == x) {
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
            q.pop();
        }
    }
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}