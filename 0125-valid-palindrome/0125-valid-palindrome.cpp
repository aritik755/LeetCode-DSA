class Solution {
public:
    bool isPalindrome(string s) {
        string mainString = "";
        for(int i = 0; i < s.size(); i++){
            if(!isalnum(s[i])) continue;
            mainString += tolower(s[i]);
        }
        string ansString = mainString;
        reverse(mainString.begin(), mainString.end());
        if(ansString == mainString) return true;
        else return false;
    }
};