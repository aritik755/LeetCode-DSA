class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])) st.insert(s[i] - '0');
        }
        
        if(st.size() < 2) return -1;
        
        auto it = st.rbegin();
        it++;
        
        return *it;
    }
};