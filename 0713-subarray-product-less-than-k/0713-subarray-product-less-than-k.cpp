class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k <= 1) return 0;
        int st = 0;
        int end = 0;
        int prod = 1;
        int count = 0;
        while(end < n){
            prod = prod * nums[end];
            while(prod >= k){
                prod = prod/nums[st];
                st++;
            }
            count += end-st+1;
            end++;
        }   
        return count;
    }
};