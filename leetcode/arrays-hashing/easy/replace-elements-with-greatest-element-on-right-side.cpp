// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>::iterator ptr = arr.begin();
        for(int i=0;i<arr.size()-1;++i){
            arr[i] = *max_element(++ptr, arr.end());
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};
