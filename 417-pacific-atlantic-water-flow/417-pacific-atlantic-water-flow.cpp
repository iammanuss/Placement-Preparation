class Solution {
public:
     void computeFlow(int row, int col, int prev, vector<vector<bool>>& ocean, vector<vector<int>>& heights){
        if(row < 0 || col < 0 || row >= heights.size() || col >= heights[0].size())
            return;
        
        int currHeight = heights[row][col];
        
        if(prev <= currHeight && ocean[row][col] != true){
            ocean[row][col] = true;
            
            computeFlow(row+1,col,currHeight,ocean,heights);        
            computeFlow(row-1,col,currHeight,ocean,heights);        
            computeFlow(row,col+1,currHeight,ocean,heights);        
            computeFlow(row,col-1,currHeight,ocean,heights);  
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int nRow = heights.size();
        int nCol = heights[0].size();
        
        vector<vector<bool>>  pacific(nRow, vector<bool>(nCol,false));
        vector<vector<bool>> atlantic(nRow, vector<bool>(nCol,false));

        for(int row = 0; row < nRow; row++){
            computeFlow(row, 0,      INT_MIN, pacific, heights);
            computeFlow(row, nCol-1, INT_MIN, atlantic, heights);
        }
 
        for(int col = 0; col <= nCol; col++){
            computeFlow(nRow-1, col, INT_MIN, atlantic, heights);
            computeFlow(0, col, INT_MIN, pacific, heights);
        }

        vector<vector<int>> res;
        
        for(int row = 0; row < nRow; row++){
            for(int col = 0; col < nCol; col++){
                if(pacific[row][col] && atlantic[row][col])
                    res.push_back({row,col});
            }
        }

        return res;
    }
};