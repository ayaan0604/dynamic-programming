#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void sort_stack(stack<int>& s){
    if(s.empty()) return;

    int temp = s.top();
    s.pop();

    sort_stack(s);
    
}

int main(){

    vector<int> v = {2,3,1,4,5,8,5,2,4};
    stack<int> s;

    for(int i : v){
        s.push(i);
    }

    sort_stack(s);

    return 0;
}