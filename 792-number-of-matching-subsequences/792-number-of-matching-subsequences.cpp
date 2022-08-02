class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>>freq(26);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a'].push_back(i);
        }
        int cnt=words.size();
        for(auto &word:words){
            int prev_char=-1;
            for(auto ch:word){
                auto &ch_idx=freq[ch-'a'];
                auto idx=upper_bound(ch_idx.begin(),ch_idx.end(),prev_char);
                if(idx == ch_idx.end()){
                    cnt--;
                    break;
                }
                else    prev_char=*idx;
            }
        }
        return cnt;
    }
};