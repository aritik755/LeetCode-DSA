class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int pos = n - 1;

        while(left <= right){
            int leftsqr = nums[left]*nums[left];
            int rightsqr = nums[right]*nums[right];

            if(leftsqr > rightsqr){
                result[pos--] = leftsqr;
                left++;
            }
            else{
                result[pos--] = rightsqr;
                right--;
            }
        }
        return result;
    }
};