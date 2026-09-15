class Solution {
public:
      bool isvowel(char ch)
    {
        if (ch=='A' || ch=='a'|| ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
        {
            return true;
        }
        else 
        return false;
    }


    string reverseVowels(string s) {
        int l=0, r=s.size()-1;
        while(l<r)
        {
            if (isvowel(s[l]) && isvowel(s[r]))
            {
                swap(s[l],s[r]);
            }
             if (!isvowel(s[l]))
            {
                l++;
            }
            else if(!isvowel(s[r]))
            {
                r--;
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