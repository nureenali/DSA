class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int start = 0;
        int end = nums.size() - 1;

        int pos1 = binary(nums, start, end, target, true);
        int pos2 = binary(nums, start, end, target, false);

        ans.push_back(pos1);
        ans.push_back(pos2);

        return ans;
    }

    int binary(vector<int>& nums, int start, int end, int target, bool findFirst) {
        int pos = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                pos = mid;

                if (findFirst)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return pos;
    }
};