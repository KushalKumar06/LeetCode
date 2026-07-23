class Solution {
public:

    bool helper(vector<vector<int>>& matrix , int midRow , int target){
        int n = matrix[0].size();
        int s = 0 ;
        int e = n-1;

        while(s<=e){
            int mid = s + (e-s)/2;

            if(target == matrix[midRow][mid])
            return true;

            else if(target < matrix[midRow][mid])
            e = mid -1;

            else 
            s = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int stRow = 0;
        int eRow = m - 1;

        while(stRow <= eRow){
            int midRow = stRow + (eRow-stRow)/2;

            if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1])
            return helper(matrix, midRow , target);

            else if(target > matrix[midRow][n-1])
            stRow = midRow + 1;

            else
            eRow = midRow - 1;
        }
        return false;
    }
};