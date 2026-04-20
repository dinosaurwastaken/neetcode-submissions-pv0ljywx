class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 ;
        int r = 1 ;
        int sol = INT_MAX ;
        int sum =  nums[l];
        while(r <= nums.size() ){
            if(sum >= target && l < r ){
                sol = min(sol,( r - l));
                cout << r <<" r l " << l <<endl;
                cout << "sol " << sol << endl;
                cout << "sum " << sum << endl; 
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