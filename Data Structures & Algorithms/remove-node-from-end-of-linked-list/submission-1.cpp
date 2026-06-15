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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* mover = head;
        int count = 0;
        while(mover){
            count++;
            mover = mover->next;
        }
        int st = count - n -1;
        mover = head;
        if(n == count){
            return head->next;
        }    
        else{
            while(st){
                st--;
                mover = mover->next;
            }
            ListNode* temp = mover->next;
            mover->next = temp->next;
        }
        return head;
    }
};
