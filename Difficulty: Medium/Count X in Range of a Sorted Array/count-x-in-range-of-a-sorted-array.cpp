class Solution {
private:
    int findingcount(vector<int> &arr,int l,int r, int x){
        int up=upper_bound(arr.begin()+l,arr.begin()+r+1,x)-arr.begin();
        int lw=lower_bound(arr.begin()+l,arr.begin()+r+1,x)-arr.begin();
        return up-lw;
        
    }
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int n=arr.size();
        int m1=queries.size(); //no of rows..
        vector<int> result;
        
        for(int i=0;i<m1;i++){
            int count=findingcount(arr,queries[i][0],queries[i][1],queries[i][2]);
            result.push_back(count);
        }
        return result;
        
    }
};