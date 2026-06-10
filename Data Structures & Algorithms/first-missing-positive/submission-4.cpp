class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>data;
        for(int i = 0 ; i < nums.size() ; i++){
            data.insert(nums[i]);
        }
        for(int i = 1 ; i <= nums.size() ; i++){
            if(data.count(i) == 0) return i;
        }
    }
};