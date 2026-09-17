class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> read;
        for(int num : nums){
            if(read.find(num) != read.end()){
                return true;
            }
            read.insert(num);
        }
        return false;
    }
};