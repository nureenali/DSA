class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=nums.size()-1;
        int two=nums.size()-1;
        while(one>=zero)
        {
            if(nums[one]==0)
            {
                swap(nums[zero],nums[one]);
                zero++;
               
            }
            else if(nums[one]==2)
            {
                swap(nums[two],nums[one]);
                two--;
                one--;
            }
            else if (nums[one]==1)
            {
                one--;
            }
            
        }
    }
};
// if value is 0 bring to front if value is 2 bring to last if value is 1 no swap