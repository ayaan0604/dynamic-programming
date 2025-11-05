#include<iostream>
#include<vector>
using namespace std; 

void reverse_array(vector<int>& nums,int start, int end ){
    if(start>end) return;

    swap(nums[start], nums[end]);

    reverse_array(nums, ++start, --end);
}




int main(){

    vector<int> nums = {1,2,3,4,5,6,7,8,9};

    reverse_array(nums, 0, nums.size()-1);

    for(int i: nums){
        cout << i << " ";
    }
}