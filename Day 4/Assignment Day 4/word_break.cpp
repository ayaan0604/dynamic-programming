//leetcode 139
// accepted on leetcode

class Solution {
private:
bool isMatch(string word, string& s,int idx){
    for(int i=0; i<word.size(); i++){
        if(! (word[i]==s[idx+i]) ) return false;
    }
    return true;
}

void solve(string& s, vector<string>& wordDict, bool* ans, vector<bool>& dp, int idx=0){
    if(idx>=s.size()){
        dp[idx] =true;
        *ans = true;
        return;
    }

    if(dp[idx]) return;

    for(string word : wordDict){
        if(isMatch(word, s, idx)){
            dp[idx] = true;
            //try for next word
            solve(s, wordDict, ans, dp, idx+word.size());
        }
    }
}


public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool ans= false;
        vector<bool> dp(s.size(), false);
        solve(s, wordDict, &ans, dp );

        return ans;
    }
};