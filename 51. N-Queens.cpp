class Solution {
public:
    bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
        // Check the column for any queens
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 1) {
                return false;
            }
        }
        
        // Check the upper left diagonal for any queens
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 1) {
                return false;
            }
        }
        
        // Check the upper right diagonal for any queens
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 1) {
                return false;
            }
        }
        
        return true;
    }

    bool nQueen(vector<vector<int>>& board, int row, int n, vector<vector<string>>& results) {
        if (row >= n) {
            vector<string> solution;
            for (int i = 0; i < n; i++) {
                string rowString = "";
                for (int j = 0; j < n; j++) {
                    if (board[i][j] == 1) {
                        rowString += 'Q';
                    } else {
                        rowString += '.';
                    }
                }
                solution.push_back(rowString);
            }
            results.push_back(solution);
            return false; // to find all solutions, do not stop here
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(board, row, col, n)) {
                board[row][col] = 1;
                if (nQueen(board, row + 1, n, results)) {
                    return true;
                }
                board[row][col] = 0; // backtracking
            }
        }
        
        return false;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<string>> results;
        nQueen(board, 0, n, results);
        return results;
    }
};