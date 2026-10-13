class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>squares;

        for(int i = 0; i<nums.size(); i++){
            squares.push_back((long long)nums[i] * nums[i]);
        }

        sort(squares.begin(), squares.end());

        long long ans = 0;

        for(int i = 0 ;i<nums.size(); i++){
            if(i<nums.size()/2)
            ans -= squares[i];

            else
            ans += squares[i];
        }

        return ans;
    }
};