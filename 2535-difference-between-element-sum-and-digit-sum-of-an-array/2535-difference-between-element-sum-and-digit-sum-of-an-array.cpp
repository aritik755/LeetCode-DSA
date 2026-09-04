class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for(int i = 0; i < nums.size(); i++){
            elementSum += nums[i];
            if(nums[i] <= 9 && nums[i] > 0) digitSum += nums[i];
            else{
                int n = nums[i];
                while(n > 0){
                    int lastdigit = n % 10;
                    digitSum += lastdigit;
                    n /= 10;
                }
            } 
        }
        return elementSum-digitSum;
    }
};