class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* l3= new ListNode(0);
      ListNode*ptr=l3;
      int carry=0;
      while(l1||l2||carry){
        int sum=carry;
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }

        carry=sum/10;
        ptr->next=new ListNode(sum%10);
        ptr=ptr->next;
      }
      ListNode* result = l3;
        if (result != nullptr && result->val == 0) {
            ListNode* temp = result;
            result = result->next;
            delete temp; 
        }
        
        return result;
    }
};
