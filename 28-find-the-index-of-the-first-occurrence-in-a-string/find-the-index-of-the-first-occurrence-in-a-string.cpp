class Solution {
public:
    int strStr(string haystack, string needle) {
        int first = 0;
        int result = -1;
        int length = needle.size();
        while(first < haystack.size())
        {
            string find=haystack.substr(first,length);
            if(find==needle)
            {
                result=first;
                break;
            }
            first++;
        }
        return result;
    }
};