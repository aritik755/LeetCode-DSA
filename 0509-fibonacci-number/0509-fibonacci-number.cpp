class Solution {
public:
     int f(int r){
        if(r == 0 ) return 0;
        if(r == 1) return 1;

        int result = f(r-1) + f(r-2);

        return result; 
    }

    int fib(int n) {
    
        int fibNumber = f(n);

        return fibNumber;
    }
};