class Solution {
public:
    bool iseven(int n) {
        if (n % 2 == 0)
            return true;
        else
            return false;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, r = 0;
        while (r < nums.size()) {
            if (iseven(nums[r])) {
                swap(nums[r], nums[l]);
                l++;
            }
            r++;
        }
        return nums;
    }
};