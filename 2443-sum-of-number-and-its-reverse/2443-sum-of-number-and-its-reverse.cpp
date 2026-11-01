class Solution {
public:
    int reverse(int n){
        int ans = 0;
        while(n > 0){
            int digit = n % 10;
            ans = ans*10 + digit;
            n /= 10;
        }
        return ans;
    }
    bool sumOfNumberAndReverse(int num) {
        if(num == 0) return true;
        for(int i = 0; i <= num; i++){
            if(i + reverse(i) == num) return true;
        }
        return false;
    }
};