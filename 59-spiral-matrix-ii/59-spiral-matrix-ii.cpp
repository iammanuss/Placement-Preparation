class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));

        int row_start=0;
        int row_end=n-1;
        int col_start=0;
        int col_end=n-1;
        int total=n*n;
        int cnt=0;
        while(cnt<total){
            for(int i=col_start;i<=col_end && cnt<total;i++){
                cnt++;
                matrix[row_start][i]=cnt;
            }
            row_start++;
            for(int i=row_start;i<=row_end && cnt<total;i++){
                cnt++;
                matrix[i][col_end]=cnt;
            }
            col_end--;
            for(int i=col_end;i>=col_start && cnt<total;i--){
                cnt++;
                matrix[row_end][i]=cnt;
            }
            row_end--;
            for(int i=row_end;i>=row_start && cnt<total;i--){
                cnt++;
                matrix[i][col_start]=cnt;
                
            }
            col_start++;
        }

        return matrix;
    }
};