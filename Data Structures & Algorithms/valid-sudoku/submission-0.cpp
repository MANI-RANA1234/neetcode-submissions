class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Declare tracking data structures
unordered_map<int, unordered_set<char>> rows, cols;
map<pair<int, int>, unordered_set<char>> squares;

// Traverse every cell in the 9x9 board
for (int r = 0; r < 9; r++) {
    for (int c = 0; c < 9; c++) {
        
        // Skip empty cells
        if (board[r][c] == '.') continue;

        // Calculate 3x3 box key, e.g., cell (4, 8) -> key {1, 2}
        pair<int, int> squareKey = {r / 3, c / 3};

        // Check if current number was already recorded in row, col, or square
        if (rows[r].count(board[r][c]) || 
            cols[c].count(board[r][c]) || 
            squares[squareKey].count(board[r][c])) {
            return false; // Duplicate found!
        }

        // Record current character in all three tracking sets
        rows[r].insert(board[r][c]);
        cols[c].insert(board[r][c]);
        squares[squareKey].insert(board[r][c]);
    }
}
return true; // No duplicates detected anywhere
    }
};
