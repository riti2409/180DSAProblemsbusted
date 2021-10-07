Node*mergetwoll(Node*a,Node*b){
    Node*temp=new Node(0);
    Node*res=temp;

    while(a!=NULL && b!=NULL){
        if(a->val<b->val){
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
        else{
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
    }
    if(a!=NULL) temp->bottom=a;
    else temp->bottom=b;

    return res->bottom;
}
Node*flattenll(Node*root){\
if(root==NULL || root->next==NULL) return root;

root->next=flattenll(root->next);
root=mergetwoll(root,root->next);
return root ;
}