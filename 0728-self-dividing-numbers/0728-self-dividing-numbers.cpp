class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++){
            int temp = i;
            bool isValid = true;
            while(temp > 0){
                int digit = temp % 10;
                if(digit == 0) {
                    isValid = false;
                    break;
                }
                if(i % digit != 0) {
                    isValid = false;
                    break;
                }
                temp /= 10;
            }
            if(isValid) {
                result.push_back(i);
            }
        }
        return result;
    }
};