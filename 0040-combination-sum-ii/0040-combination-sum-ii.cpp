class Solution {
public:

    //set<vector<int>>s;

    void combSum(vector<int>&arr, vector<vector<int>>&ans, vector<int>&comb,int s , int target){
       if(target == 0){
        ans.push_back(comb);
        return;
       }

       for(int i =s ; i<arr.size(); i++){
        if(i>s && arr[i] == arr[i-1])
        continue;

        if(arr[i]>target)
        break;

        comb.push_back(arr[i]);
        combSum(arr, ans, comb,i+1,target-arr[i]);
        comb.pop_back();
       }

    }  
 
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>>ans;
        vector<int>comb;
        combSum(arr, ans,comb,0,target);
        return ans;
    }
};