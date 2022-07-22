class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> v;
        for(int i=0;i<num;i++){
            v.push_back(vector<int>(i+1));
            v[i][0]=1;
            v[i][i]=1;
            for(int j=1;j<i;j++){
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        return v;
    }
};