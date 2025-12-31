class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]-(mid+1)<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return k+low;
    }
};