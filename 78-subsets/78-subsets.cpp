class Solution {
private:
    void sub(int i,vector<vector<int>>&ans,vector<int>output,vector<int>nums){
        
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        sub(i+1,ans,output,nums);
        
        int ele=nums[i];
        output.push_back(ele);
        //ans.push_back(output);
        sub(i+1,ans,output,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        sub(i,ans,output,nums);
        return ans;
    }
};