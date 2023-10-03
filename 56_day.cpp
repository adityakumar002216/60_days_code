class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string k="";
        
        while(n){
            n--;
            long long x=n%26;
            k+=('A'+x);
            n=n/26;
        }
        reverse(k.begin(),k.end());
        return k;
    }
};
