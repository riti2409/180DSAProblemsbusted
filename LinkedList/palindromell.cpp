class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
    
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};