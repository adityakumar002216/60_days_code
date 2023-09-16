class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        long long  a=1,b=1;
        
        vector<long long>f;

        for(int i=0;i<n;i++){
            f.push_back(b);
           long long  c=a+b;
            b=a;
            a=c;
           
            
        }
        return f;
        
    }
};
