class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
         if (n == 0) {
            return 1;
        } 
        int x = 1e9 + 7;
        vector<long long> v(n + 1, 0);
        v[0] = v[1] = 1;
        for (int i = 2; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                v[i] = (v[i] + (v[j] * v[i - j - 1]) % x) % x;
            }
        } 
        return (v[n]);
    }
}