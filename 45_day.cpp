class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long solve(int n,vector<long long> &dp)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 4;
        
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(solve(n-1,dp) + solve(n-2,dp) + solve(n-3,dp))%1000000007;
    }
    long long countWays(int n)
    {
       vector<long long> dp(n+1,-1);
       return solve(n,dp);
    }
};
