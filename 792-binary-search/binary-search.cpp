class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        return binary(nums, start, end, target);
    }
    int binary(vector<int>& nums, int start, int end, int target) {

        if (start > end) {
            return -1;
        }
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (target > nums[mid]) {
            start = mid + 1;
            return binary(nums, start, end, target);
        } else  {
            end = mid - 1;
            return binary(nums, start, end, target);
        }
    }
};
