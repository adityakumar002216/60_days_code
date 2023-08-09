class Solution {
public:
     int m,n;
 oid dfs(int i , int j , vector<vector<char>> &a , vector<vector<int>> &vis) {
        if(i < 0 || i >= m || j < 0 || j >= n || a[i][j] == '0' || vis[i][j]) return;

        vis[i][j] = 1;
        dfs(i+1,j,a,vis);
        dfs(i-1,j,a,vis);
        dfs(i,j+1,a,vis);
        dfs(i,j-1,a,vis);
    }

    int numIslands(vector<vector<char>>& grid) {
        m = (int)grid.size();
        n = (int)grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int islands = 0;
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(!vis[i][j] && grid[i][j] == '1') {
                    islands++;
                    dfs(i,j,grid,vis);
                }
            }
        }    
        return islands;
    }
};
