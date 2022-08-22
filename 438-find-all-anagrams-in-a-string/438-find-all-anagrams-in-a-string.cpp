class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>sn(26,0),pm(26,0),ans;
        for(int i=0;i<m;i++) pm[p[i]-'a']++;
        int i=0;
        int j=0;
        while(j<n){
            sn[s[j]-'a']++;
            if(j-i+1<m) j++;
            else if(j-i+1==m){
                    if(sn==pm) ans.push_back(i);
                sn[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};