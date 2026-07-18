class Solution {
public:
    bool isPalindrome(int x) {
        long long originalNumber = x;
        long long reverseNumber = 0;
        while(x > 0){
            reverseNumber = reverseNumber*10 + x % 10;
            x /= 10;
        }

        if(originalNumber == reverseNumber){
            return true;
        }
        else{
            return false;
        }
    }
};