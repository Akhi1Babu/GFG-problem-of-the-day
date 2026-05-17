class Solution {
  private:
    void Topo(vector<int> adj[],int V,vector<int> &result,int indegree[],queue<int> &que){
        while(!que.empty()){
            int node=que.front();
            que.pop();
            result.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    que.push(it);
                }
                
            }
        }
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        //creating adjacency list from edes ...
        vector<int> adj[V];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        int indegree[V]={0};
        for(int i=0;i<V;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> que;
        //pushing all nodes with indegree 0 in to the queue..
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                que.push(i);
            }
            
        }
        vector<int> result;
        Topo(adj,V,result,indegree,que);
        return result;
        
    }
};