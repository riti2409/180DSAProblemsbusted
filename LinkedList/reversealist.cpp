class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode* prev=NULL;
        
       
        while(head!=NULL){
            ListNode* n=head->next;
            head->next= prev;
            prev=head;
            head=n;
            
        }
        return prev;
    }
};