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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* revst = head;
        ListNode* revend = head;
        ListNode* st = head;
        ListNode* end = head;
        ListNode* mover = head;
        int i = 1 ;
        while(i <= right){
            if(i == left-1){
                st = mover;
            }
            if(i == left){
                revend = mover;
            }
            if(i == right){
                revst = mover;
                end = mover->next;
            }
            mover = mover->next;
            i++;
        }
        int n = right-left;
        ListNode* prev = revend;
        ListNode* curr = revend->next;
        while(n){
            n--;
            ListNode* temp = curr->next ;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        if(revend == st){
            revend->next = end;
            head = revst;
        }
        else{
            st->next = revst;
            revend->next = end;
        }
        return head;
    }
};