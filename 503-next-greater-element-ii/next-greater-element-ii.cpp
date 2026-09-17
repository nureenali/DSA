class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> s;

        for (int i = 2 * n - 1; i >= 0; i--) {
            // Remove all elements smaller than or equal to current element
            while (s.size() > 0 && s.top() <= nums[i % n]) {
                s.pop();
            }
            if (i < n) {        // skips duplicate passes
                if (s.empty()) {
                    ans[i] = -1;
                } else {
                    ans[i] = s.top();
                }
            }
            s.push(nums[i % n]);
        }
        return ans;
    }
};