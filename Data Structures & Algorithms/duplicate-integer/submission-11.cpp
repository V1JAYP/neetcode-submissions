class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set1(nums.begin(),nums.end());
        if(set1.size() != nums.size()){
            return true;
        }
        return false;

        
    }
};