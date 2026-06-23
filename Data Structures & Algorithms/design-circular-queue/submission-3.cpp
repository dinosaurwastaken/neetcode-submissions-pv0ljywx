class MyCircularQueue {
public:
    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int x){
            val = x;
            next = nullptr;
        }
        ListNode(int x , ListNode* n){
            val = x;
            next = n;
        }
        ListNode(ListNode*n){
            next = n;
        }
        ListNode(){
            val = 0 ;
            next = nullptr;
        }
    };
    int count = 0;
    int max = 0;
    ListNode * head = new ListNode();
    ListNode * mover = head;
    MyCircularQueue(int k) {
        max = k;
    }
    bool enQueue(int value) {
        if(count < max){
            ListNode * temp = new ListNode(value);
            mover->next = temp;
            mover = temp;
            count++;
            return true;
        }
        else return false;
    }
    
    bool deQueue() {
        if(count){
            ListNode* Next = head->next->next;
            head->next = Next;
            if(count == 1){
                mover = head;
            }
            count--;
            return true;
        }
        else return false;
    }
    
    int Front() {
        if(count == 0) return -1;
        return head->next->val;
    }
    
    int Rear() {
        if(count == 0)return -1;
        return mover->val;
    }
    
    bool isEmpty() {
        if(count == 0) 
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if(count == max) 
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */