// https://codeforces.com/contest/1858/problem/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>b) cout<<"First"<<endl;
    else if(a<b) cout<<"Second"<<endl;
    else{
        if(c%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
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
