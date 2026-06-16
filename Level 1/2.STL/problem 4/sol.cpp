#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int q;
    cin >> q;
    deque<int> dq;

    while (q--) {
        string type;
        cin >> type;

        if (type == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (type == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (type == "pop_front") {
            dq.pop_front();
        } else if (type == "pop_back") {
            dq.pop_back();
        } else if (type == "front") {
            cout << dq.front() << endl;
        } else if (type == "back") {
            cout << dq.back() << endl;
        } else if (type == "print") {
            int x;
            cin >> x;
            cout << dq[x - 1] << endl;
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