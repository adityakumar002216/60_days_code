class Solution{
public: 
    long long int largestPrimeFactor(long long int N){
        // code here
         long long int x=2;
        long long int ans=INT_MIN;
        for(x=2;x*x<=N;x++){
        while(N%x==0){
            
            N=N/x;
            
            ans=max(ans,x);
        }
            
            
        }
        
        if(N>1)
        ans=max(ans,N);
        return ans;
    }
};
