class Solution {
public:
    int reverse(int x) {
        long long number = 0;
        long long originalNumber = x;
        long long temp = x;
        if(temp < 0) {
            temp = -temp;
        }
        while(temp > 0){
            long lastDigit = temp % 10;
            number = number * 10 + lastDigit;
            temp /= 10;
        } 
        if(originalNumber < 0) number = -number;
        if (number > INT_MAX || number < INT_MIN) return 0;
        return number;
    }
};