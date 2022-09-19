class Solution {
public:
    #define ll long long
    int nextGreaterElement(int n) {
        string s=to_string(n);
        if(next_permutation(s.begin(),s.end())){
            ll ans=0;
            for(ll i=0;i<s.size();i++){
                ans=ans*10+(s[i]-'0');
            }
            if(ans<INT_MIN || ans>INT_MAX) return -1;
            else return ans;
        }
        return -1;
    }
};