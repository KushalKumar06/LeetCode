class Solution {
public:

    bool helper(vector<vector<char>>& board, string word, int i , int j , int index){
        int m = board.size();
        int n = board[0].size();

        if(index == word.size())
        return true;

        if(i<0 || i>=m || j<0 || j>=n)
        return false;

        if(board[i][j] != word[index])
        return false;

        char temp = board[i][j];
        board[i][j] = '#';

        bool found = helper(board, word, i-1, j, index+1) || 
                     helper(board, word ,i, j+1, index+1) || 
                     helper(board, word ,i+1, j, index+1) || 
                     helper(board, word ,i, j-1, index+1);

        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i = 0 ;i<m ; i++){
            for(int j = 0; j<n ;j++){
                if(board[i][j] == word[0]){
                    if(helper(board, word , i, j , 0))
                    return true;
                }
            }
        }

        return false;
    }
};