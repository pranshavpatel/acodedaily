// https://codeforces.com/problemset/problem/1702/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    long long m;
    cin>>m;
    long long temp=m;
    long long dgts=0;
    while(temp>0){
        temp/=10;
        dgts++;
    }
    long long k = pow(10,dgts-1);
    cout<<m-k<<endl;
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
