class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int prev = 0;
        for(int i = 0; i < candies.size(); i++){
            prev = max(prev, candies[i]);
        }
        for(int i = 0; i < candies.size(); i++){
            int sum = extraCandies + candies[i];
            if(sum >= prev){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};