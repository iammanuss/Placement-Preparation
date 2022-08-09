class Solution {
private:
    int rev(int n){
        int num=0;
        int r=0;
        while(n){
            r=n%10;
            num=num*10+r;
            n=n/10;
        }
        return num;
    }
public:
    int countNicePairs(vector<int>& nums) {
        map<long long,long long>mp;
        for(int i=0;i<nums.size();i++){
            mp[rev(nums[i])-nums[i]]++; 
        }
        long long ans=0;
        for(auto i:mp){
            ans=(ans+i.second*(i.second-1)/2)%1000000007;
        }
        return ans;
    }
};
