class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int>neg;

        for(int i = 0; i<n ; i++){
            if(nums[i] >= 0)
            pos.push_back(nums[i]);

            else
            neg.push_back(nums[i]);
        }

        if(neg.size() == 0){
            for(int i = 0 ;i< n ;i++){
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }

        if(pos.size() == 0){
            for(int i = 0; i<n ;i++){
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());
            return neg;
        }

        vector<int>res(neg.size() + pos.size());

        int i = 0;
        int j = 0;
        int idx = 0;

        for(int i = 0 ; i<neg.size(); i++){
            neg[i] = neg[i] * neg[i];
        }

        reverse(neg.begin(), neg.end());

        for(int i = 0; i<pos.size(); i++){
            pos[i] = pos[i] * pos[i];
        }

        while(i<pos.size() && j<neg.size()){
            if(pos[i] <= neg[j]){
                res[idx] = (pos[i]);
                idx++;
                i++;
            }

            else{
                res[idx] = (neg[j]);
                idx++;
                j++;
            }
        }

        while(i<pos.size()){
            res[idx] = (pos[i]);
            idx++;
            i++;
        }

        while(j<neg.size()){
            res[idx] = (neg[j]);
            idx++;
            j++;
        }

        return res;
    }
};