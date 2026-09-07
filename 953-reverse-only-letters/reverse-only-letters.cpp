class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(isalpha(s[l]) && isalpha(s[r]))
            {
                swap(s[l],s[r]);
            } 
            if (!isalpha(s[r]))
            {
                 r--;
               
            }
            else if (!isalpha(s[l]))
            {
                l++;
                
            }
            else
            {
            l++;
            r--;
            }
        }
        return s;
    }
};