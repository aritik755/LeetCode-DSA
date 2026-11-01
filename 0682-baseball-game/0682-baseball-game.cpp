class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int lastEle = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C"){
                ans.pop_back();
                if(ans.size() > 0) lastEle = ans.back();
            }
            else if(operations[i] == "D") {
                lastEle = lastEle * 2;
                ans.push_back(ans.back()*2);
            }
            else if(operations[i] == "+"){
                int sum = ans[ans.size()-1] + ans[ans.size()-2];
                ans.push_back(sum);
            }
            else{
                lastEle = stoi(operations[i]);
                ans.push_back(lastEle);
            }
        }
        int finalSum = 0;
        for(int i = 0; i < ans.size(); i++){
            finalSum += ans[i]; 
        }
        return finalSum;
    }
};