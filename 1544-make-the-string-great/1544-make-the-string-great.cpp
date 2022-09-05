class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=st.top();
            if(!st.empty() && (abs(ch-s[i])==32)){
                st.pop();
           
            }
            else st.push(s[i]);
        }
        string str="";
        if(st.empty()) return str;
        while(!st.empty())
        {
           char c=st.top();
            str+=c;
            st.pop();
        }
       reverse(str.begin(),str.end());
        return str;
    }
};