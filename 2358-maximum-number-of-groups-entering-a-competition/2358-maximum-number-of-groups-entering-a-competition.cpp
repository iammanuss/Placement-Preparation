class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        int idx=0;
        int prev_cnt=1;
        int cur_cnt=0;
        int ans=1;
        int prev_sum=grades[0];
        int cur_sum=0;
        for(int i=1;i<grades.size();i++){
            cur_sum+=grades[i];
            cur_cnt++;
            if(cur_sum>prev_sum && cur_cnt>prev_cnt){
                ans++;
                prev_sum=cur_sum;
                prev_cnt=cur_cnt;
                cur_cnt=0; 
                cur_sum=0;
            }
             
        }
        return ans;
    }
};