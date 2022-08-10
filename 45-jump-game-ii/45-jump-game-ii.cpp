class Solution {
public:
    int jump(vector<int>& nums) {
        int reachable=0;
        int e=0;
        int jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            reachable=max(reachable,nums[i]+i);
            if(i == e){
                jump++;
                e=reachable;
            }
        }
        return jump;
    }
};