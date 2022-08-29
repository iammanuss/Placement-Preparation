class Solution {
public:
    void drawTree(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0')
        {return;}
        
        grid[i][j]='0';
        drawTree(grid,i-1,j);
        drawTree(grid,i,j-1);
        drawTree(grid,i+1,j);
        drawTree(grid,i,j+1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    drawTree(grid,i,j);
                    count++;
                }
            }
        }
        
        return count;
    }
};