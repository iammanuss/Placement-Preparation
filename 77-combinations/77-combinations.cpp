class Solution {
private:
    void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>output,int i,int k){
        
        if(output.size() == k){
            ans.push_back(output);
            return;
        }
        
        if(i>=nums.size())
            return;
        
        for(int j=i;j<nums.size();j++){
            output.push_back(nums[j]);
            solve(nums,ans,output,j+1,k);
            output.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(nums,ans,output,i,k);
        return ans;
    }
};