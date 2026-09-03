class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;
        return binary(letters, start, end, target);
    }
    char binary(vector<char>& letters, int start, int end, int target) {
        if (start>end)
        {
        if (start==letters.size())
         
            return letters[0];
        
        return letters[start];
        }

        int mid = start + (end - start) / 2;

        if (target>= letters[mid]) {
            start = mid + 1;
            return binary(letters, start, end, target);
        } 
        else  {
            end = mid - 1;
            return binary(letters, start, end, target);
        }
    }
};