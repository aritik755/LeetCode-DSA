class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0;
        int evenSum = 0;
        for(int i = 1; i <= n*2; i++){
            if(i % 2 == 0) evenSum++;
            else oddSum++;
        }
        int gcd = 0;
        int newN = max(oddSum, evenSum);
        for(int i = 1; i <= newN; i++){
            if(evenSum % i == 0 && oddSum % i == 0) gcd = i;
        }
        return gcd;
    }
};