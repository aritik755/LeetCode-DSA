class Solution {
public:
    bool isAnagram(string s1, string s2) {
    if(s1.size() != s2.size()) return false;

    unordered_map<char, int> m;
  
    for(char c:s1){
        m[c]++;
    }

    for(char c:s2){
        m[c]--;
    }

    for(auto ele:m){
        if(ele.second != 0) return false;
    }

    return true;
    }
};