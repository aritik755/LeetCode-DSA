class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i = 0; i < sentences.size(); i++){
            string str = sentences[i];
            int cnt = 0;
            for(int j = 0; j < str.size(); j++){
                if(str[j] == ' ') cnt++;
            }
            ans = max(ans, cnt+1);
        }
        return ans;
    }
};