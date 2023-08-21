class Solution {
public:
vector<vector<int>>v;
vector<int>r;

void solve(TreeNode* root){
  if(root==NULL)
  return;
  queue<TreeNode*>s;
  s.push(root);
  
  
  while(!s.empty())
  {
    int k=s.size();
    for(int i=1;i<=k;i++){
    TreeNode* x=s.front();
        s.pop();
   if(x->left){
       r.push_back(x->left->val);
       s.push(x->left);
   }
        if(x->right){
       r.push_back(x->right->val);
        s.push(x->right);
        }
  
       
       }
       if(!r.empty()){
        v.push_back(r);
        r.clear();
    }
      
  }    
  }

  vector<vector<int>> levelOrder(TreeNode* root) {
      if(root==NULL)
      return v;
       r.push_back(root->val);
       v.push_back(r);
       r.clear();
        solve(root);
        return v;
    }
};
