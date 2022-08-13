class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int n=words.size();
        int m=words[0].size();
        unordered_map<string,int> mp;
        for(auto i:words)
        {
            mp[i]++;
        }
        if(s.size()==0||s.size()<n*m)
        {
            return res;
        }
        for(int i=0;i<=s.size()-(m*n);i++)
        {
            unordered_map<string,int> ourfreq=mp;
            int j;
            for( j=0;j<n;j++)
            {
                
                string st=s.substr(i+m*j,m);
                
                if(ourfreq[st]==0)
                {
                    break;
                }
                else
                {
                    ourfreq[st]--;
                }
                
            }
            if(j==n)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};