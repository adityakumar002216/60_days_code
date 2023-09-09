class Solution
{
    public:
    void  check(Node *root, int &k,int &ans){
        if(!root)
        return ;
        check(root->right,k,ans);
        --k;
        if(k==0)
        ans=root->data;
        check(root->left,k,ans);
        
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans=-1;
         check(root,K,ans);
         return ans;
    }
};
