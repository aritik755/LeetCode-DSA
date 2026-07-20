class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> result;
        int i = 0;
        int n = nums1.size();
        int j = 0;
        int m = nums2.size();
        while(i < n && j < m){
            if(nums1[i] <= nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }

        while(i < n){
            result.push_back(nums1[i]);
            i++;
        }

        while(j < m){
            result.push_back(nums2[j]);
            j++;
        }

        int x = result.size();
        int start = 0;
        int end = x - 1;
        int mid = end + (start-end)/2;

        if(x % 2 == 0){
            return ((result[mid] + result[mid - 1]))/2; 
        }
        else{
            return result[mid];
        }

    }
};