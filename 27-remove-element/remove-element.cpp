class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int left = 0, right = nums.size() - 1;
        int k = 0;

        while (left <= right) {

            if (nums[left] == val) {

                swap(nums[left], nums[right]);
                k++;
                right--;

            } else
                left++;
        }

        return  nums.size()-k;
    }
};