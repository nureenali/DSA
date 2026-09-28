class Solution {
public:
    int toNum(string s)
    {
        int result=0;
        for (int v:s)
        {
            int k=v-'a';
            result=result*10+k;
        }
        return result;

    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int word1=toNum(firstWord);
        int word2=toNum(secondWord);
        int wordTarget=toNum(targetWord);
        if (word1+word2==wordTarget) 
        return true;
        else
        return false;
    }
};