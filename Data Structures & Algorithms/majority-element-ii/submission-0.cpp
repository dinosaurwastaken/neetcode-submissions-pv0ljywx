class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m1;
        vector<int>temp;
        int n = nums.size();
        for(int num : nums){
            m1[num]++;
        }
        for(auto pair : m1){
            if(pair.second > n/3)
                temp.push_back(pair.first);
        }
        return temp;
    }
};