#include<iostream>
using namespace std;

int zeroes(long long num, int count = 0){
    if (num == 0) return count;

    int digit = num%10;

    if(digit==0) zeroes(num/10, count+1);
    else zeroes(num/10, count);
}


int main(){

    cout << zeroes(1020300900000);

    return 0;
}