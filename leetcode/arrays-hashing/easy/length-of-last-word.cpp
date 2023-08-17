// https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        bool flag=false;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]==' ' && !flag) continue;
            flag=true;
            if(s[i]==' ') break;
            cnt++;
        }
        return cnt;
    }
};
