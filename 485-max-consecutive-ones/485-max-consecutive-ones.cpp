class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int cnt=0,maxi=INT_MIN;
        for(auto i:nums){
            if(i==1){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
        }
        return max(maxi,cnt);;
    }
};