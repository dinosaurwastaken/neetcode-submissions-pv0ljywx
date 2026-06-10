class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        unordered_set<int>data;
        for(int i = 0 ; i < nums.size() ; i++){
            data.insert(nums[i]);
        }
        for(int i = 1 ; i <= maxi ; i++){
            if(data.count(i) == 0) return i;
        }
    }
};