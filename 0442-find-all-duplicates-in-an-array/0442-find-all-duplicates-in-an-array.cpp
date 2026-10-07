class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto pair:map){
            if(pair.second > 1) ans.push_back(pair.first);
            continue;
        }
        return ans;
    }
};