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
            //if same sum apears before
            if (mpp.find(sum)!=mpp.end())
            {
                /*find max length eg- pos-7, And sun is 4 its value in map is 3 then 7-3=4 is max lenghth*/ 
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