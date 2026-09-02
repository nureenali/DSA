class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int current_product = 1, max_pro = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            current_product *= nums[i];
            max_pro = max(max_pro, current_product);
            if (current_product == 0) {
                current_product = 1;
            }
        }
        current_product = 1;
        for (int i = nums.size()-1; i >= 0; i--) {
            current_product *= nums[i];
            max_pro = max(max_pro, current_product);
            if (current_product == 0) {
                current_product = 1;
            }
        }
        return max_pro;
    }
};