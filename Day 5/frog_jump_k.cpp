#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int reachMin(vector<int>& height, int k, int n, vector<int>& dp){
    if(n==0){
        dp[0] = 0;
        return dp[0];
    } 

    if(dp[n]!=-1) return dp[n];

    int minimum = INT_MAX;

    for(int i=1; i<=k; i++){
        if((n-i) >= 0){

        int currentCost =  reachMin(height, k, n-i, dp) + abs(height[n] - height[n-i]);
        minimum = min(currentCost, minimum);

        }
    }
    
    if(n<k){

        int singleJumpCost = abs(height[0]-height[n]);
        minimum = min(minimum, singleJumpCost);
    }

    dp[n] = minimum;

    return dp[n];

}

int main(){

    

    vector<int> height = {10,20, 30, 10, 40};
    vector<int> dp (height.size(), -1);

    int k=2;
    int result = reachMin(height, k, height.size()-1, dp);
    cout << result;

    return 0;
}