class Solution {
public:
    string reverseWords(string s) {
        string st="",res="";
        istringstream stt(s);
        string word;
        while(stt>>word){
            reverse(word.begin(),word.end());
            st+=word;
            st+=" ";
        }
        for(int i=0;i<st.size()-1;i++)
            res+=st[i];
        return res;
    }
};