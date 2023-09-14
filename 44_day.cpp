class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        long long sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0)
        return 0;
        sum=sum/2;
        vector<int>v(sum+1,0);
        v[0]=1;
        for(int i=0;i<N;i++){
            for(int j=sum;j>=arr[i];j--){
            v[j]+=v[j-arr[i]];
            v[j]=v[j];
            }
        }
        
      return 0!=v[sum]; 
    }
};
