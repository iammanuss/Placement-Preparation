class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=height.size();
        vector<int>pre(n),suf(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            pre[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            suf[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(pre[i],suf[i])-height[i];
        }
        return ans;
    }
};