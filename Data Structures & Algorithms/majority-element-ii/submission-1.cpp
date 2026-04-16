class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m1;
        vector<int>temp;
        set<int>t;
        int n = nums.size();
        for(int num : nums){
            m1[num]++;
            if(m1[num] > n/3) t.insert(num);
        }
        for(auto num : t){
            temp.push_back(num);
        }
        return temp;
    }
};