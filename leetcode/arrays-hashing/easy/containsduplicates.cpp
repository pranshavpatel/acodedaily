// https://leetcode.com/problems/contains-duplicate/description/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int sz=0;
        for(int i=0;i<nums.size();++i){
            s.insert(nums[i]);
            sz++;
            if(sz!=s.size()) return true;
        }
        return false;
    }
};
