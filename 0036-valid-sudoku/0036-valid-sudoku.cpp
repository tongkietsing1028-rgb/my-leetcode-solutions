class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9]={0};
        int col[9]={0};
        int box[9]={0};
        for(int i =0;i<9;i++)
        {
            for(int j= 0;j<9;j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                int val = board[i][j]-'0';
                int mask = 1<<val;
                int bid = (i/3)*3+(j/3);
                if(row[i] & mask || col[j]&mask|| box[bid] & mask)
                {
                    return false;
                }
                row[i] |= mask;
                col[j] |= mask;
                box[bid] |= mask;
            }
        }
        return true;
    }
};