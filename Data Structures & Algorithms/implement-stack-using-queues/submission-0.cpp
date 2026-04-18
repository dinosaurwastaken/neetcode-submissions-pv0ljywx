class MyStack {
public:
    queue<int>stack;
    MyStack() {}
    
    void push(int x) {
        stack.push(x);
    }
    
    int pop() {
        int Size = stack.size();
        queue<int>temp;
        for(int i = 0 ; i < Size-1 ; i++){
            temp.push(stack.front());
            stack.pop();
        }
        int ret = stack.front();
        stack = temp;
        return ret;
    }
    
    int top() {
        queue<int>temp = stack;
        int Size = stack.size();
        for(int i = 0 ; i < Size-1 ; i++){
            temp.pop();
        }
        return temp.front();
    }
    
    bool empty() {
        return !stack.size();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */