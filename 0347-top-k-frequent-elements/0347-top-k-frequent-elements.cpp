class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto ele : m){
            v.push_back({ele.second, ele.first});
        }
        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};