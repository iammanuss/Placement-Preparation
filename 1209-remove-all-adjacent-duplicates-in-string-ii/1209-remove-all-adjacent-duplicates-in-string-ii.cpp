class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>st;
        for(int i=0;i<n;i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i],1});
            }
            else {
                auto it=st.top();
                st.pop();
                st.push({s[i],it.second+1});
            }
            if(st.top().second == k)    st.pop();
        }
        string res="";
        while(!st.empty()){
            auto it=st.top();
            st.pop();
            while(it.second--){
                res+=it.first;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};