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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode() ;
        ListNode* mover=ans;
        
        ListNode* n1 = l1;
        ListNode* n2 = l2;
        int carry = 0;
        while(n1 != nullptr && n2 != nullptr){
            int sum = n1->val + n2->val + carry;
            n1 = n1->next;
            n2 = n2->next;
            if(sum >= 10){
                carry = sum/10;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            mover->next = new ListNode(sum);
            mover = mover->next;
        }
        while(n1 != nullptr){
            int sum = n1->val + carry;
            n1 = n1->next;
            if(sum >=10){
                carry = sum/10;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            mover->next = new ListNode(sum);
            mover = mover->next;
        }
        while(n2 != nullptr){
            int sum = n2->val + carry;
            n2 = n2->next;
            if(sum >=10){
                carry = sum/10;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            mover->next = new ListNode(sum);
            mover = mover->next;
        }
        if(carry != 0){
            mover->next = new ListNode(carry);
        }
        ListNode* realans = ans->next;
        return  realans ;
    }
};
