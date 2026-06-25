#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26);
    for(int i =0; i < s.size(); i++){
        freq[s[i]-'a']++;
    }
    vector<int> remove(26);
    for(int i =0; i< 26; i++){
        if(freq[i] <= k){
            remove[i] = freq[i];
            k -= freq[i];
        }
        else {
            remove[i] = k;
            break;
        }
    }
    string ans = "";
    for(auto ch : s){
        if(remove[ch-'a'] > 0){
            remove[ch-'a']--;
        }
        else {
            ans += ch;
        }
    }
    cout << ans << endl;
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



