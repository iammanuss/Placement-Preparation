class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st,tt;
        for(char i:s){
            if(i=='#' && !st.empty()) st.pop();
            else if(i == '#') continue;
            else st.push(i);
        }
        for(char i:t){
            if(i=='#' && !tt.empty()) tt.pop();
            else if(i == '#') continue;
            else tt.push(i);
        }
        cout<<1;
        string ss="",tr="";
        while(!st.empty()){
           ss+=st.top();
            st.pop();
        }
        while(!tt.empty()){
           tr+=tt.top();
            tt.pop();
        }
        if(ss==tr) return true;
        return false;
    }
};