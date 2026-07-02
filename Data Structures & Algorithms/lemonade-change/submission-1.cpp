class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] != 5){
            return false;
        }
        int five = 0 ;
        int ten = 0 ;
        int twn = 0 ;
        for(int i = 0 ; i < bills.size() ; i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                ten++;
                five--;
            }
            else{
                twn++;
                if(five >= 1 && ten >= 1){
                    five--;
                    ten--;
                }
                else{
                    five -= 3;
                }
            }
            if(five < 0 || ten < 0 || twn < 0) return false;
        } 
        return true;
    }
};