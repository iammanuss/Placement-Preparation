class Solution {
public:
    int minRefuelStops(int target, int cur, vector<vector<int>>& arr) {
        priority_queue<int> pq;
        int count=0;
        int n=arr.size();
        
        for(int i=0;i<n && cur<target;i++)
        {
            if(cur>=arr[i][0])
                pq.push(arr[i][1]);
            else
            {
                while(!pq.empty() && cur<arr[i][0])
                {
                    cur += pq.top();
                    pq.pop();
                    count++;
                }
                if(cur<arr[i][0])
                    return -1;
                else
                    pq.push(arr[i][1]);
            }
        }
        if(cur >= target)
        return count;
        
        while(!pq.empty() && cur<target)
        {
            cur += pq.top();
            pq.pop();
            count++;
        }
        if(cur<target)
            return -1;
                
        return count;
    }
};