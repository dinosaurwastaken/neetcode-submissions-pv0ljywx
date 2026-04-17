class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>score;
        int res = 0;
        for(int i = 0 ; i < operations.size() ; i++ ){
            if(operations[i] == "+"){
                int a = score.top();
                score.pop();
                int nTop = a + score.top();
                //score.push(b);
                score.push(a);
                score.push(nTop);
                res += nTop;
            }
            else if(operations[i] == "D"){
                int c = score.top();
                score.push(c*2);
                res += score.top();
            }
            else if(operations[i] == "C"){
                res-=score.top();
                score.pop();
            }
            else{
                score.push(stoi(operations[i]));
                res += score.top();
            }
        }

        return res;
    }
};