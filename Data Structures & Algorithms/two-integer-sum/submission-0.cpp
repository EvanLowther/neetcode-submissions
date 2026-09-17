class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int difference = 0;
        unordered_map<int, int> table;
        for(int i = 0; i < nums.size(); i++){
            difference = target - nums[i];
            if(table.find(difference) != table.end()){
                return {table[difference], i};
            }
            table[nums[i]] = i;
        }
        return {};
    }
};
