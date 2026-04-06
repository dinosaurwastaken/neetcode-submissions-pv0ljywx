class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = nums[0];
        int counter = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == curr){
                counter++;
            }
            else{
                counter--;
                if(counter == 0){
                    curr = nums[i];
                    counter = 1;
                }
            }
        }
        return curr;
    }
};