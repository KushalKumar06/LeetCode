class Solution {
public:

    bool isPalin(string part){
        int s = 0;
        int e = part.size()-1;
        while(s<e){
            if(part[s] != part[e])
            return false;

            s++;
            e--;
        }
        return true;
    }

    void helper(string s, vector<string>&partitions, vector<vector<string>>&ans){
        if(s.size() == 0){
            ans.push_back(partitions);
            return;
        }

        for(int i = 0; i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPalin(part)){
            partitions.push_back(part);

            helper(s.substr(i+1), partitions, ans);
            partitions.pop_back();
            }

        }

    }

    vector<vector<string>> partition(string s) {
        vector<string>partitions;
        vector<vector<string>>ans;
        helper(s, partitions, ans);
        return ans;
    }
};