class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxElement = 0;
        int minElement = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxElement) maxElement = nums[i];
            if(nums[i] < minElement) minElement = nums[i];
        }
        int gcm = 0;
        for(int i = 1; i <= maxElement; i++){
            if(minElement%i==0 && maxElement%i==0 ) gcm = i;
        }
        return gcm;
    }
};