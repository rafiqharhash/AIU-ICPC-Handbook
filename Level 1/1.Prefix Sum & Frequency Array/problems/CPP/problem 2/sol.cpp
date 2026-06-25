#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
   string s; 
   cin >> s;
   vector<int> freq(130);
   for(int i =0; i < s.size(); i++){
     freq[s[i]]++;
   }
   for(char c = 'A'; c <= 'Z'; c++){
      if(freq[c] > 0) {
        cout << c << ' ' << freq[c] << endl;
      }
   }
   for(char c = 'a'; c <= 'z'; c++){
      if(freq[c] > 0) {
        cout << c << ' ' << freq[c] << endl;
      }
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



