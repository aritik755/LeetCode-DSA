class Solution {
public:
    double average(vector<int>& salary) {
        double max = 0, min = salary[0], sum = 0;
        for(int i = 0; i < salary.size(); i++){
            if(salary[i] > max) max = salary[i];
            if(min > salary[i]) min = salary[i];
            sum += salary[i];
        }
        return static_cast<double>(sum - (max + min)) / (salary.size() - 2);
    }
};