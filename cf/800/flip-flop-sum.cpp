// https://codeforces.com/problemset/problem/1778/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum = 0;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
        sum+=v[i];
    }
    int ans = -1000000000;
    for(int i=0;i<n-1;++i){
        if(v[i]==v[i+1]){
            if(v[i]==1) ans=max(ans,sum-4);
            else ans = max(ans, sum+4);
        }
        else ans=max(ans,sum);
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
