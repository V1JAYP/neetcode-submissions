class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> set1;
        
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int complement = target - nums[i];
            if(set1.count(complement)){
                return{ set1[complement], i};
            }
            set1[nums[i]] = i;

        }
        return {};
        
    }
};
