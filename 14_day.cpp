class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if(n==1|| n==2)
        return 1;
        int a=1,b=1;
        int ans;
        for(int i=0;i<n-2;i++){
          ans=a+b;
          ans=ans%1000000007;
          int temp=ans;
          b=a;
          a=ans;
            
        }
       return ans; 
    }
};
