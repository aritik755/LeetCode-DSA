class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> result;
        result.push_back(double(celsius + 273.15));
        result.push_back(double(celsius*1.8 + 32));
        return result;
    }
};