class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(nums[i] < 10) nums.push_back(nums[i]);
            else{
                int n = nums[i];
                int revNum = 0;
                while(n > 0){
                    int lastdigit = n % 10;
                    revNum = revNum*10 + lastdigit;
                    n /= 10;
                }
                nums.push_back(revNum);
            }
        }
        set<int> s1;
        for(auto ele:nums){
            s1.insert(ele);
        }
        return s1.size();
    }
};