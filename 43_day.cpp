class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int x=1e9+7;
        vector<int>v(sum+1,0);
        v[0]=1;
        for(int i=0;i<n;i++){
            for(int j=sum;j>=arr[i];j--){
            v[j]+=v[j-arr[i]];
            v[j]=v[j]%x;
            }
        }
        
      return v[sum]; 
   
    
	}
	  
};
