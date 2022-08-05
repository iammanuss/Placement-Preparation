class Solution {
    void solve(int i,vector<int>can,vector<vector<int>>&ans,vector<int>temp,int target,int n){
        if(i == n){
            if(target == 0){
            ans.push_back(temp);
            }
            return ;
        }
        
        if(can[i]<=target){
            temp.push_back(can[i]);
            solve(i,can,ans,temp,target-can[i],n);
            temp.pop_back();
        }
        solve(i+1,can,ans,temp,target,n);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        int n=can.size();
        vector<vector<int>>ans;
        vector<int>temp;
        int i=0;
        solve(i,can,ans,temp,target,n);
        return ans;
    }
};