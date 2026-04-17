class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>score;
        for(int i = 0 ; i < operations.size() ; i++ ){
            if(operations[i] == "+"){
                int a = score.top();
                score.pop();
                int nTop = a + score.top();
                score.push(a);
                score.push(nTop);
            }
            else if(operations[i] == "D"){
                score.push(score.top()*2);
            }
            else if(operations[i] == "C"){
                score.pop();
            }
            else{
                score.push(stoi(operations[i]));
            }
        }
        int res = 0;
        int n = score.size();
        for(int i = 0 ; i < n ; i++){
            res += score.top();
            score.pop();
        }
        return res;
    }
};