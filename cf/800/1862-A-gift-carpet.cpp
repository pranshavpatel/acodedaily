// https://codeforces.com/contest/1862/problem/A

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279

using namespace std;

void solve(){
    int m,n;
    cin>>n>>m;
    // n -> rows, m -> columns
    vector<string> v;
    for(int i=0;i<n;++i){
        string t;
        cin>>t;
        v.push_back(t);
    }
    int cnt=0;
    char target;
    for(int i=0;i<m;++i){
        if(cnt==0) target='v';
        else if(cnt==1) target='i';
        else if(cnt==2) target='k';
        else if(cnt==3) target='a';
        else break;
        for(int j=0;j<n;++j){
            if(v[j][i]==target){
                cnt++;
                break;
            }
        }
    }
    if(cnt==4) cout<<"YES"<<endl;
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
