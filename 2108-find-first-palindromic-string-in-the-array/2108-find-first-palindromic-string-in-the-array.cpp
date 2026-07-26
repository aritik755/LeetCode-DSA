class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        string check = "";
        for(int i = 0; i < words.size(); i++){
            ans = words[i];
            check = ans;
            reverse(ans.begin(), ans.end());
            if(check == ans) return ans;
        }
        return "";
    }
};