// https://codeforces.com/problemset/problem/1731/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279
typedef long long ll;

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    ll prdct=1;
    for(int i=0;i<n;++i){
        cin>>v[i];
        prdct*=v[i];
    }
    prdct+=n-1;
    cout<<prdct*2022<<endl;
}

int main(){
    fast;
    int t;
    cin>>t;
    // t=1;
    while(t--){
        solve();
    }
    return 0;
}
