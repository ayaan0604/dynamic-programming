#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int max_num(vector<int> nums,int idx = 0, int max = INT_MIN){

    if(idx == nums.size()-1) return nums[idx];

    int previous_max = max_num(nums, idx+1, max);

    //if current number is greater than the max of the rest of the array
    //return the current num else previous max
    return nums[idx]> previous_max ? nums[idx] : previous_max;

}


int main(){

    vector <int> nums = {2, 5, 1, 8, 3};


    int maximum = max_num(nums);
    

    cout<< "Maximum : " <<  maximum;

    return 0;
}