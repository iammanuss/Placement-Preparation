class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i : tickets) q.push(i);
        int res = 0;
        int temp = k; 
        while(1){
            res++;
            if(q.front()-- > 1) q.push(q.front());
            else if(temp == 0) break;
            q.pop();
            if(--temp < 0)  temp = q.size() - 1;
        }
        return res;
    }
};