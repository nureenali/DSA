class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int sum=0;
        int maxx=0;
        mpp[0]=-1;
        for (int x=0;x<nums.size();x++)
        {
            if (nums[x]==1)
            {
                sum++;
            }
           else
            {
                sum--;
            }

            if (mpp.find(sum)!=mpp.end())
            {
                maxx=max(maxx, x-mpp[sum]);
            }
            else
            {
                mpp[sum]=x;
            }
        }

        return maxx;
    }
};