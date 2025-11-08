#include<iostream>
#include<string>
#include<vector>

using namespace std;

void generate(int n, string ans=""){
    if(ans.size()==n){
        cout << ans << endl;
        return;
    }
    ans.push_back('0');
    generate(n, ans);

    ans.pop_back();
    if(ans.empty()){
        ans.push_back('1');
        generate(n, ans);
    }
    else if(ans[ans.size()-1] != '1'){
        
        ans.push_back('1');
        generate(n, ans);
    }
}


int main(){
    generate(3 );
    return 0;
}