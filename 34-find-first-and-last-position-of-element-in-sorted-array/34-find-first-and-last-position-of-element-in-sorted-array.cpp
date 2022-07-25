class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        vector<int>res;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]<target) i=mid+1;
            else if(nums[mid]>target) j=mid-1;
            else{
                int temp=mid;
                while(mid>0 && nums[mid]==nums[mid-1]) mid--;
                int first=mid;
                while(temp<nums.size()-1 && nums[temp]==nums[temp+1]) temp++;
                int second=temp;
                res.push_back(first);
                res.push_back(second);
                return res;
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};