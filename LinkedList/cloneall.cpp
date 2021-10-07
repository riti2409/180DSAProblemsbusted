class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        unordered_map<Node*,Node*> M;
        Node* cur=head;
        Node* prev=NULL;
        Node* newHead=NULL;
        while(cur){
            Node* node=new Node(cur->val);
            if(!prev) newHead=node;
            else prev->next=node;
            prev=node;
            M[cur]=node;
            cur=cur->next;
        }
        cur=head;
        Node* tmp=newHead;
        while(cur){
            Node* hey =cur->random;
            if(!hey) tmp->random=NULL;
            else tmp->random =M[hey];
            tmp=tmp->next;
            cur=cur->next;
        }
        return newHead;
    }
};