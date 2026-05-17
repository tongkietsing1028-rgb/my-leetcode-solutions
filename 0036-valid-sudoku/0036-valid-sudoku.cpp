class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>k;
        for(int i =0;i<9;i++)
        {
            for(int j= 0;j<9;j++)
            {
                char v = board[i][j];
                if(v == '.')
                {
                    continue;
                }
                else
                {
                    string row_tag="row-"+to_string(i)+"val-"+v;
                    string col_tag="col-"+to_string(j)+"val-"+v;
                    string box_tag="box-"+to_string(i/3)+"-"+to_string(j/3)+"val-"+v;
                    if(k.count(row_tag)||k.count(col_tag)||k.count(box_tag))
                    {
                        return false;
                    }
                    k.insert(row_tag);
                    k.insert(col_tag);
                    k.insert(box_tag);
                }
            }
        }
        return true;
    }
};