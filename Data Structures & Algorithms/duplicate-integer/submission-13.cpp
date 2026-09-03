class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set1(nums.begin(),nums.end());
        if(nums.size() != set1.size()){
            return true;
        }
        return false;
        
    }
};