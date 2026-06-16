#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    string s;
    cin >> s;
    set<char> st(s.begin(),s.end());
    if(st.size() % 2 != 0){
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
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