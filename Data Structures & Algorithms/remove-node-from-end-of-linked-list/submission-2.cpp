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
        ListNode* p1 = head;
        ListNode* p2 = head;

        while(n+1){
            if(p2 == nullptr){
                return head->next;
            }
            n--;
            p2=p2->next;
        }
        while(p2){
            p1 = p1->next;
            p2 = p2->next;
        }
        ListNode* temp = p1->next->next;
        p1->next = temp;
        return head;
    }
};
