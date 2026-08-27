class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map1;
        int n = nums.size();
        for(int i =0; i < n; ++i){
            int complement = target - nums[i];
            if(map1.count(complement)){
                return{map1[complement], i};

            }
            map1[nums[i]] = i;
        }
        return {};
    }
};
