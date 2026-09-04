class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> freq;

        for (int num : nums) {
            if (num % 2 == 0) {
                freq[num]++;
            }
        }

        if (freq.empty()) {
            return -1;
        }

        int ans = -1;
        int maxi = 0;

        for (auto it : freq) {
            int num = it.first;
            int count = it.second;

            if (count > maxi) {
                maxi = count;
                ans = num;
            }
        }

        return ans;
    }
};