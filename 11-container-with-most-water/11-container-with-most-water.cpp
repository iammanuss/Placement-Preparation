class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxi=INT_MIN;
        while(i<j) {
            maxi=max(maxi,min(height[j],height[i])*(j-i));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxi;
    }
};