class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int sum=0;
        for(auto i:nums) sum+=i;
        int suf=0,pre=0;
        for(int i=0;i<nums.size();i++){
            suf=sum-pre;
            pre+=nums[i];
            if(suf==pre) return i;
        }
        return -1;
    }
};