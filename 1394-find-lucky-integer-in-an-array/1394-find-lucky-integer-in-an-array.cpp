class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> m;
        for(int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }
        int ans = -1;
        for(auto v : m){
            if(v.first == v.second){
                ans = max(ans, v.second);
            } 
        }
        return ans;
    }
};