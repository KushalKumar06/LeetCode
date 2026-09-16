class Solution {
public:

    void merge(vector<int>& arr, int s, int mid, int e){
        int i = s;
        int j = mid+1;
        int k = s;

        vector<int> temp;

        while(i <= mid && j <= e){
            if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
            }

            else{
                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }

        while(j <= e){
            temp.push_back(arr[j]);
            j++;
        }

        for(int x : temp){
            arr[k++] = x;
        }
    }
    
    void mergeSort(vector<int>& nums, int s, int e){
        if(s>=e)
        return;

        int mid = s + (e-s)/2;

        mergeSort(nums, s, mid);
        mergeSort(nums, mid+1, e);

        merge(nums, s, mid, e);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};