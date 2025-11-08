//leetcode accepted code

class Solution {
private:
    void solve(int n, int k, vector<vector<int>>& answer, vector<int> comb, int current_num =1){
        if(comb.size()==k){
            answer.push_back(comb);
            return;
        }

        for(int i = current_num; i<=n; i++){
            comb.push_back(i);

            solve(n, k, answer, comb, i+1);

            comb.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> answer;

        vector<int> comb;

        solve(n, k, answer, comb);

        return answer;
    }
};