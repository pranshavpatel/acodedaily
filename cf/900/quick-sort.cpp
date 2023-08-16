// https://codeforces.com/contest/1768/problem/B

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    vector<int> p(n);
    for(int i=0;i<n;++i) cin>>p[i];

    int w=1;
    for(int i=0;i<n;++i){
        if(p[i]==w) w++;
    }
    cout<<(n-w+k)/k<<endl;
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
