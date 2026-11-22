class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }
        int ans = -1;
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] == 1){
                ans = i;
                break;
            }
        }    
        return ans;
    }
};