Node* deleteNode(Node *head,int x)
{
    //Your code here
    struct Node *temp=head;
    struct Node *next=head->next;
    if(x==1){
        head=head->next;
    }
    int k=2;
    while(k<x)
    {
        temp=temp->next;
        next=next->next;
        k++;
        
    }
    temp->next=next->next;
    return head;
    
}
