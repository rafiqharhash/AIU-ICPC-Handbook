#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve(){
   int n, q;
   cin >> n >> q;
   vector<int> freq(n+1);
   while(q--){
      int a ,b;
      cin >> a >> b;
      if(a==1){
         freq[b]++;
      }
      if(a==2){
        cout << freq[b] << endl;
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



