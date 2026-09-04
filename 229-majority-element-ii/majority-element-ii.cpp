class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

       unordered_map<int,int>freq;
       int n= floor(nums.size()/3);

       for (int i: nums )
       {
        freq[i]++;
       }
       vector<int>ans;
       for (auto it:freq)
       {
        if (it.second>n)
        {
            ans.push_back(it.first);
        }
       }
       return ans;
    }
};