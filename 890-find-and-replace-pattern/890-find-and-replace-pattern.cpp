class Solution {
public:
    bool check(string str,string p)
    {
        unordered_map<char,char>mp;
        for(int i=0;i<str.length();i++)
        {
            auto it=mp.find(str[i]);
            if(it==mp.end())
            {
                mp[str[i]]=p[i];
            }
            else
            {
                if(mp[str[i]]!=p[i])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string>ans;
        for(auto it:words){
            if(check(it,pattern) and check(pattern,it))
            {
                ans.push_back(it);
            }
        }
        return  ans;
        
    }
};