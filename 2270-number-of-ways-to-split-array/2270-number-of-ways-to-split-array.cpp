class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int n=nums.size();
        vector<long long int>pref(n),suff(n);
        long long int p=0;
        long long int s=0;
        long long int sum=0;
        for(auto i:nums)    sum+=i;
        for(long long int i=0;i<n;i++){
            s=sum-p;
            p+=nums[i];
            pref[i]=p;
            suff[i]=s;
        }
        long long int splits=0;
        for(long long int i=0;i<n-1;i++){
            if(pref[i]>=suff[i+1])  splits++;
        }
        return splits;
    }
}; 