class Solution {
public:
    void escaped(vector<vector<char>>& board, int i, int j, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O') return;
        board[i][j] = 'E';
        escaped(board, i + 1, j, m, n);
        escaped(board, i - 1, j, m, n);
        escaped(board, i, j + 1, m, n);
        escaped(board, i, j - 1, m, n);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            if(i == 0 || i == m - 1){
                for(int j = 0; j < n; j++){
                    escaped(board, i, j, m, n);
                }
            } else {
                escaped(board, i, 0, m, n);
                escaped(board, i, n - 1, m, n);
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == 'E') board[i][j] = 'O';
            }
        }
    }
};