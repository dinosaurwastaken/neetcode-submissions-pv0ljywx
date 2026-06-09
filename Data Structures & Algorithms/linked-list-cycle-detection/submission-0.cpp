/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        set<ListNode*> add;
        ListNode*temp = head;
        ListNode*move = head;
        if(head != nullptr){
            add.insert(head);
        }
        if(head == nullptr){
            return false;
        }
        while(1){
            if(add.count(temp->next))
                return true;
            if(temp->next == nullptr)
                return false;
            else{
                add.insert(temp->next);
                temp = move->next;
                move = temp;
            }
        } 
    }
};
