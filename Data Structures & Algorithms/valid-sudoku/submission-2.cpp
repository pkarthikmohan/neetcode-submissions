class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9]={0},col[9]={0},block[9]={0};
        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                if(board[r][c]=='.')
                continue;
               
                int mask= 1 << ( board[r][c]-'1'); 
                int box=((r/3)*3)+(c/3);
                if((row[r] & mask)|| (col[c] & mask) ||(block[box] & mask)) return false;
                row[r]|=mask;
                col[c]|=mask;
                block[box]|=mask;
            }
        }
        return true;
    }
};
