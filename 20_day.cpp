class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int ans=-1;
		int t=-1;
		int occurence(int arr[],int low,int high,int x){
		    int y;
		    int p=low;
		    int q=high;
		    
		    while(low<=high)
		    {
	            y=(low+high)/2;
	             if(arr[y]==x){
	            ans=y;
	           low=y+1;
	           
	       }
	        else if(arr[y]>x)
	        high=y-1;
	        else
	        low=y+1;
	    }
	    while(p<=q)
		    {
	            y=(p+q)/2;
	             if(arr[y]==x){
	            t=y;
	           q=y-1;
	           
	       }
	        else if(arr[y]>x)
	        q=y-1;
	        else
	        p=y+1;
	    }
	    
	   // cout<<t<<" "<<ans;
	    if(ans==-1 && t==-1)
	    return 0;
	    return  ans-t+1;
	            
	            
		}
	int count(int arr[], int n, int x) {
	    // code here
	    int low=0;
	    int ans=0;
	    int high=n-1;
	    ans=occurence(arr,low,high,x);
	    
	    return ans;
	}
};
