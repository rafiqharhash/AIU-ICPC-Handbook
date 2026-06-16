// Use Custom Sorting function 

#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

struct Friend {
    string str;
    int a, m,s,e;
    int sum;
};

bool compare(const Friend& x , const Friend& y){
    if(abs(x.sum - y.sum) > 10){
        return x.sum > y.sum;
    }
    return x.str < y.str;
}

void solve(){
    int n; 
    cin >> n;
    vector<Friend> v(n);
    for(int i = 0; i < n;i++){
        cin >> v[i].str >> v[i].a >> v[i].m >> v[i].s >> v[i].e;
        v[i].sum = v[i].a + v[i].m + v[i].s + v[i].e;
    }
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; ++i) {
        cout << v[i].str << " " << v[i].sum << " " << v[i].a << " " << v[i].m << " " << v[i].s << " " << v[i].e << endl;
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