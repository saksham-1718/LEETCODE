class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode*cpt,*ptr,*n;
       cpt=head;
       ptr=NULL;
       while(cpt!=NULL){
        n=cpt->next;
        cpt->next=ptr;
        ptr=cpt;
        cpt=n;
       }
       return ptr;
}
};
