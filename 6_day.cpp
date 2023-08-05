class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long i=0,k=INT_MAX;
    m--;
    while(m<n){
       k= min(k,(a[m]-a[i]));
       m++;
       i++;
    }
    return k;
    
    }   
};
