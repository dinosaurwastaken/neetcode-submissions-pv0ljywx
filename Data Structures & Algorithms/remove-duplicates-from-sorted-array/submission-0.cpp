class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp ;
        int p1 = 0 ;
        int p2 = 0 ;
        temp.push_back(nums[p1]);
        while(p2 < nums.size()){
            while(nums[p2] == nums[p1]){
                p2++;
            }
            temp.push_back(nums[p2]);
            p1 = p2;
        }
        nums = temp;
        return temp.size()-1;

    }
};