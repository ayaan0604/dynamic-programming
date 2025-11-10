//leetcode 139
// testcases passed, giving TLE (have to use dp)

class Solution {
private:
bool isMatch(string word, string& s,int idx){
    for(int i=0; i<word.size(); i++){
        if(! (word[i]==s[idx+i]) ) return false;
    }
    return true;
}

void solve(string& s, vector<string>& wordDict, bool* ans,int idx=0){
    if(idx>=s.size()){
        *ans = true;
        return;
    }
    for(string word : wordDict){
        if(isMatch(word, s, idx)){
            //try for next word
            solve(s, wordDict, ans, idx+word.size());
        }
    }
}


public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool ans= false;

        solve(s, wordDict, &ans );

        return ans;
    }
};