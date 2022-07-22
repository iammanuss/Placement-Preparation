class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(j>k){
                mp[nums[i]]--;
                i++;
            }
            if(mp[nums[j]]>0)   return true;
            mp[nums[j]]++;
            j++;
        }
        return false;
    }
};