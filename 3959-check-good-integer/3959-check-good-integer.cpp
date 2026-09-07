class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;
        while(n > 0){
            int digit = n % 10;
            digitSum += digit;
            squareSum += digit*digit;
            n /= 10;  
        }
        int result = squareSum - digitSum;
        if(result >= 50) return true;
        return false;
    }
};