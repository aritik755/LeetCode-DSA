class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posCount = 0, negCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) negCount++;
            else if(nums[i] > 0) posCount++;
            else continue;
        }
        return max(negCount, posCount);
    }
};