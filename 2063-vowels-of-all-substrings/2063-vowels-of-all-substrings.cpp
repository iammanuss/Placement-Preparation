class Solution {
public:
    long long countVowels(string word) {
        long long ans=0;
        for(long long i=0; i<word.size(); i++)
        {
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                ans+=(i+1)*(word.size()-i);
            }
        }
        return ans;   
    }
};