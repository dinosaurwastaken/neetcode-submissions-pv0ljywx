class MinStack {
public:
    stack<int>minstack;
    stack<int>lowest;
    int miN= INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        minstack.push(val);
        val = min(val, lowest.empty() ? val : lowest.top());
        lowest.push(val);
    }
    
    void pop() {
        lowest.pop();
        minstack.pop();
    }
    
    int top() {
        return minstack.top();
    }
    
    int getMin() {
        return lowest.top();
    }
};
