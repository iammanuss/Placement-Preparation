class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>mp;
        for(auto i:s) mp[i]++;
        
        priority_queue<pair<int,char>>pq;
        
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(pq.size() > 1){
            int x=pq.top().first;
            char y=pq.top().second;
            pq.pop();
            ans+=y;
            
            int z=pq.top().first;
            char q=pq.top().second;
            pq.pop();
            ans+=q;
            
            x--;
            z--;
            if(z>0) pq.push({z,q});
            if(x>0) pq.push({x,y});
        }
        if(pq.size() == 1){
            if(pq.top().first == 1){
                ans+=pq.top().second;
            }
            else{
                return "";
            }
        }
        return ans;
    }
};