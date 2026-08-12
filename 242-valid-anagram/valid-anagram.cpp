class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> freq;
        unordered_map<char, int> freq2;
        if (s.length() != t.length())
            return false;
        for (char c : s) {
            freq[c]++;
        }
        for (char c : t) {
            freq2[c]++;
        }
        int flag = 0;
        for (auto it : freq) {
            char key = it.first;

            if (freq.find(key) == freq2.end()) {
                return false;
            }

            if (freq[key] != freq2[key]) {
                return false;
            }
        }
        return true;
    }
};