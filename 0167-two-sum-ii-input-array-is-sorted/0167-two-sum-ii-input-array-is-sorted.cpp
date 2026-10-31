class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int e = numbers.size()-1;

        int i = s;
        int j = e;

        while(i<=j){
            if(numbers[i] + numbers[j] == target){
                return {i+1, j+1};
            }

            else if(numbers[i] + numbers[j] < target)
            i++;

            else
            j--;
        }
        return {};
    }
};