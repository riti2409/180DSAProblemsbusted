class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    
        if(head==NULL|| head->next==NULL || k==0) return head;
        ListNode* curr = head;
        int len=1;
        while(curr->next ){
            ++len;
            curr = curr->next;
        } 
        
        curr->next=head;
        k=k%len;
        k=len-k;
        
        while(k--){
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};