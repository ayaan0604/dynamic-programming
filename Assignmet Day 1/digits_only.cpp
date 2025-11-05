#include<iostream>
#include<string>
#include<cctype>
using namespace std; 

bool digitsOnly(string s, int idx = 0){
    if(idx == s.size()) return true;

    if( !isdigit( s[idx] )) return false;

    return digitsOnly(s, idx+1);

}

int main(){

    string s1 = "1456789";
    string s2 = "12f34a";

    cout << digitsOnly(s1) << endl;
    cout << digitsOnly(s2) << endl;

    return 0;
}