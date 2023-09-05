class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>>v;
        vector<int>v1;
        for(int i=0;i<V;i++){
            for(int j=0;j<edges.size();j++){
                if(edges[j].first==i )
                v1.push_back(edges[j].second);
                else{
                if(edges[j].second==i)
                v1.push_back(edges[j].first);
                }
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }
};
