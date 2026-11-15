class Solution {
public:
    int countSeniors(vector<string>& details) {
       int cnt = 0;
       for(int i = 0; i < details.size(); i++){
        string str = details[i];
        int num = 0;
        for(int j = 11; j <= 12; j++){
           num = num * 10 + (str[j] - '0');
        }
        if(num > 60) cnt++;
       }
        return cnt;
    }
};