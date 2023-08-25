// https://codeforces.com/problemset/problem/1779/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    // LR -> RL
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int cond=0;
    bool rl=false;
    bool lr=false;
    int ind=0;
    for(int i=0;i<n;++i){
        if(s[i]=='R' && s[i+1]=='L'){
            rl=true;
            break;
        }
    }
    if(!rl){
        for(int i=0;i<n;++i){
            if(s[i]=='L' && s[i+1]=='R'){
                lr=true;
                ind=i+1;
                break;
            }
        }
    }

    if(rl) cout<<0<<endl;
    else if(lr) cout<<ind<<endl;
    else cout<<-1<<endl;
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
