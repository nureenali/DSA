class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=INT_MIN;
        int left=0,right=0;
        for(int v:nums)
        {
            if(v==1)
            {
            count++;
            }
           else
            {
                count=0;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};