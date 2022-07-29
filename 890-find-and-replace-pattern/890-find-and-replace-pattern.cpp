class Solution {
private:
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
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto it:words){
            if(check(it,pattern) && check(pattern,it))
            {
                ans.push_back(it);
            }
        }
        return  ans;
        
    }
};