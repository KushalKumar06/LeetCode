class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int low = 0;
        int high = 0;

        int n = arr.size();
        int sum = 0;

        int minl = n + 1;
        int currl = high - low + 1;

        while(high < n){
            sum += arr[high];
            while(sum >= target){
                currl = high - low + 1;
                 minl = min(minl , currl);
                sum -= arr[low];
                low++;
            }

            high++;
        }
        int asum = 0;
        for(int i = 0;i<n; i++){
            asum += arr[i];
        }

        if(asum < target)
        return 0;

        return minl;
    }
};