# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        p1 = list1
        p2 = list2
        head = None
        if p1 == None:
            return p2
        elif p2 == None:
            return p1
        if( p1.val > p2.val ):
            head = p2
            p2 = p2.next
        else:
            head = p1
            p1 = p1.next

        temp = head 

        while(p1 != None and p2 != None):
            if(p1.val > p2.val):
                t = p2.next
                temp.next = p2
                p2 = t
            else:
                t = p1.next
                temp.next = p1
                p1 = t
            temp = temp.next
        
        while(p1 != None ):
            temp.next = p1
            p1 = p1.next
            temp = temp.next
        
        while(p2 != None ):
            temp.next = p2
            p2 = p2.next
            temp = temp.next
        
        return head
        