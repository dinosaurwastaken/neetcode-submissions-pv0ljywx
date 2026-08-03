class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>d;
        queue<int>r;
        int n = senate.size();
        for(int i = 0 ; i < n ; i++){
            if(senate[i] == 'R') r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            int temp;
            if(r.front() < d.front()){
                d.pop();
                temp = r.front() + n;
                r.pop();
                r.push(temp);
            }
            else{
                r.pop();
                temp = d.front() + n;
                d.pop();
                d.push(temp); 
            }
        }
        return r.empty() ? "Dire" : "Radiant";
    }
};