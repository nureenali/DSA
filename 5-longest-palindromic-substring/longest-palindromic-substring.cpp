class Solution {
public:

    bool palin(string& s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }

    string longestPalindrome(string s)
    {
        int n = s.size();

        // Start with the longest possible length
        for (int length = n; length >= 1; length--)
        {
            // Try every substring having this length
            for (int l = 0; l + length <= n; l++)
            {
                // Calculate the right boundary
                int r = l + length - 1;

                // Check this substring
                if (palin(s, l, r))
                {
                    // Since we started with the largest length
                    // and are going downward, this MUST be
                    // the longest palindrome.
                    return s.substr(l, length);
                }
            }
        }

        return "";
    }
};