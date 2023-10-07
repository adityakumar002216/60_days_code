/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        struct Node* newnode;
        newnode=new Node(data);
        
        struct Node* temp=head;
        if(temp->data>data){
            newnode->next=head;
            head=newnode;
            return head;
        }
        struct Node* pre;
        
        while(temp){
            
            if(data>=temp->data){
                pre=temp;
            temp=temp->next;
            
            }
            else
            break;
        }
        if(temp==NULL){
            pre->next=newnode;
        }
        else{
        pre->next=newnode;
        newnode->next=temp;
        }
        return head;
    }
};
