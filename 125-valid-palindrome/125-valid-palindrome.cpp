class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s2 += s[i]+32;
            else if(s[i]>='a' && s[i]<='z') s2 += s[i];
            else if(s[i]>='0' && s[i]<='9') s2 += s[i];
        }
        int n = s2.size();
        for(int i=0; i<n/2; i++) if(s2[i] != s2[n-1-i]) return false;
        return true;
    }
};