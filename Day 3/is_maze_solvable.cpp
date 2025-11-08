#include<iostream>
#include<vector>

using namespace std;

bool is_valid(vector<vector<int>>& maze, vector<vector<int>>& is_visited, int row =0, int col =0){
    if(row<0 ||  col < 0) return false;
    if(row>=maze.size() || col >= row || is_visited[row][col]) return false;
    return true;
}



int main(){
    
    vector<vector<int>> maze({
        {0,0,0,0,0},
        {0,1,1,0,1},
        {1,0,1,0,0},
        {0,0,1,0,0},
        {0,0,0,0,0}
    });

    vector<vector<bool>> is_visited;
    for(int i=0; i< maze.size(); i++){
        vector<bool> temp;
        for(int j=0; j<maze.size(); j++){
            temp.push_back(false);
        }
        is_visited.push_back(temp);
    }

    cout << solve(maze, is_visited);
    

    return 0;
}