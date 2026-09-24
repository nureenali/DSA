class Solution {
public:
    int compareVersion(string version1, string version2) {

        int i = 0;
        int j = 0;

        while (i < version1.size() || j < version2.size()) {

            int dot1 = version1.find('.', i);
            int dot2 = version2.find('.', j);

            if (dot1 == string::npos)
                dot1 = version1.size();

            if (dot2 == string::npos)
                dot2 = version2.size();

            string part1 = "0";
            string part2 = "0";

            if (i < version1.size())
                part1 = version1.substr(i, dot1 - i);

            if (j < version2.size())
                part2 = version2.substr(j, dot2 - j);

            long long num1 = stoll(part1);
            long long num2 = stoll(part2);

            if (num1 > num2)
                return 1;

            if (num1 < num2)
                return -1;

            if (dot1 < version1.size())
                i = dot1 + 1;
            else
                i = version1.size();

            if (dot2 < version2.size())
                j = dot2 + 1;
            else
                j = version2.size();
        }

        return 0;
    }
};