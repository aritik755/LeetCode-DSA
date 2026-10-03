class Solution {
public:
    vector<int> twoSum(vector<int>& v, int sum) {
       unordered_map<int, int> m;
        vector<int> ans(2, -1);

        for(int i = 0; i < v.size(); i++){
            if(m.find(sum-v[i]) != m.end()){
                ans[0] = m[sum - v[i]] ;
                ans[1] = i;
                return ans;
            }
            else{
                m[v[i]] = i;
            }
        }
        return ans;
    }
};