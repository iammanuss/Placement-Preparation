class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<long long,long long>mp;
        for(int i=0;i<nums.size();i++)  nums[i]=nums[i]-i;
        for(auto i:nums)    mp[i]++;
        long long n=0;
        long long m=nums.size()*(nums.size()-1)/2;
        for(auto i:mp){
            if(i.second > 1)    n+=i.second*(i.second-1)/2;
        }
        return m-n;
    }
};