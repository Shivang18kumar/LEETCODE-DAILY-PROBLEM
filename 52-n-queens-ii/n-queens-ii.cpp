class Solution {
public:
    
    int totalNQueens(int n) {
        vector<vector<bool>> board(n, vector<bool>(n, false));
        return queens(board, 0);
    }
    
    int queens(vector<vector<bool>>& board, int row) {
        
        if (row == board.size()) {
            return 1;
        }
        
        int count = 0;
        
        for (int col = 0; col < board.size(); col++) {
            
            if (isSafe(board, row, col)) {
                board[row][col] = true;
                count += queens(board, row + 1);
                board[row][col] = false; 
            }
        }
        
        return count;
    }
    
    bool isSafe(vector<vector<bool>>& board, int row, int col) {
        
       
        for (int i = 0; i < row; i++) {
            if (board[i][col]) {
                return false;
            }
        }
        
        
        int maxLeft = min(row, col);
        for (int i = 1; i <= maxLeft; i++) {
            if (board[row - i][col - i]) {
                return false;
            }
        }
        
       
        int maxRight = min(row, (int)board.size() - col - 1);
        for (int i = 1; i <= maxRight; i++) {
            if (board[row - i][col + i]) {
                return false;
            }
        }
        
        return true;
    }
};
