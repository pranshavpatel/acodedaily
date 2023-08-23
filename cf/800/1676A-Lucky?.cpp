// https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    string s;
    cin>>s;
    if((s[0]-'0'+s[1]-'0'+s[2]-'0')==(s[3]-'0'+s[4]-'0'+s[5]-'0')) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
