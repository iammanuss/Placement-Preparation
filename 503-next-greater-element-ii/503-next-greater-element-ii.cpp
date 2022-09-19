class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int flag=0;
            while(j%nums.size() != i){
                if(nums[i]<nums[j%nums.size()]){
                    ans.push_back(nums[j%nums.size()]);
                    flag=1;
                    break;
                }
                
                j++;
            }
            if(!flag) ans.push_back(-1);
        }
        return ans;
    }
};