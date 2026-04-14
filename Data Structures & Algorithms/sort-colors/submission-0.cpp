class Solution {
public:
    void sortColors(vector<int>& nums) {
        int two = 0 ,one = 0;
        vector<int>temp;
        for(auto it : nums){
            if(it == 0)
                temp.push_back(0);
            else if(it == 1)
                one++;
            else
                two++;
        }
        while(one){
            temp.push_back(1);
            one--;
        }
        while(two){
            temp.push_back(2);
            two--;
        }
        nums = temp;
    }

};