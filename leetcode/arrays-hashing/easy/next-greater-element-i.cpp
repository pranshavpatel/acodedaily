// https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans;
        for(int i=0;i<n1;++i){
            int ind=0;
            for(int j=0;j<n2;++j){
                if(nums1[i]==nums2[j]){
                    ind = j;
                    break;
                }
            }
            int num = nums2[ind];
            int a=-1;
            for(int k=ind+1;k<n2;++k){
                if(nums2[k]>num){
                    a=nums2[k];
                    break;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};
