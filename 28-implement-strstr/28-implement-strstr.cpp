class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        if(needle.size() == 0)  return 0;
        for(int i=0;i<haystack.size();i++)
        {
            string s = haystack.substr(i,needle.size());
            if(s == needle)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};