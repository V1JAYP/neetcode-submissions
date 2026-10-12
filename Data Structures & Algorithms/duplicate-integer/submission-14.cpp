class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> map(nums.begin(),nums.end());
        if(map.size() < nums.size()){
            return true;
        }
        else{
            return false;
        }
        
    }
};