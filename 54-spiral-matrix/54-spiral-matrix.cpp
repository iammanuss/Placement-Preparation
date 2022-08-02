class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int row_start=0;
        int row_end=m-1;
        int col_start=0;
        int col_end=n-1;
        int total=m*n;
        int cnt=0;
        while(cnt<total){
            for(int i=col_start;i<=col_end && cnt<total;i++){
                ans.push_back(matrix[row_start][i]);
                cnt++;
            }
            row_start++;
            for(int i=row_start;i<=row_end && cnt<total;i++){
                ans.push_back(matrix[i][col_end]);
                cnt++;
            }
            col_end--;
            for(int i=col_end;i>=col_start && cnt<total;i--){
                ans.push_back(matrix[row_end][i]);
                cnt++;
            }
            row_end--;
            for(int i=row_end;i>=row_start && cnt<total;i--){
                ans.push_back(matrix[i][col_start]);
                cnt++;
            }
            col_start++;
        }
        return ans;
    }
};