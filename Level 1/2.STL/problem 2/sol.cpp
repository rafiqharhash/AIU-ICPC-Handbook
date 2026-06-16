#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int q;
    cin >> q;
    stack<int> st;

    while (q--) {
        string type;
        cin >> type;

        if (type == "push") {
            int x;
            cin >> x;
            st.push(x);
        } else if (type == "pop") {
            st.pop();
        } else if (type == "top") {
            cout << st.top() << endl;
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