//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
    unsigned int k=1;
    while(n)
    {
        if(n%2!=0)
        return k;
        k++;
        n=n/2;
    }
    return 0;
    }
};
