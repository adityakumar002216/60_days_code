

class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > m, int n)
    {
        // code here 
        int totalSum=0,maxSum=0,rowSum,colSum;
        for(int i=0;i<n;i++)
        {
            rowSum=0;
            colSum=0;
            for(int j=0;j<n;j++)
            {
                totalSum+=m[i][j];
                rowSum +=m[i][j];
                colSum+=m[j][i];
            }
            maxSum=max(maxSum,max(rowSum,colSum));
        }
        
        return maxSum*n-totalSum;
    } 
};
