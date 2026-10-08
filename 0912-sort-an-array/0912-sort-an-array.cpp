class Solution {
public:
    void merge(vector<int> &nums, int l, int mid, int r){
        int an = mid - l + 1;
        int bn = r - mid;
        int arr1[an];
        int arr2[bn];

        for(int i = 0; i < an; i++){
            arr1[i] = nums[l+i];
        }
        for(int i = 0; i < bn; i++){
            arr2[i] = nums[mid+1+i];
        }

        int i = 0, j = 0, k = l;
        while(i < an && j < bn){
            if(arr1[i] < arr2[j]){
                nums[k++] = arr1[i++];
            }
            else{
                nums[k++] = arr2[j++];
            }
        }

        while(i < an){
            nums[k++] = arr1[i++];
        }

        while(j < bn){
            nums[k++] = arr2[j++];
        }

        return;
    }
    void mergeSort(vector<int> &nums, int l, int r){
        if(l >= r){ // Base case
            return;
        }
        int mid = l + (r-l)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        merge(nums, l, mid, r);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};