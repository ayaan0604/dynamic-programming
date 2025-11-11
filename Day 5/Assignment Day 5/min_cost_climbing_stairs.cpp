//leetcode - 746 Min Cost Climbing Stairs, accepted

class Solution {
private:
    int reach(vector<int>& cost, int idx, vector<int>& dp){
        if(idx<0) return 0;

        if(idx<=1){
            dp[idx] = 0;
            return dp[idx];
        } 

        if(dp[idx]!=-1) return dp[idx];


        int case1 = reach(cost, idx-1, dp) + cost[idx-1];
        int case2 = reach(cost, idx-2, dp) + cost[idx-2];

        dp[idx] = min(case1, case2);

        return dp[idx];

    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp (cost.size() + 1, -1 );
        return reach(cost, cost.size(), dp);   
    }
};

//ig we just need to find the minimum sum, while we can move either one or two steps forward