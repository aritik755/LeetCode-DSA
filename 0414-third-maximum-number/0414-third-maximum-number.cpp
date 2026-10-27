class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN;
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > firstMax) firstMax = nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > secondMax && nums[i] != firstMax) secondMax = nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > thirdMax && nums[i] != secondMax && nums[i] != firstMax) thirdMax = nums[i];
        }
        if(thirdMax == LLONG_MIN) return firstMax;
        return thirdMax;
    }
};