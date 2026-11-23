class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m1; // character -> word
        unordered_map<string, char> m2; // word -> character
        int itr = 0;
        int word_cnt = 0;
        
        for (int i = 0; i < s.size(); i++) {
            // Skip leading spaces
            if (s[i] == ' ') continue;
            
            std::string str = "";
            // Extract the current word
            while (i < s.size() && s[i] != ' ') {
                str += s[i];
                i++;
            }
            // Adjust pointer because the loop step will increment `i`
            i--; 
            
            word_cnt++;
            
            // If words exceed pattern length, return false
            if (itr >= pattern.size()) {
                return false;
            }
            
            char c = pattern[itr];
            
            // Check if character already maps to a different word
            if (m1.find(c) != m1.end() && m1[c] != str) {
                return false;
            }
            // Check if word already maps to a different character
            if (m2.find(str) != m2.end() && m2[str] != c) {
                return false;
            }
            
            // Establish bidirectional mapping
            m1[c] = str;
            m2[str] = c;
            itr++;
        }
        
        // Ensure total words equal pattern length
        if (word_cnt != pattern.size()) {
            return false;
        }
        
        return true;
    }
};