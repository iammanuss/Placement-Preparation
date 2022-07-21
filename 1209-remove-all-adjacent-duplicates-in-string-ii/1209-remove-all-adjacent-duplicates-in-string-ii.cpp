class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=s.size()-1;i>=0;i--) {
            if (st.empty() || st.top().first!=s[i]) {
                st.push({s[i],1});
            }
            else {
                st.top().second++;
                if (st.top().second == k) { 
                    st.pop();
                }
            }
        }
        string res="";
        while(!st.empty()) {
            while(st.top().second--){
                res+=st.top().first;
            }
            st.pop();
        }
        return res;
    }
};