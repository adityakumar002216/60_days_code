class Solution{
public:

    void dfs(int i, int j, int n, int m, vector<vector<char>>&mat, vector<vector<int>>&vis){
        if(i<0 || j<0 || i>=n || j>=m || mat[i][j]=='X' || vis[i][j]==1)return;
        vis[i][j]=1;
        
        dfs(i-1,j,n,m,mat,vis);
        dfs(i+1,j,n,m,mat,vis);
        dfs(i,j-1,n,m,mat,vis);
        dfs(i,j+1,n,m,mat,vis);
        
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O' && vis[i][0]==0)
                dfs(i,0,n,m,mat,vis);
                
            if(mat[i][m-1]=='O' && vis[i][m-1]==0)
                dfs(i,m-1,n,m,mat,vis);
        }
        
        for(int i=0;i<m;i++){
            if(mat[0][i]=='O' && vis[0][i]==0)
                dfs(0,i,n,m,mat,vis);
                
            if(mat[n-1][i]=='O' && vis[n-1][i]==0)
                dfs(n-1,i,n,m,mat,vis);
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O' && vis[i][j]==0)mat[i][j]='X';
            }
        }
        
        return mat;
    }
};
