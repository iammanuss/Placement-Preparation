class Solution {
public:
    int romanToInt(string s) {
        int n=s.size()-1;
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=mp[s[n]];
        for(int i=n;i>0;i--){
            if(mp[s[i]]<=mp[s[i-1]]) ans+=mp[s[i-1]];
            else    ans=ans-mp[s[i-1]];
        }
        return ans;
    }
};