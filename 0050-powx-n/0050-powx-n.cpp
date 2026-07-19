class Solution {
public:

    double findPower(double x, long long n){
        if(n == 0) return 1;
    
        double half = findPower(x , n/2);

        if(n % 2 == 0){
            return half*half;
        }
        else{
            return x *half*half;
        }
    }   

    double myPow(double x, int n) {
        long long N = n;

        if(N < 0){
            N = -N;
            return 1.0 / findPower(x, N);
        }
        
        return findPower(x , N);
    }
};