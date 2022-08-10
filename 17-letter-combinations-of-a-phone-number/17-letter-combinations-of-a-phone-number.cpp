class Solution {
private:
    void solve(string digits,string output,int i,string mapp[],vector<string>&ans){
        
        if(i>=digits.size()){
            ans.push_back(output);
            return;
        }
        
        int d=digits[i]-'0';
        string val=mapp[d];
        for(int j=0;j<val.size();j++){
            output.push_back(val[j]);
            solve(digits,output,i+1,mapp,ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string>ans;
        string output;
        int i=0;
        string mapp[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,i,mapp,ans);
        return ans;
    }
};