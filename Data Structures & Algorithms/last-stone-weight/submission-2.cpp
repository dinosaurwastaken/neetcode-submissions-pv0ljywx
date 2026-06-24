class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(),stones.end());
        while(stones.size() > 1){
            int st1 = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            int st2 = stones.front() ;
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            if(st1 == st2){
                continue;
            }
            else if(st1 > st2){
                stones.push_back(st1-st2);
                push_heap(stones.begin(),stones.end());
            }
            else{
                stones.push_back(st2-st1);
                push_heap(stones.begin(),stones.end());
            }
        }
        if(stones.empty()) 
            return 0;
        return stones[0];
    }
};
