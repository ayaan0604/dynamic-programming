// gfg accepted code


class Solution {
  private:
    void solve(int n, vector<string>& answer, string s = "", int zeros =0, int ones =0){
        if(s.size()==n){
            answer.push_back(s);
            return;
        }
        
        solve(n, answer, s + '1', zeros, ones+1);
        
        if(zeros<ones){
            solve(n, answer, s+'0', zeros+1, ones);
        }
    }
    
  public:
    vector<string> NBitBinary(int n) {
        vector<string> answer;
        
        solve(n, answer);
        
        return answer;
    }
};