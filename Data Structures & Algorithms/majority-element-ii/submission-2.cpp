class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(int num : nums){

            m1[num]++;
            if(m1.size() == 3){
                unordered_map<int,int>temp;
                for(auto pair : m1){
                    if(pair.second > 1){
                        temp[pair.first] = pair.second - 1;
                    }
                }
                m1 = temp;
            }
        }
        vector<int>res;
        for(auto it : m1){
            int freq = 0;
            for(int num : nums){
                if(it.first == num) freq++;
            }
            if(freq > nums.size()/3) res.push_back(it.first);
        }
        return res;
    }
};