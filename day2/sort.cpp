#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& arr,int end){

    if(end <= 0 || arr[end]>arr[end-1]) return;

    swap(arr[end], arr[end-1]);

    insert(arr, end-1);

}

void sort_arr(vector<int>& arr, int end ){
    
    if(end == 0) return;

    sort_arr(arr, end-1);

    insert(arr, end);

}





int main(){

    vector<int> arr = {1,241,2412,214,242141,12414,1241,12};

    sort_arr(arr, arr.size()-1);

    for(int i : arr) cout << i << " ";

    return 0;
}