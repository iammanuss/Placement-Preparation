class Solution {
public:
    int minSetSize(vector<int>& a) {
        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        int temp=a.size()/2;
        int ans=0;
        int cnt=0;
        while(!pq.empty()){
            ans++;
            cnt+=pq.top().first;
            pq.pop();
            if(cnt>=temp) break;
        }
        return ans;
    }
};