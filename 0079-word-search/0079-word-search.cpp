class Solution {
public:
    bool helper(vector<vector<char>>& board,int i,int j,int m,int n,int idx,vector<vector<int>>& vis,string word){
        if(idx==word.size()){
            return true;
        }
        if(i<0 || i>=m || j<0 || j>=n ||vis[i][j]==1 ||board[i][j]!=word[idx]){
            return false;
        }
        vis[i][j]=1;
        bool op1=helper(board,i+1,j,m,n,idx+1,vis,word);
        bool op2=helper(board,i-1,j,m,n,idx+1,vis,word);
        bool op3=helper(board,i,j+1,m,n,idx+1,vis,word);
        bool op4=helper(board,i,j-1,m,n,idx+1,vis,word);
        vis[i][j]=0;
        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
         for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (helper(board, i, j, m, n, 0, vis, word)) {
                    return true;
                }
            }
        }
        return false; 
    }
};