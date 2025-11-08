#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


void solve(vector<int> nums, vector<vector<int>>& ans, int idx=0){
    unordered_set<int> seen;

    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=idx; i< nums.size(); i++){
        if(seen.count(nums[i])) continue;

        swap(nums[i], nums[idx]);
        solve(nums, ans, idx+1);
        seen.insert(nums[idx]);
        swap(nums[i], nums[idx]);
    }

}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;

    solve(nums, ans);

    return ans;
}

int main(){
    vector<int> ques = {1,1,2,3};

    vector<vector<int>> ans = permuteUnique(ques);

    for(vector<int> v : ans){
        cout << "[ ";
        for(int i : v){
            cout<< i << " ";
        }
        cout << ']' << endl;
    }
    return 0;
}