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
        if(lowest[minstack.back()] == 0)
            lowest.erase(minstack.back());
        minstack.pop_back();
    }
    
    int top() {
        return minstack.back();
    }
    
    int getMin() {
        auto it = lowest.begin();
        return it->first;
    }
};
