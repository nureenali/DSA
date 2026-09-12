class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        // Remove extra spaces
        string temp;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) {
                temp += s[i];
            }
        }

        if (!temp.empty() && temp.back() == ' ')
            temp.pop_back();

        s = temp;

        // Reverse the whole string
        reverse(s.begin(), s.end());

        // Reverse every individual word
        int start = 0;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};