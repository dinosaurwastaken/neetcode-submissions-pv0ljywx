class StockSpanner {
public:
    stack<int>data;
    StockSpanner() {}
    
    int next(int price) {
        int ret = 1;
        stack<int>temp = data;
        int size = data.size();
        int cont = 1;
        for(int i = 0 ; i < size ; i++){
            if(cont){
                if(i == 0 && temp.top() > price){
                    temp.pop();
                    break;
                }
                if(temp.top() <= price) ret++;
                else cont = 0;
            }
            temp.pop();
        }
        data.push(price);
        return ret;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */