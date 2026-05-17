class Solution {
  private:
    void dfs(int node,vector<int>& result,vector<int> &vis,vector<int> arr[],int n){
            vis[node]=1;
            result.push_back(node);
            for(int it: arr[node]){
                if(vis[it]==0){
                    vis[it]=1;
                    dfs(it,result,vis,arr,n);
                }
            }
        
        
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
         int n=adj.size();
        
        //creating the adjcancy list...
        vector<int> arr[n];
        for(int i=0;i<n;i++){
            arr[i]=adj[i];
        }
        vector<int> result;
        vector<int> vis(n,0);
        
        dfs(0,result,vis,arr,n);
        return result;
        
    }
};