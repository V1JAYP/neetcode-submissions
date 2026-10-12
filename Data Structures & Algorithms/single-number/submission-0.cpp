class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map1;
        
        for(int number : nums){
            map1[number]++;
        }
        for(const auto&pair : map1){
            if(pair.second == 1 ){
                return pair.first;
            }
        }

        
        return -1;
    }
};
