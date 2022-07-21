class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ans=0;
        while(i<chars.size()){
            int j=i+1;
            while(j<chars.size() && chars[j]==chars[i]){
                j++;
            }
            chars[ans]=chars[i];
            ans++;
            int cnt=j-i;
            if(cnt>1){
                string st=to_string(cnt);
                for(char ch:st){
                    chars[ans]=ch;
                    ans++;
                }
            }
            i=j;
        }
        return ans;
    }
};