class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++)
            if(nums[i] < i - 1 || nums[i] > i + 1) return false;
        return true;
    }
};