class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxElement = 0;
        int maxIndex;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxElement){
                maxElement = nums[i];
                maxIndex = i;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(i == maxIndex) continue;
            if(maxElement < 2*nums[i]) return -1;
        }
        return maxIndex;
    }
};