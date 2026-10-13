class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        row = [set()for _ in range(9)]
        colm=[set() for _ in range(9)]
        box=[set() for _ in range(9)]
        for i in range(9):
            for j in range(9):
                num = board[i][j]
                if num == '.':
                    continue

                boxI = (i // 3)*3 + (j//3)
                
                if (num in row[i] or num in colm[j] or num in box[boxI]):
                    return False
                
               
                row[i].add(num)
                colm[j].add(num)
                box[boxI].add(num)
        
        return True        