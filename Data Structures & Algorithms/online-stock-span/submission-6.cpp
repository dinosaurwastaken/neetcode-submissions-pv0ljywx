class StockSpanner {
public:
    vector<int>data;
    StockSpanner() {}
    
    int next(int price) {
        int ret = 1;
        int size = data.size();
        for(int i = 0 ; i < size ; i++){
            if(i == 0 && data[size-1] > price){
                break;
            }
            if(data[size-1-i] <= price) ret++;
            else break;
        }
        data.push_back(price);
        return ret;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */