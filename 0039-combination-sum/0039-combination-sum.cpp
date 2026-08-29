class Solution {
public:

    set<vector<int>>s;

    void combSum(vector<int>& arr, vector<vector<int>>&ans, int i, vector<int>&comb, int target){

        if(target == 0){
            if(s.find(comb) == s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }

        int n = arr.size();
        if(i==n || target<0)
        return;

        comb.push_back(arr[i]);
        combSum(arr, ans,i+1,comb,target-arr[i]);
        combSum(arr,ans, i,comb,target-arr[i]);
        comb.pop_back();
        combSum(arr,ans,i+1,comb, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        combSum(arr, ans ,0,comb, target);
        return ans;
    }
};