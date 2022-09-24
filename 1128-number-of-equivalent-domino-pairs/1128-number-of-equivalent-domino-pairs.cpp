class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        for(int i=0;i<d.size();i++){
            if(d[i][0]>d[i][1]) swap(d[i][0],d[i][1]);
        }
        sort(d.begin(),d.end());
        int ans=0;
        for(int i=0;i<d.size();){
            int j=i+1;
            while(j<d.size()&&d[j]==d[i]) j++;
            if(j==i+1){
                i=j;
                continue;
            }
            ans+=(j-i)*(j-i-1)/2;
            i=j;
        }
        return ans;
    }
};