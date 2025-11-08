#include<iostream>
#include<vector>
#include<string>
using namespace std;

void generate(int n, string ans = ""){
    if(ans.size()==n){
        cout << ans << endl;
        return;
    }

    ans.push_back('0');
    generate(n, ans);

    ans.pop_back();
    ans.push_back('1');
    generate(n, ans);
    
}

int main(){

    // vector<vector<string>> v = 
    generate(4);

    return 0;
}