// https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/description/

class Solution {
public:
    int countSmaller(int m, int n, int mid){
        int ans=0;
        for(int i=1;i<=m;i++) ans += min(n, mid/i);
        return ans;
    }
    int findKthNumber(int m, int n, int k) {
        int low=0, high=m*n, mid, res;
        
        while(low<=high){
            mid = low+(high-low)/2;
            
            if(countSmaller(m, n, mid) < k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};
