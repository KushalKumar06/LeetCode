class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0 ;i< nums.size(); i++){
            if(nums[i] > maxi)
            maxi = nums[i];

            sum += nums[i];
        }

        int exp = maxi * nums.size();
        int ans = exp - sum;

        return ans;
    }
};