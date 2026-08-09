class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigitsCount = 0;
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            while(nums[i] > 0){
                nums[i] % 10;
                count++;
                nums[i] /= 10;
            }
            if(count % 2 == 0) evenDigitsCount++;
        }
        return evenDigitsCount;
        
    }
};