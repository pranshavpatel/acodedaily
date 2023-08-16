// https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.size();++i){
            for(int j=0;j<t.size();++j){
                if(j>cnt || i==0){
                    if(s[i]==t[j]){
                        ans++;
                        cnt=j;
                        break;
                    }
                }
            }
        }
        if(ans==s.size()) return true;
        return false;
    }
};
