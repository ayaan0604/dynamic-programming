#include<iostream>
using namespace std; 


long long bin(int num){
    long long ans=0;
    long long mul = 1;
    while(num!=0){
        int rem= num % 2;
        ans+= rem*mul;

        num/=2;
        mul*=10;
    }
    return ans;


}

long long binary( int num, long long ans = 0, long long mul = 1){
    if(num==0) return ans; 

    ans+= (num%2) * mul;
    
    return binary(num/2, ans, mul*10);
}

int main(){

    int num= 10;

    long long b = binary(num);

    cout << b;

    return 0;
}