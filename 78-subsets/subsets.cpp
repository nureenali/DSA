class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;

    void solve(vector<int>& nums, int index) {

        // Base case
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }

        // Choice 1: Exclude the current element
        solve(nums, index + 1);

        // Choice 2: Include the current element
        current.push_back(nums[index]);

        solve(nums, index + 1);

        // Backtrack: Remove the current element
        current.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return result;
    }
};