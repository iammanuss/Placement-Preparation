class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> temp;
        for(int i=0;i<col;i++)
        {
            int x=0,y=i;
            
            while(x<row && y <col)
                temp.push_back(mat[x++][y++]);
            
            sort(temp.begin(), temp.end());
           
            x=0,y=i;
            int k=0;
            while(x<row && y <col)
            {
                mat[x++][y++] = temp[k++];
            }           
            temp.clear();
        }
        
        for(int i=1;i<row;i++)
        {
            int x=i,y=0;
            
            while(x<row && y <col)
                temp.push_back(mat[x++][y++]);
            
            sort(temp.begin(), temp.end());
            
             x=i,y=0;
            int k=0;
            while(x<row && y <col)
            {
                mat[x++][y++] = temp[k++];
            }           
            
            temp.clear();
        }
        
        return mat;
    }
};