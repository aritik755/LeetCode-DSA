class Solution {
public:
    bool detectCapitalUse(string word) {
       int upper = 0;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == toupper(word[i])) upper++;
        }
        // All uppercase
        if(upper == word.length()) return true;

        // All lowercase
        if(upper == 0) return true;

        // Only first letter uppercase
        if(upper == 1 && word[0] == toupper(word[0])) return true;

        return false;
    }
};