//leetcode 1137 Nth tribonacci, accepted

class Solution {
private:
    int tb(int n, vector<int>& dp){
        if(n==0){
            dp[n] = 0;
            return dp[n];
        }

        if(n==1 || n==2){
            dp[n] = 1;
            return dp[n];
        }
        
        if(dp[n]!=-1) return dp[n];

        dp[n] = tb(n-1, dp) + tb(n-2, dp) + tb(n-3, dp);

        return dp[n]; 

    }


public:
    int tribonacci(int n) {
        
        vector<int> dp(n+1, -1);

        return tb(n, dp);

    }
};