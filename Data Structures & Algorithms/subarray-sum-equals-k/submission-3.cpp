class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0 ;
        int sum = 0 ;
        unordered_map<int,int>prefixsum;
        prefixsum[0] = 1;
        for(int num : nums){
            sum += num;
            int diff = sum - k ;
            res += prefixsum[diff];
            prefixsum[sum]++;
        }
        return res;
    }
};