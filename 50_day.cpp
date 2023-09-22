class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        
        int start=0,t=0,end=n-1,u=n-1;
        vector<int>v;
        int ans=-1;
        
        
        while(t<=u)
        {
            int mid=(t+u)/2;
            
         if(arr[mid]==x){
            ans=mid;
            if(arr[mid-1]!=x && mid-1>=0)
            break;
            else
            u=mid-1;
            
         }
            else if(arr[mid]<x)
            t=mid+1;
            else
           u=mid-1;
            
        }
        
         v.push_back(ans);
         
         while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==x){
            ans=mid;
            if(arr[mid+1]!=x&& mid+1<=n-1)
            break;
            else
            start=mid+1;
            
            }
             else if(arr[mid]<x)
            start=mid+1;
            else 
            end=mid-1;
         
              }
         v.push_back(ans);
         
        return v;
        
    }
};
