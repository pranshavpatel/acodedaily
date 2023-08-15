// https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> sorted;
        for(auto it: strs){
            string x = it;
            sort(x.begin(),x.end());
            sorted[x].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it: sorted) ans.push_back(it.second);
        return ans;
    }
};
