// https://codeforces.com/problemset/problem/1790/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();++i){
        if(s[i]!=pi[i]) break;
        ans++;
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
