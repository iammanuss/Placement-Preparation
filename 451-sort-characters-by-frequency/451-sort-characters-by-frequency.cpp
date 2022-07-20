class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char i:s) mp[i]++;
        string ans="";
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            int top=pq.top().first;
            while(top>0){
                ans+=pq.top().second;;
                top--;
            }
            pq.pop();
        }
        return ans;
    }
};