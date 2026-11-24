class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(int i = 0; i < s.length(); i++){
            v.push_back(s[i]);
        }
        int i = 0;
        int j = v.size() - 1;
        while(i <= j){
            if ((v[i] == 'a' || v[i] == 'e' || v[i] == 'i' ||
                v[i] == 'o' || v[i] == 'u' ||
                v[i] == 'A' || v[i] == 'E' || v[i] == 'I' ||
                v[i] == 'O' || v[i] == 'U') && 
                (v[j] == 'a' || v[j] == 'e' || v[j] == 'i' ||
                v[j] == 'o' || v[j] == 'u' ||
                v[j] == 'A' || v[j] == 'E' || v[j] == 'I' ||
                v[j] == 'O' || v[j] == 'U')
                )
                {
                    swap(v[i], v[j]);
                    i++;
                    j--;
            }
            else if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' ||
                v[i] == 'o' || v[i] == 'u' ||
                v[i] == 'A' || v[i] == 'E' || v[i] == 'I' ||
                v[i] == 'O' || v[i] == 'U')
                {
                    j--;
            }
            else if (v[j] == 'a' || v[j] == 'e' || v[j] == 'i' ||
                v[j] == 'o' || v[j] == 'u' ||
                v[j] == 'A' || v[j] == 'E' || v[j] == 'I' ||
                v[j] == 'O' || v[j] == 'U')
                {
                    i++;
            }
            else {
                i++;
                j--;
            }
        }
        string ans = "";
        for(int i = 0; i < v.size(); i++){
            ans += v[i];
        } 
        return ans;
    }
};