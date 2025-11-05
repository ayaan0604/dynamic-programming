#include<iostream> 
using namespace std; 

int numberOfDigits(long long num, int count = 0){
    if(num==0) return count;

    numberOfDigits(num/10, ++count);
    
}

int main(){

    int count= numberOfDigits(12345);

    cout << "Count is: " << count;

    return 0;
}