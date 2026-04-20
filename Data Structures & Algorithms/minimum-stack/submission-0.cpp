class MinStack {
public:
    vector<int>minstack;
    map<int,int>lowest;
    MinStack() {
        
    }
    
    void push(int val) {
        minstack.push_back(val);
        lowest[val]++;
    }
    
    void pop() {
        lowest[minstack.back()]--;
        minstack.pop_back();
    }
    
    int top() {
        return minstack.back();
    }
    
    int getMin() {
        int ret;
        for(auto it : lowest){
            if(it.second > 0){
                ret = it.first;
                break;
            }
        }
        return ret;
    }
};
