class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n(nums.begin(), nums.end());
        if( n.size() != nums.size()){
            return true;
        }
        return false;
        
    }
};