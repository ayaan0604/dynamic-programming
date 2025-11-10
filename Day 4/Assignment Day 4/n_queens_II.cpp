//n queens II leetcode 52 accepted

class Solution {
bool isSafe(int n, vector<string>& board, int row, int col){
    int r=row;
    int c=col;

    //check columns

    while(r>=0){
        if(board[r][col]=='Q') return false;
        r--;
    }

    // check positive diagonal

    r=row;
    c=col;

    while(r>=0 && c<n){
        if(board[r][c]=='Q') return false;
        r--;
        c++;
    }

    //check negative diagonals

    r=row;
    c=col;

    while(r>=0 && c>=0){
        if(board[r][c]=='Q') return false;
        r--;
        c--;
    }
    return true;

}

void solve(int n, vector<string>& board,int* count, int row=0){
    if(row>=n){
        (*count)++;
        return;
    }

    for(int i=0; i<n; i++){
        if(isSafe(n, board, row, i )){
            board[row][i] ='Q';

            solve(n, board, count, row+1);

            board[row][i]= '.';
        }
    }
}

public:
    int totalNQueens(int n) {
        int count = 0;

        vector<string> board;
        for(int i=0; i<n; i++){
            string s="";
            for(int j=0; j<n; j++){
                s+='.';
            }
            board.push_back(s);
        }

        solve(n,board, &count);

        return count;
    }
};