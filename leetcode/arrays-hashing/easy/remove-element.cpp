// https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==val){
                nums[i]=-1;
                ans++;
            } 
        }
        sort(nums.rbegin(),nums.rend());
        return (nums.size()-ans);
    }
};
