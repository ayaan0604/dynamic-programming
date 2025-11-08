#include<iostream>
#include<string>
#include<vector>

using namespace std;

void generate(string characters, vector<string>&ans, int idx = 0){
    if(idx==characters.size()-1){
        ans.push_back(characters);
        return;
    }

    for(int i=idx; i<characters.size(); i++){
        
        swap(characters[i], characters[idx]);
        generate(characters,ans, idx+1);
        swap(characters[i], characters[idx]);

    }
}

int main(){
    vector<string> ans;
    generate("ABC", ans);

    for(string s : ans){
        cout << s << endl;
    }
    cout << "Length: " << ans.size();

    

    return 0;
}