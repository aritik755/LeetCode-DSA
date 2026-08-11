class Solution {
public:
    bool isSameAfterReversals(int num) {
        int originalNumber = num;
        int reverseNumber = 0;
        while(num > 0){
            int lastDigit = num % 10;
            reverseNumber = reverseNumber*10 + lastDigit;
            num /= 10;
        }
        int newNumber = 0;
        while(reverseNumber > 0){
            int lastDigit = reverseNumber % 10;
            newNumber = newNumber*10 + lastDigit;
            reverseNumber /= 10;
        }
        if(originalNumber == newNumber) return true;
        else return false;
    }
};