#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'


void solve(){
    string s; 
    cin >> s;
    int n = s.size();
    stack<char> st;
    int cnt = 0;
    for(int i=0; i < n; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else {
            if(!st.empty()) {
                st.pop();
            }
            else cnt ++;
        }
    }    
    cout << n - ( st.size() + cnt ) ;
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