class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]>=k){
                right=mid-1;
                
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};