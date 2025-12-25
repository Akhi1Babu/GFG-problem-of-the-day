class Solution {
private:
    int findinglargest(vector<int> &arr,int &colno){
        colno=max_element(arr.begin(),arr.end())-arr.begin();
        return colno;
        
        
    }
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        vector<int> result;
        for(int i=0;i<n;i++){
           
           
           int colno= findinglargest(mat[i],colno);
           int rowno=i;
           int topelement=(rowno-1>=0)? mat[rowno-1][colno]:INT_MIN;
           int bottomelement=(rowno+1<=n-1)?mat[rowno+1][colno]:INT_MIN;
           if(mat[i][colno]>topelement && mat[i][colno]>bottomelement){
               result.push_back(rowno);
               result.push_back(colno);
               return result;
           }
        }
        return result;
    }
};
