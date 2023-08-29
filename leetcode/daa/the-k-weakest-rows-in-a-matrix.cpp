// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        set<pair<int,int> > s;
        for(int i=0;i<n;++i){
            int cnt = count(mat[i].begin(), mat[i].end(), 1);
            s.insert({cnt,i});
        }

        vector<int> ans;
        for(auto it: s){
            if(k==0) break;
            ans.push_back(it.second);
            k--;
        }
        return ans;
    }
};
