class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int traverse = 0, valid = 0;
        int count = 0;

        while (traverse < nums.size()) {
            if (valid < 2 || nums[valid - 2] != nums[traverse]) {
                nums[valid] = nums[traverse];
                valid++;
            }
            traverse++;
        }
        return valid;
    }
};