class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        
        //creating the adjcancy list...
        vector<int> arr[n];
        for(int i=0;i<n;i++){
            arr[i]=adj[i];
        }
        //doing bfs traversal....
        queue<int> que;
        vector<int> result;
        vector<int> vis(n,0);
        que.push(0);
        vis[0]=1;
       
        while(!que.empty()){
            int temp=que.front();
            result.push_back(temp);
            que.pop();
            for(auto it:arr[temp]){
                if(vis[it]==0){
                    vis[it]=1;
                    que.push(it);
                    
                }
            }
            
            
        }
        return result;
    }
};