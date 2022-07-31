class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        vector<int>v;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(s[i-1] == s[i]) cnt++;
            else {
                v.push_back(cnt);
                cnt=1;
            }
        }
        v.push_back(cnt);
        int ans=0;
        for(int i=1;i<v.size();i++){
            ans+=min(v[i-1],v[i]);
        }
        return ans;
    }
};