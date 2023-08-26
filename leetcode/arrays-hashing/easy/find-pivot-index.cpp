// https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        int ans=-1;
        for(int i=0;i<n;++i) sum+=nums[i];

        for(int i=0;i<n;++i){
            int pivot=i;
            int lsum=0;
            for(int j=0;j<i;++j){
                lsum+=nums[j];
            }
            int rsum=sum-lsum-nums[pivot];
            if(lsum==rsum){ 
                ans=pivot;
                break;
            }
        }
        return ans;
    }
};
