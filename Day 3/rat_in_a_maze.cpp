#include<iostream>
#include<vector>
#include <string>
#include<unordered_map>

using namespace std;



bool isValid(vector<vector<int>>& maze, int x, int y){
    if(x<0 || y<0) return false;
    
    if(x<maze.size() && y<maze.size() && maze[x][y]!=0) return true;
    
    return false;
}

void solve(vector<vector<int>>& maze, vector<string> answer, int x=0, int y=0, string ans=""){
    if(x==y && x==maze.size()-1){
        answer.push_back(ans);
        return;
    }
    
    vector<vector<int>> choices={
        {x,y+1},
        {x-1, y},
        {x+1, y},
        {x, y-1}
    };
    vector<char> keys ={'D','L','R','U'};
    
    for(int i=0; i<keys.size(); i++){
        char key= keys[i];
        int x_choice = choices[i][0];
        int y_choice = choices[i][1];
        if(isValid(maze,x_choice, y_choice)){
            ans+=key;
            maze[x][y]=0;
            return solve(maze, answer, x_choice, y_choice, ans);
        }
    }
}



vector<string> ratInMaze(vector<vector<int>>& maze) {
    vector<string> answer;
    
    
    
    solve(maze, answer);
    
    return answer;
    
}
