// 1234
// 123              4 -> 4*1000+321
//     12      3    -> 3*100 +21
//     1   2   -> 2*10+1 


#include<iostream>
using namespace std;

long long reverse_number(int num,int ans=0){

    if(num==0) return ans;

    int rem = num%10;
    ans = ans*10 + rem;

    reverse_number(num/10, ans);
    
}

int main(){
    long long num = 123456789;
    cout << reverse_number(num);

    return 0;
}