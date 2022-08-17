class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n=nums.size(), count=1, fast = 1, slow = 1;
    
    if(n<2)
        return n;
    
    while(fast<n)
    {
        if(nums[fast]!=nums[slow-1])
        {
            nums[slow] = nums[fast];
            count++;
            fast++;
            slow++;
        }
        
        else
            fast++;
    }
    
    return count;
    
}
};