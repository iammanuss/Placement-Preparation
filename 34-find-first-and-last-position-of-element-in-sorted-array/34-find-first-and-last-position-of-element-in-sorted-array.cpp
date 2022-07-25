class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0)    return {-1,-1};
        int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int second=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(first>=nums.size() || nums[first]!=target) return {-1,-1};
        else return {first,second};
    }
};