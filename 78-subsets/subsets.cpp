class Solution {
public:
void solve (vector<int>& nums, int i, vector<int>&currarr, vector<vector<int>>&res)

{
        if (i==nums.size())
        {
            res.push_back(currarr);
            return ;
        }

        //include 
        currarr.push_back(nums[i]);
        solve (nums,i+1,currarr,res);
        
        //exclude
        currarr.pop_back();

         solve (nums,i+1,currarr,res);
        


}
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result ;
    vector <int> current_arry;

    solve (nums, 0, current_arry, result);
    return result;      
    }
};