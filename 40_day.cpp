class Solution
{
    public:
    void check(Node* node, int data){
        if(node==NULL){
           
        return ;
        }
        if(node->data<data){
            if(node->right==NULL){
                struct Node *p;
                p=new Node(data);
                // p->data=data;
            node->right=p;
             return;
            }
            else
        check(node->right,data);
        }
        if(node->data>data){
            if(node->left==NULL){
            struct Node *p;
                p=new Node(data);
            node->left=p;
             return;
            }
            else
        check(node->left,data);
        }
        
    }
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            Node* temp=node;
            check(temp,data);
            return node;
    }
