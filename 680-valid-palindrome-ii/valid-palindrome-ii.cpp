class Solution {
public:

    int index_left = 0;
    int index_right = 0;

    bool pain(string str) {
        int l = 0;
        int r = str.size() - 1;

        while (l < r) {

            if (str[l] != str[r]) {
                index_left = l;
                index_right = r;
                return false;
            }

            l++;
            r--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        if (pain(s)) {
            return true;
        }

        // Save original mismatch
        int left = index_left;
        int right = index_right;

        cout << left << " " << right << endl;

        // Remove LEFT
        string temp = s.substr(0, left) + s.substr(left + 1);

        if (pain(temp)) {
            return true;
        }

        // Remove RIGHT
        string temp1 = s.substr(0, right) + s.substr(right + 1);

        if (pain(temp1)) {
            return true;
        }

        return false;
    }
};