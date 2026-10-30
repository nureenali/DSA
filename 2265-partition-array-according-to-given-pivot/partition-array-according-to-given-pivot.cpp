class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size(), pivot);
        int l = 0;
        int r = nums.size() - 1;
        int i = 0;
        while (l < nums.size() && i < nums.size()) {
            if (nums[i] < pivot) {
              res[l]=nums[i];
                l++;
            }
            i++;
        }
        i=0;
        while (l < nums.size() && i < nums.size()) {
            if (nums[i] == pivot) {
                  res[l]=nums[i];
                l++;
            }
            i++;
        }
       i=0;
        while (l < nums.size() && i < nums.size()) {
            if (nums[i] > pivot) {
                  res[l]=nums[i];
                l++;
            }
            i++;
        }
        return res;
    }
};