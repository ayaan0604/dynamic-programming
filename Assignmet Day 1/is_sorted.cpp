#include<iostream>
#include<vector>
using namespace std; 

bool isSorted(vector<int> nums, int idx = 0){
    if(idx == nums.size()-1) return true;

    if(isSorted(nums, idx+1)){
        return nums[idx] < nums[idx+1];
    }
    return false;
}

int main(){

    vector<int> nums ={1, 2, 3, 4, 5};

    cout << isSorted(nums);


    return 0;
}