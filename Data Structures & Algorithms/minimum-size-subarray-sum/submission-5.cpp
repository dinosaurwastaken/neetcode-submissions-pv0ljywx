class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 ;
        int r = 1 ;
        int sol = INT_MAX ;
        int sum =  nums[l];
        while(r <= nums.size() && l < r ){
            if(sum >= target ){
                sol = min(sol,( r - l));
                sum -= nums[l]; 
                l++;
            }
            else{
                sum += nums[r];
                r++;
            }
        }
        if(sol == INT_MAX)  return 0;
        return sol;
    }
};