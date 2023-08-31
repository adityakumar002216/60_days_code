class Solution
{
    public:
    Node* reverse(Node *head){
        Node* temp=head;
         Node* pre=NULL;
         Node* next;
        
        while(temp){
            next=temp->next;
            temp->next=pre;
            pre=temp;
            temp=next;
            }
            return pre;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        Node *rt=reverse(head);
        Node* temp=rt;
        while(temp){
            while(temp->next && temp->data>temp->next->data){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        
        return reverse(rt);
    }
    
};
