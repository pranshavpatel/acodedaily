// https://codeforces.com/problemset/problem/1792/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> v;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long ones=0;
    for(int i=0;i<n;++i){
        if(v[i]==1) ones++;
        else break;
    }
    long long ans = (n-ones)+(ones/2 + ones%2);
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
