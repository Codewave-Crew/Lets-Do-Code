class Solution {
public:
    void solve(int col , vector<string>&board , vector<vector<string>>&ans,vector<int>&leftrow,vector<int>&upperdiagonal,vector<int>&lowerdiagonal, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[n-1 + col-row]==0 ){
                board[row][col]='Q';
                leftrow[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[n-1 + col-row]=1;
                solve(col+1,board,ans,leftrow,upperdiagonal,lowerdiagonal,n);
                board[row][col]='.';
                leftrow[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1 + col-row]=0;

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> leftrow(n,0),upperdiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
        solve(0,board,ans,leftrow,upperdiagonal,lowerdiagonal,n);
        return ans;
    }
};
