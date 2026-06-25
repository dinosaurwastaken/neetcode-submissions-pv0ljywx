class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>sol;
        int l = 0 ;
        int r = k-1 ;
        int n = nums.size();
        while(r < n){
            int localmax = INT_MIN; 
            for(int i = l ; i <= r ; i++){
                localmax = max(localmax,nums[i]);
            }
            l++;
            r++;
            sol.push_back(localmax);
        }
        return sol;
    }
};
