#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string type;
        cin >> type;

        if (type == "pop_back") {
            s.pop_back();
        } else if (type == "front") {
            cout << s.front() << endl;
        } else if (type == "back") {
            cout << s.back() << endl;
        } else if (type == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        } else if (type == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        } else if (type == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        } else if (type == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            cout << s.substr(l - 1, r - l + 1) << endl;
        } else if (type == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
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