class Solution {
public:
    void sortColors(vector<int>& nums) {
        int two = 0 ,one = 0;
        int count = 0;
        for(auto it : nums){
            if(it == 0){
                nums[count] = 0;
                count++;
            }
            else if(it == 1)
                one++;
            else
                two++;
        }
        while(one){
            nums[count] = 1;
            one--;
            count++;
        }
        while(two){
            nums[count] = 2;
            two--;
            count++;
        }
    }

};