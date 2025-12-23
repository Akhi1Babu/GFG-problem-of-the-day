class Solution {
    private:
        int findcount(vector<int> &arr, vector<int> &query){
            int lowerboundindex=lower_bound(arr.begin(),arr.end(),query[0])-arr.begin();
            int upperboundindex=upper_bound(arr.begin(),arr.end(),query[1])-arr.begin();
            return upperboundindex-lowerboundindex;
            
            
        }

  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        vector<int> result;
        int n=queries.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
        int count=findcount(arr,queries[i]);
         result.push_back(count);
        }
       
        return result;
        
    }
};