class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int presum = 0, c = 0;

        freq[0]=1;

        for (int x : nums) 
        {
            presum = presum + x;

            int r = presum % k;

            if (r < 0) {
                r = r + k;
            }

           

            if (freq.find(r) != freq.end()) {
                c = c + freq[r];
            }
             freq[r]++;
        }
        return c;
    }
}; // add freq of repaeted remainder with count variable