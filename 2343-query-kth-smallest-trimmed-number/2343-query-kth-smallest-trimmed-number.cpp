class Solution {
class cmp{
    public:
    bool operator() (pair<string,int>&a, pair<string,int> &b)
    {
        if(a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first > b.first;
    }
};
     
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& q) {
        vector<int>ans;
        for(int i=0;i<q.size();i++){        priority_queue<pair<string,int>,vector<pair<string,int>>,cmp> pq;
            int fir=q[i][0];
            for(int j=0;j<nums.size();j++){
                int n=nums[j].size()-q[i][1];
                string s=nums[j].substr(n,q[i][1]);
                pq.push(make_pair(s,j));   
            }
            int x=1;
            while(x<fir)
            {
                pq.pop();
                x++;
            }
            ans.push_back(pq.top().second);
        }
        return ans;
    }
};