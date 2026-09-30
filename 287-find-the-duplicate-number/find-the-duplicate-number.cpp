class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int v : nums) {
            freq[v]++;
        }
        for (auto it : freq) {
            if (it.second >= 2)
                return it.first;
        }
        return -1;
    }
    };