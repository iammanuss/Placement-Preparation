class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        for(auto i:amount){
            if(i!=0)    pq.push(i);
        }
        int c1=0;
        int c2=0;
        int ans=0;
        while(pq.size()>=2){
            c1=pq.top();
            pq.pop();
            c2=pq.top();
            pq.pop();
            ans++;
            if(c1-1!=0) pq.push(c1-1);
            if(c2-1!=0) pq.push(c2-1);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};