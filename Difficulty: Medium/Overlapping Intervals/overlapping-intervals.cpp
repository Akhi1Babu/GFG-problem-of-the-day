class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
            int start=arr[i][0];
            int end=arr[i][1];
            if(!result.empty() && end<=result.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(arr[j][0]<=end){
                    end=max(end,arr[j][1]);
                }
                else{
                    break;
                }
            }
            result.push_back({start,end});
            
        }
        return result;
        
    }
};