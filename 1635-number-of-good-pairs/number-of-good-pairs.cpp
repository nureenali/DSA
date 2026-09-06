class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int c = 0;

        for (int right = 1; right < nums.size(); right++) {
            if (nums[right] != nums[left]) {
                int n = right - left;
                c += n * (n - 1) / 2;
                left = right;
            }
        }

        int n = nums.size() - left;
        c += n * (n - 1) / 2;

        return c;
    }
};