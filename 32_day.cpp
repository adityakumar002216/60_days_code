void printCorner(Node *root)
{

// Your code goes here
if(root==NULL)
  return;
  queue<Node*>s;
  s.push(root);
  cout<<root->data;
  while(!s.empty())
  {
    int k=s.size();
    vector<int>r;
    for(int i=1;i<=k;i++){
    Node* x=s.front();
        s.pop();
   if(x->left){
       r.push_back(x->left->data);
       s.push(x->left);
   }
        if(x->right){
       r.push_back(x->right->data);
        s.push(x->right);
        }
  
       
       }
       if(!r.empty()){
           if(r.size()==1)
           cout<<" "<<r[0];
           else
        cout<<" "<<r[0]<<" "<<r[r.size()-1];
        r.clear();
        
        }
          
            
    }

}
