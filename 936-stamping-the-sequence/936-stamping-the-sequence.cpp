class Solution {
private:
    bool isWild(string &s){
        int i=0; 
        int j=s.length();
        while(i<j){
            if(s[i]!='?'){
                return false;
            }
            i++;
        }
        return true;
    }
    
    bool isMatch(string a, string b){
        if(a.length()!=b.length()){
            return false;
        }
        int n=a.length();
        int i=0;
        while(i<n){
            if(a[i]!=b[i] && a[i]!='?' && b[i]!='?'){
                return false;
            }
            i++;
        }
        return true;
    }
public:
    vector<int> movesToStamp(string stamp, string target) {
    int m=stamp.size();
    int n=target.size();      
    vector<int>ans;
    string curr;
    bool flag=true;
    while(flag){
        flag=false;
        for(int i=0;i<n-m+1;i++){
            curr=target.substr(i,m);
            if(isWild(curr)){
                continue;
            }
            if(isMatch(curr,stamp)){
                ans.push_back(i);
                flag=true;
                int j=0;
                while(j<m){
                    target[i+j]='?';
                    j++;
                }
            }
        }
    }
    
    if(!isWild(target)){
        ans.clear();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};