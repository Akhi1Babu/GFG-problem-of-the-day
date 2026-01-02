class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        //using dutch national algorithm
        int n=arr.size();
        
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
                
            }
            
        }
    }
};