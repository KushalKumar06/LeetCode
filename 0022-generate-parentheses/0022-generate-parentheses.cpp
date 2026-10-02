class Solution {
public:

    void helper(int n , int open , int close , string curr, vector<string>&ans){
        if(curr.size()== 2*n){
            ans.push_back(curr);
            return;
        }

        if(open<n){
            helper(n, open+1, close, curr+"(" , ans);
        }

        if(close<open){
            helper(n, open, close+1, curr+")", ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;

        helper(n, 0, 0, "", ans);
        return ans;
    }
};