class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n = nums.size();
        vector<int>ans(n);
        
        for(int i = 2*n-1; i>=0; i--){
            while(s.size() > 0 && s.top() <=nums[i%n])
            s.pop();

            ans[i%n] = s.size() == 0 ? -1 : s.top();

            s.push(nums[i%n]);
        }

        return ans;
    }
};