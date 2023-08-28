// https://leetcode.com/problems/range-sum-query-immutable/description/

class NumArray {
public:
    vector<int> ans = {0};
    NumArray(vector<int> &nums) {
        int summ = 0;
        for (int n : nums) {
            summ += n;
            ans.push_back(summ);
        }
    }

    int sumRange(int i, int j) {
        return ans[j+1] - ans[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
