// accepted code on leetcode

class Solution {
private:
    bool isPalindrome(string s){
        int start=0;
        int end= s.size()-1;
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void solve(string s, vector<vector<string>>& answer, vector<string>& ans){
        if(s.size() == 0){
            answer.push_back(ans);
            return;
        }

        for(int i=0; i<s.size(); i++){
            string left = s.substr(0, i+1);

            if(isPalindrome(left)){
                ans.push_back(left);

                solve(s.substr(i+1), answer, ans);

                ans.pop_back();
            }

        }
    }

    

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> ans;
        
        solve(s, answer, ans);

        return answer;
    }
};