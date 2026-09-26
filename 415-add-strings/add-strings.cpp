class Solution {
public:
    int toNum(char n) {
        return n - '0';
    }

    string addStrings(string num1, string num2) {
        int s1 = num1.size() - 1;
        int s2 = num2.size() - 1;

        string ans = "";
        int carry = 0;

        while (s1 >= 0 || s2 >= 0) {

            int c1 = 0;
            int c2 = 0;

            if (s1 >= 0) {
                c1 = toNum(num1[s1]);
                s1--;
            }

            if (s2 >= 0) {
                c2 = toNum(num2[s2]);
                s2--;
            }

            int current = c1 + c2 + carry;

            carry = current / 10;
            current = current % 10;

            ans += to_string(current);
        }

        if (carry > 0)
            ans += to_string(carry);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};