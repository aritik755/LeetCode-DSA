class Solution {
public:
    int mirrorDistance(int n) {
        int num = n;
        int reverse = 0;
        while(n > 0){
            int digit = n % 10;
            reverse = reverse*10 + digit;
            n /= 10;
        }
        int ans = reverse - num;
        if(ans < 0) return -ans;
        return ans; 
    }
};