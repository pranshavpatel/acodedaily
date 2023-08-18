// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=-1;
        ans[1]=-1;
        for(int i=0;i<nums.size()-1;++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]+nums[j]==target){
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
        return ans;
    }
};
