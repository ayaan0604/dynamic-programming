//leetcode - 63 unique path, accepted

class Solution {
bool isSafe(vector<vector<int>>& obstacleGrid, int row, int col){
    if(row<0 || col <0 ) return false;

    if(obstacleGrid[row][col]==1) return false;

    return true;

}

int reach(vector<vector<int>>& obstacleGrid, int row, int col, vector<vector<int>>& dp){
    if(row==0 && col == 0){
        dp[row][col] = 1;
        return 1;
    }

    if(row<0 || col < 0 ) return 0;

    if(dp[row][col]!=-1) return dp[row][col];

    int up = isSafe(obstacleGrid, row-1, col) ? reach(obstacleGrid, row-1, col, dp) : 0;
    int right = isSafe(obstacleGrid, row, col-1) ? reach(obstacleGrid, row, col-1, dp) : 0;

    dp[row][col] = up+right;
    
    return dp[row][col];

}

public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if(obstacleGrid[m-1][n-1]==1) return 0;

        vector<vector<int>> dp (m, vector<int>(n, -1));

        return reach(obstacleGrid, m-1, n-1, dp);
    }
};