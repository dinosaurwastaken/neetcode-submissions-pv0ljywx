/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node* , Node*>m1;
        Node* mover = head;
        Node* copy = new Node(0);
        Node* deepmover = copy;
        while(mover){
            Node*temp = new Node(mover->val);
            deepmover->next = temp;
            deepmover = temp;
            m1[mover] = temp;
            mover = mover->next;
        }
        mover = head;
        deepmover = copy->next;
        Node* mover1 = head;
        Node* mover2 = copy->next;
        while(mover != nullptr){
            Node* rand = mover->random;
            Node* temp = deepmover;
            if(rand == nullptr){
                temp->random = nullptr;
            }
            else{
                while(mover1 != rand){
                    cout << "test3" << endl;
                    mover1 = mover1->next;
                    mover2 = mover2->next;
                }
                temp->random = mover2;
                mover1 = head;
                mover2 = copy->next;
            }
            mover = mover->next;
            deepmover = deepmover->next;
        }
        return copy->next;
    }
};
