class Solution{
    public:
    //Function to find the height of a binary tree.
    
    int hello(struct Node* node){
        int x,y;
        if(node==NULL)
        return 0;
      else{  
       x=  hello(node->left);
       y =hello(node->right);
        if(x>y)
        return x+1;
        else
        return y+1;
      }
    }
    int height(struct Node* node){
        // code here 
        return hello(node);
        
    }
};
