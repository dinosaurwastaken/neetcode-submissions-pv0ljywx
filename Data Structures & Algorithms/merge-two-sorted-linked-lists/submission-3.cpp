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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* Ans = nullptr;
        ListNode* AnsMover;
        if(p1 == nullptr || p2 == nullptr){
            if(p1 == nullptr && p2 == nullptr){
                return Ans;
            }
            else if(p1 == nullptr){
                Ans = p2;
                ListNode*temp = p2->next;
                p2 = temp;
            }
            else if(p2 == nullptr){
                Ans = p1;
                ListNode*temp = p1->next;
                p1 = temp;
            }
            
        }
        else{
            if(p1->val > p2->val){
                Ans = p2;
                ListNode*temp = p2->next;
                p2 = temp;
                cout << Ans->val << " if1 "  <<  endl;
            }
            else{
                Ans = p1;
                ListNode*temp = p1->next;
                p1 = temp;
                cout << Ans->val << " if2 " << endl;
            }
        }
        AnsMover = Ans;
        while(p1 && p2){
            if(p1->val > p2->val){
                AnsMover->next = p2;
                AnsMover = p2;
                ListNode*temp = p2->next;
                p2 = temp;
                //cout << AnsMover->val <<  " while1 "<<  endl;
            }
            else{
                AnsMover->next = p1;
                AnsMover = p1;
                ListNode*temp = p1->next;
                p1 = temp;
                //cout << AnsMover->val << " while2 "<<endl;
            }
        }
        //cout << "test " << p1 << " test " << p2 << endl;
        while(p1){
            AnsMover->next = p1;
            AnsMover = p1;
            ListNode*temp = p1->next;
            p1 = temp;
            //cout << AnsMover->val << " whilefinal1 "<<endl;
        }
        while(p2){
            AnsMover->next = p2;
            AnsMover = p2;
            ListNode*temp = p2->next;
            p2 = temp;
            //cout << AnsMover->val << " whilefinal2 "<<endl;
        }
        return Ans;
    }
};
