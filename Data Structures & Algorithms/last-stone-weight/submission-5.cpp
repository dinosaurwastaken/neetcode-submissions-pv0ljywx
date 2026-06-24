class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>stone;
        for(auto it : stones){
            stone.push(it);
        }
        while(stone.size() > 1){
            int st1 = stone.top();
            stone.pop();
            int st2 = stone.top();
            stone.pop();
            if(st1 > st2){
                stone.push(st1-st2);
                
            }
        }
        if(stone.empty()) 
            return 0;
        return stone.top();
    }
};
