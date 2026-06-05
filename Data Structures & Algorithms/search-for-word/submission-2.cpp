class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k){
        int n = board.size();
        int m = board[0].size();
        if(k==word.size()) return true;

        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[k]) return false;
        char tmp = board[i][j];
        board[i][j] = '#';
        
        bool f = dfs(board, word, i+1, j, k+1) ||
        dfs(board, word, i-1, j, k+1) ||
        dfs(board, word, i, j+1, k+1) ||
        dfs(board, word, i, j-1, k+1);

        board[i][j] = tmp;
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
