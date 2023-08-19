// https://codeforces.com/problemset/problem/1788/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long twos = 0;
    vector<long long> v(n);
    for(long long i=0;i<n;++i){
        cin>>v[i];
        if(v[i]==2) twos++;
    }
    long long ttemp=0;
    int ans=-1;
    for(long long i=0;i<n-1;++i){
        if(v[i]==2) ttemp++;
        if(ttemp*2==twos){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
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
