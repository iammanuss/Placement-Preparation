class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1)   return 1;
        int n=s.size();
        int i=0;
        int j=0;
        unordered_set<char>st;
        int maxi=0;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                if(maxi<st.size())  maxi=st.size();
                st.erase(s[i]);
                i++;
            }
            else {
                st.insert(s[j]);
                j++;
            }
        }
        if(maxi < st.size())    maxi=st.size();                     if(st.size()<n) return maxi;
        else    return st.size();
    }
};