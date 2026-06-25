class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int i = 0;
        int st = i;
        int end = i;
        while(i < prices.size()-1){
            while((i < prices.size()-1) && prices[i+1] > prices[i]){
                i++;
                end = i;
            }
            profit += prices[end] - prices[st];
            while((i < prices.size()-1) && prices[i+1] <= prices[i] ){
                i++;
            }
            st = i;
        }
        return profit;
    }
};