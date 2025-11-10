//sudoku solver leetcode 37 accepted code

class Solution{
  private:

    bool isValidRow(vector<vector<char>>& board, int row, char ch){
        

        for(int i=0; i<9; i++){

            if(board[row][i]==ch) return false;
        
        }

        return true;
    }

    bool isValidColumn(vector<vector<char>>& board, int col, char ch){

        for(int i=0; i<9; i++){
           
           if(board[i][col]==ch) return false;

        }
        return true;
    }

    bool isValidGrid(vector<vector<char>>& board, int startRow, int startCol, char ch){
        unordered_set<char> seen;

        for(int i = startRow; i < startRow+3; i++){
            for(int j = startCol; j< startCol+3; j++){

                if(board[i][j]==ch) return false;
                
            }
        }
        return true;
    }


    bool isSafe(vector<vector<char>>& board, int row, int col, char ch) {
        //check row
        if(!isValidRow(board, row, ch))  return false;
        
        //check column
        if(!isValidColumn(board, col, ch)) return false;

        //check grid
        int startR = (row/3)*3;
        int startC = (col/3)*3;

        if(!isValidGrid(board, startR, startC, ch)) return false;
            

        return true;

    }




    void solve(vector<vector<char>>& board, bool* solved, int pos=0 ){
        if(pos>=81){
            *solved = true;
            return;
        } 
        
        if(*solved)return;

        int row = pos/9;
        int col = pos%9;

        if(board[row][col] != '.'){
            solve(board,solved, pos+1);
            return;
        }

        for(char ch = '1'; ch<= '9'; ch++){

            

            if(isSafe(board, row, col, ch)){

                board[row][col] = ch;

                solve(board, solved, pos+1);

                //stop if solved
                if(*solved) return;
                
                //backtrack if not solved
                board[row][col] = '.'; 

            }

            
        }
    }

  public:

    void solveSudoku(vector<vector<char>>& board) {
        bool solved = false;

        solve(board, &solved);

        
    }
};