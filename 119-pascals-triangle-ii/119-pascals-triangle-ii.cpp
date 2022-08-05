class Solution {
    vector<int>v;
    void ans(int r_idx){
        if(r_idx == 0){
            v.clear();
            v.push_back(1);
            return ;
        }
        if(r_idx == 1){
            v.clear();
            v.push_back(1);
            v.push_back(1);
            return ;
        }
        ans(r_idx-1);
        vector<int>temp(r_idx+1,1);
        for(int i=1;i<r_idx;i++){
            temp[i]=v[i]+v[i-1];
        }
        v.clear();
        v=temp;
        temp.clear();
    }
public:
    vector<int> getRow(int r_idx) {
        ans(r_idx);
        return v;
    }
};