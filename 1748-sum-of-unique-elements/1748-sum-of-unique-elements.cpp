class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        int sum = 0;
        for(auto ele : m){
            if(ele.second == 1) sum+= ele.first;
        }
        return sum;
    }
};