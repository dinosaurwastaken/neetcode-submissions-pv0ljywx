class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0 ; 
        int r = nums.size() - 1 ;
        while(l <= r){
            int m = l + (r-l)/2;
            cout << l << " l r " << r << endl;
            cout << m << "m\n";
            if(nums[m] == target) 
                return true;
            if(nums[l] < nums[m]){
                cout << "left\n"; // left sorted
                if(target >= nums[l] && target < nums[m])
                    r = m - 1;
                else 
                    l = m + 1;
            }
            else if(nums[l] > nums[m]){ //  right sorted
                cout << "right\n";
                if(target > nums[m] && target <= nums[r]) 
                    l = m + 1;
                else 
                    r = m - 1;
            }
            else{
                l++;
            } 
        }
        return false;
    }
};