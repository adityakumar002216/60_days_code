class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int y,int arr[],vector<int>&v,vector<int>adj[])
    {
        arr[y]=1;
        v.push_back(y);
        
        for(auto s:adj[y]){
            if(!arr[s]){
                dfs(s,arr,v,adj);
                
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int arr[V]={0};
        vector<int>v;
        int x=0;
        dfs(x,arr,v,adj);
        return v;
    }
};
