class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long s=0,sum=0;
        for(int i=0;i<n;i++)
        s+=a[i];
        int i=0;
        while(i<n){
            sum+=a[i];
            if(sum-a[i]==s-sum)
            return i+1;
            i++;
            
        }
        return -1;
    }

};
