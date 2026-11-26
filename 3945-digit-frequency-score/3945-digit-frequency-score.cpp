class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int, int> m;
        while(n > 0){
            m[n % 10]++;
            n /= 10; 
        }
        int sum = 0;
        for(auto ele : m){
            sum += ele.first * ele.second;
        }
        return sum;
    }
};