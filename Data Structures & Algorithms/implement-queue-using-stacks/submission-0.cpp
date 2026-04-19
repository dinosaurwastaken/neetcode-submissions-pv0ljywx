class MyQueue {
public:
    stack<int>stacQ;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int>temp;
        int n = stacQ.size();
        for(int i = 0 ; i < n ; i++){
            temp.push(stacQ.top());
            stacQ.pop();
        }
        stacQ.push(x);
        for(int i = 0 ; i < n ; i++){
            stacQ.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        int temp = stacQ.top();
        stacQ.pop();
        return temp;
    }
    
    int peek() {
        return stacQ.top();
    }
    
    bool empty() {
        return stacQ.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */