class Solution {
public:
    long long sumsquare(long long n) {
        int s = 0;
        while (n > 0) {
            int digit = n % 10;
            s += digit * digit;
            n /= 10;
        }
        return s;
    }

    bool isHappy(int n) {
        long long num = n;
        int i = 0;
        while (i < pow(2, 15) && num < pow(2, 31)) {

            if (sumsquare(num) == 1) {
                return true;

            } else {
                num = sumsquare(num);
            }

            i++;
        }
        return false;
    }
};