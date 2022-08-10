class Solution {
private:
    void solve(vector<int>nums,int i,vector<vector<int>>&ans){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
            solve(nums,i+1,ans);
            swap(nums[j],nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int i=0;
        solve(nums,i,ans);
        set<vector<int>>s;
        for(auto i:ans) s.insert(i);
        ans.assign(s.begin(),s.end());
        return ans;
    }
};