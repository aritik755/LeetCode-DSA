class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0; i < words.size(); i++){
            string main = words[i];
            for(int j = 0; j < main.size(); j++){
                if(main[j] == x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};