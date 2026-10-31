class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        for(int i = 1; i <= num; i++){
            if(num <= 9){
                if(i % 2 == 0) cnt++;
            }
            else{
                int n = i;
                int sum = 0;
                while(n > 0){
                    int digit = n % 10;
                    sum += digit;
                    n /= 10;
                } 
                if(sum % 2 == 0) cnt++;
            }
        }
        return cnt;
    }
};