class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numset;
        for( int num : nums){
            if(numset.count(num)){
                return true;
            }
            numset.insert(num);
        }
        return false;
        
    }
};