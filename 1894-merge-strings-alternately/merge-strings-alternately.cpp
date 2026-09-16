class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int first = 0;
        int sec=0;
        string ans;
        int l1 = word1.size();
        int l2 = word2.size();
        
        while (first<l1 || sec< l2)
        {
            if(first<l1)
            {
                ans += word1[first];
                first++;
            }
            if (sec < l2)
            {
                ans += word2[sec];
                sec++;
            }
        }
        return ans;
    }
};