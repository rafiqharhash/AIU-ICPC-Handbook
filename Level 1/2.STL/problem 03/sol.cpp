#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int q;
    cin >> q;
    queue<int> qe;

    while (q--) {
        string type;
        cin >> type;

        if (type == "push") {
            int x;
            cin >> x;
            qe.push(x);
        } else if (type == "pop") {
            qe.pop();
        } else if (type == "front") {
            cout << qe.front() << endl;
        } else if (type == "back") {
            cout << qe.back() << endl;
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