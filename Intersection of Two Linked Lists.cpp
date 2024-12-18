class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr=headA;
        ListNode *ptr1=headB;
        if(!ptr ||!ptr1){
            return NULL;
        }
        while(ptr!=ptr1){
            ptr=(ptr==NULL)?headB:ptr=ptr->next;
            ptr1=(ptr1==NULL)?headA:ptr1=ptr1->next;
        }
        return ptr;
    }
};
