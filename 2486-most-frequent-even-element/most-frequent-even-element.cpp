class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int ans = -1;
        int maxi = 0;

        for (auto& p : freq) {
            int num = p.first;
            int count = p.second;

            if (num % 2 == 0) {
                if (count > maxi || (count == maxi && num < ans)) {
                    maxi = count;
                    ans = num;
                }
            }
        }

        return ans;
    }
};